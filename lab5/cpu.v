// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify modules (except InstMemory, DataMemory, and RegisterFile)
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted, // Whehther to finish simulation
           output [31:0]print_reg[0:31], // Whehther to finish simulation
           output [31:0]number_of_total_access,
           output [31:0]number_of_miss);
  /***** Wire declarations *****/
  //PC
  wire [31:0] current_pc;
  wire [31:0] next_pc;

  //Imem
  wire [31:0] imem_out;
  
  //Register
  reg [4:0] rs1;
  reg [4:0] rs2;
  wire [4:0] rd;
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;  
  wire [31:0] rd_din;
  
  //Control
  wire mem_read;
  wire mem_to_reg;
  wire mem_write;
  wire alu_src;
  wire reg_write;
  wire pc_to_reg;
  wire [4:0] alu_op;
  wire is_ecall;

  wire is_jal;
  wire is_jalr;
  wire branch;
  wire [31:0] pc_imm;
  wire [31:0] mux_rd_din;
  
  //ImmGen
  wire [31:0] imm_gen_out;
  
  //HazardUnit
  wire is_stall;
  
  //ALU, ALUCtrl
  wire [4:0] func_code;
  wire [31:0] alu_in_1;
  wire [31:0] alu_in_2;
  wire [31:0] alu_result;
  wire alu_bcond;
  
  //Dmem
  wire [31:0] dmem_out;

  reg check_is_halted;
  
  //Forwarding
  wire [1:0] ForwardA_sel;
  wire [1:0] ForwardB_sel;
  wire [31:0] forWard_B_out;
  wire [1:0] mux_rs1_sel;
  wire mux_rs2_sel;
  wire [31:0] forwarding_rs1_dout;
  wire [31:0] forwarding_rs2_dout;

  wire [31:0] in1_alu_out;
  wire [31:0] in2_rd_din;

  wire is_input_valid;
  wire [31:0] mem_rw_32;
  wire mem_rw;
  wire is_ready;
  wire is_output_valid;
  wire is_hit;
  // wire is_miss;
  wire mem_access;
  wire cache_stall;

  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg [31:0] IF_ID_inst;           // will be used in ID stage
  reg [31:0] IF_ID_pc;
  reg [4:0] IF_ID_BHSR;
  reg IF_ID_is_flush;

  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg [4:0] ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  reg ID_EX_pc_to_reg;
  
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [31:0] ID_EX_ALU_ctrl_unit_input;
  reg [4:0] ID_EX_rd;
  reg ID_EX_is_halted;

  reg [4:0] ID_EX_rs1;
  reg [4:0] ID_EX_rs2;
  
  reg ID_EX_branch;
  reg ID_EX_is_jal;
  reg ID_EX_is_jalr;
  reg [31:0] ID_EX_pc;
  reg [4:0] ID_EX_BHSR;

  reg branch_or_jmp;
  reg ID_EX_branch_taken;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
  reg EX_MEM_pc_to_reg;
  reg [31:0] EX_MEM_pc;
  // reg EX_MEM_is_branch;     // will be used in MEM stage
  reg EX_MEM_mem_to_reg;    // will be used in WB stage
  reg EX_MEM_reg_write;     // will be used in WB stage
  // From others
  reg [31:0] EX_MEM_alu_out;
  reg [31:0] EX_MEM_dmem_data;
  reg [4:0] EX_MEM_rd;
  reg EX_MEM_is_halted;

  /***** MEM/WB pipeline registers *****/
  // From the control unit
  reg MEM_WB_mem_to_reg;    // will be used in WB stage
  reg MEM_WB_reg_write;     // will be used in WB stage
  reg MEM_WB_pc_to_reg; 
  reg [31:0] MEM_WB_pc;
  // From others
  reg [31:0] MEM_WB_mem_to_reg_src_1;
  reg [31:0] MEM_WB_mem_to_reg_src_2;

  reg [4:0] MEM_WB_rd;
  reg MEM_WB_is_halted;

  assign rs2 = IF_ID_inst[24:20];
  assign rd = MEM_WB_rd;
  assign check_is_halted = is_ecall & (forwarding_rs1_dout==10)&(rs1==17);
  assign is_halted = MEM_WB_is_halted;

  wire [4:0] BHSR;
  wire [31:0] predicted_pc;
  reg [31:0] correct_pc;
  reg is_correct;
  wire is_flush;

  always @(is_ecall or IF_ID_inst) begin
    if (is_ecall)
        rs1 = 5'b10001;  
    else
        rs1 = IF_ID_inst[19:15]; 
  end

  assign mem_access = EX_MEM_mem_read | EX_MEM_mem_write;
  assign cache_stall = mem_access & (!is_ready | !is_output_valid | !is_hit);

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .pc_write(!is_stall),
    .cache_stall(cache_stall),
    .current_pc(current_pc)   // output
  );

  // Adder PC_adder(
  //   .in1(current_pc),
  //   .in2(32'd4),
  //   .out(next_pc)
  // );

  // Calculate whether the branch condition is satisfied or not
  assign ID_EX_branch_taken = ID_EX_branch & alu_bcond;

  // Calculate whether a branch or jump instruction occurred or not
  assign branch_or_jmp = ID_EX_branch_taken | ID_EX_is_jal | ID_EX_is_jalr;

  // Instantiate the branch prediction unit
  PredictionUnit PC_predict(
    .reset(reset),
    .clk(clk),
    .IF_pc(current_pc), // PC in the IF stage
    .ID_EX_pc(ID_EX_pc), // PC in the ID/EX stage
    .branch_or_jmp(branch_or_jmp), // Whether a branch or jump occurred
    .ID_EX_is_jal(ID_EX_is_jal), // Jal instruction in ID/EX stage
    .ID_EX_is_jalr(ID_EX_is_jalr), // Jalr instruction in ID/EX stage
    .ID_EX_branch(ID_EX_branch), // Branch instruction in ID/EX stage
    .alu_bcond(alu_bcond), // Branch condition from the ALU
    .ID_EX_branch_taken(ID_EX_branch_taken), // Whether the branch is taken in ID/EX stage
    .pc_imm(pc_imm), // PC + immediate value in EX stage
    .alu_result(alu_result), // ALU result in EX stage
    .ID_EX_BHSR(ID_EX_BHSR), // BHSR (Branch History Shift Register) in ID/EX stage
    .BHSR(BHSR), // Output BHSR
    .predicted_pc(predicted_pc) // Output predicted PC
  );

  // Calculate the correct PC value based on the instruction type
  always @(*) begin
    case ({ID_EX_is_jalr, ID_EX_is_jal, ID_EX_branch_taken})
        3'b100: correct_pc = alu_result; // For jalr instructions, use the ALU result
        3'b010: correct_pc = pc_imm; // For jal instructions, use PC + immediate
        3'b001: correct_pc = pc_imm; // For taken branches, use PC + immediate
        default: correct_pc = ID_EX_pc + 32'd4; // Otherwise, use PC + 4
    endcase
    // is_miss = 1'b0;
  end

  // Check if the branch prediction was correct or not
  always @(*) begin
    is_correct = 1'b1; // Initialize as correct
    if (ID_EX_pc != 0 && IF_ID_pc != correct_pc) begin
        is_correct = 1'b0; // Set as incorrect if the prediction was wrong
    end
  end

  // Generate the flush signal based on the prediction correctness
  assign is_flush = !is_correct;

  Mux2to1 mux_next_pc(
    .in0(correct_pc),
    .in1(predicted_pc),
    .sel(is_correct),
    .out(next_pc)
  );
  
  // ---------- Instruction Memory ----------
  InstMemory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(current_pc),    // input
    .dout(imem_out)     // output
  );

  // Update IF/ID pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      IF_ID_inst <= 0;

      IF_ID_pc <=0;
      IF_ID_BHSR <= 0;
      IF_ID_is_flush <=0;
    end
    else if (!is_stall & !cache_stall) begin
      IF_ID_inst <= imem_out;

      IF_ID_pc <= current_pc;
      IF_ID_BHSR <= BHSR;
      IF_ID_is_flush <= is_flush;
    end
    // $display("%d", current_pc);
  end
  
  assign mux_rd_din = MEM_WB_pc_to_reg ? MEM_WB_pc + 32'd4 : rd_din;

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1),          // input
    .rs2 (rs2),          // input
    .rd (rd),           // input
    .rd_din (mux_rd_din),       // input
    .write_enable (MEM_WB_reg_write),    // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),      // output
    .print_reg(print_reg)
  );


  // ---------- Control Unit ----------
  ControlUnit ctrl_unit (
    .part_of_inst(IF_ID_inst[6:0]),  // input
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(reg_write),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_jal(is_jal),
    .is_jalr(is_jalr),
    .branch(branch),
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset | (is_stall & !cache_stall) | IF_ID_is_flush | is_flush) begin
      // From ControlUnit
      ID_EX_alu_op <= 0;         
      ID_EX_alu_src <= 0;        
      ID_EX_mem_write <= 0;      
      ID_EX_mem_read <= 0;       
      ID_EX_mem_to_reg <= 0;     
      ID_EX_reg_write <= 0;    

      ID_EX_is_jal <= 0;
      ID_EX_is_jalr <= 0;
      ID_EX_branch <= 0;
      ID_EX_pc_to_reg <= 0;
        
      // From others
      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_imm <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rd <= 0;
      ID_EX_is_halted <= 0;
      ID_EX_rs1 <= 0;
      ID_EX_rs2 <= 0;

      ID_EX_pc<=0;
      ID_EX_BHSR <= 0;
    end
    else if (!cache_stall) begin
      // From ControlUnit
      ID_EX_alu_op <= alu_op;         
      ID_EX_alu_src <= alu_src;       
      ID_EX_mem_write <= mem_write;      
      ID_EX_mem_read <= mem_read;       
      ID_EX_mem_to_reg <= mem_to_reg;   
      ID_EX_reg_write <= reg_write;

      ID_EX_is_jal <= is_jal;
      ID_EX_is_jalr <= is_jalr;
      ID_EX_branch <= branch;
      ID_EX_pc_to_reg <= pc_to_reg;

      // From others
      ID_EX_rs1_data <= forwarding_rs1_dout;
      ID_EX_rs2_data <= forwarding_rs2_dout;
      ID_EX_imm <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= IF_ID_inst;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_is_halted <= check_is_halted;
      ID_EX_rs1 <= rs1;
      ID_EX_rs2 <= rs2;

      ID_EX_pc<= IF_ID_pc;
      ID_EX_BHSR <= IF_ID_BHSR;
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .part_of_inst({ID_EX_ALU_ctrl_unit_input[31:25], ID_EX_ALU_ctrl_unit_input[14:12], ID_EX_ALU_ctrl_unit_input[6:0]}),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu (
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

  Adder adder_pc_imm(
    .in1(ID_EX_pc),
    .in2(ID_EX_imm),
    .out(pc_imm)
  );

  // Update EX/MEM pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      //From ControlUnit
      EX_MEM_mem_write <= 0;
      EX_MEM_mem_read <= 0;
      EX_MEM_mem_to_reg <= 0;
      EX_MEM_reg_write <= 0;
      //From others
      EX_MEM_alu_out <= 0;
      EX_MEM_dmem_data <= 0;
      EX_MEM_rd <= 0;
      EX_MEM_is_halted <= 0;

      EX_MEM_pc_to_reg <= 0;
      EX_MEM_pc <= 0;
    end
    else if (!cache_stall)begin
      //From ControlUnit
      EX_MEM_mem_write <= ID_EX_mem_write;
      EX_MEM_mem_read <= ID_EX_mem_read;
      EX_MEM_mem_to_reg <= ID_EX_mem_to_reg;
      EX_MEM_reg_write <= ID_EX_reg_write;
      //From others
      EX_MEM_alu_out <= alu_result;
      EX_MEM_dmem_data <= forWard_B_out;
      EX_MEM_rd <= ID_EX_rd;
      EX_MEM_is_halted <= ID_EX_is_halted;

      EX_MEM_pc_to_reg <= ID_EX_pc_to_reg;
      EX_MEM_pc <= ID_EX_pc;
    end
  end

  // // ---------- Data Memory ----------
  // DataMemory dmem(
  //   .reset (reset),      // input
  //   .clk (clk),        // input
  //   .addr (EX_MEM_alu_out),       // input
  //   .din (EX_MEM_dmem_data),        // input
  //   .mem_read (EX_MEM_mem_read),   // input
  //   .mem_write (EX_MEM_mem_write),  // input
  //   .dout (dmem_out)        // output
  // );

  assign is_input_valid = EX_MEM_mem_read | EX_MEM_mem_write;

  Mux2to1 mem_rw_32_mux (
      .in0(32'b1),          
      .in1(32'b0),          
      .sel(EX_MEM_mem_read),
      .out(mem_rw_32)
  );

  assign mem_rw = mem_rw_32[0];

  Cache cache(
    .reset(reset),
    .clk(clk),
    .is_input_valid(is_input_valid),
    .addr(EX_MEM_alu_out),
    .mem_rw(mem_rw),
    .din(EX_MEM_dmem_data),
    .is_ready(is_ready),
    .is_output_valid(is_output_valid),
    .dout(dmem_out),
    .is_hit(is_hit),
    .number_of_total_access(number_of_total_access),
    .number_of_miss(number_of_miss)
  );

  // Update MEM/WB pipeline registers here
  always @(posedge clk) begin
    if (reset) begin
      //From ControlUnit
      MEM_WB_mem_to_reg <= 0;
      MEM_WB_reg_write <= 0;
      //From others
      MEM_WB_mem_to_reg_src_1 <= 0;
      MEM_WB_mem_to_reg_src_2 <= 0;
      MEM_WB_is_halted <= 0;
      MEM_WB_rd <= 0;

      MEM_WB_pc_to_reg <= 0;
      MEM_WB_pc <= 0;
    end
    else if (!cache_stall) begin
      //From ControlUnit
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      //From others
      MEM_WB_mem_to_reg_src_1 <= EX_MEM_alu_out;
      MEM_WB_mem_to_reg_src_2 <= dmem_out;
      MEM_WB_is_halted <= EX_MEM_is_halted;
      MEM_WB_rd <= EX_MEM_rd;

      MEM_WB_pc_to_reg <= EX_MEM_pc_to_reg;
      MEM_WB_pc <= EX_MEM_pc;
    end
  end

  Mux2to1 mux_mem_to_reg (
    .in0(MEM_WB_mem_to_reg_src_1), 
    .in1(MEM_WB_mem_to_reg_src_2), 
    .sel(MEM_WB_mem_to_reg), 
    .out(rd_din)
  );

  ForwardingUnit FU(
    .ID_EX_rs1(ID_EX_rs1),
    .ID_EX_rs2(ID_EX_rs2),
    .EX_MEM_rd(EX_MEM_rd),
    .MEM_WB_rd(MEM_WB_rd),
    .EX_MEM_RegWrite(EX_MEM_reg_write),
    .MEM_WB_RegWrite(MEM_WB_reg_write),
    .ForwardA(ForwardA_sel),
    .ForwardB(ForwardB_sel)
  );

  // The in1_alu_out signal is determined as follows:
  // If the EX_MEM_pc_to_reg signal is 1, it is set to EX_MEM_pc + 4.
  // Otherwise, it is set to EX_MEM_alu_out.
  // This value is used in the forwarding unit.
  assign in1_alu_out = EX_MEM_pc_to_reg ? EX_MEM_pc + 32'd4 : EX_MEM_alu_out;

  // The in2_rd_din signal is determined as follows:
  // If the MEM_WB_pc_to_reg signal is 1, it is set to MEM_WB_pc + 4.
  // Otherwise, it is set to rd_din.
  // This value is also used in the forwarding unit.
  assign in2_rd_din = MEM_WB_pc_to_reg ? MEM_WB_pc + 32'd4 : rd_din;

  Mux4to1 mux_forward_A(
    .in0(ID_EX_rs1_data),
    .in1(in1_alu_out),
    .in2(in2_rd_din),
    .in3(0),
    .sel(ForwardA_sel),
    .out(alu_in_1)
  );

  Mux4to1 mux_forward_B(
    .in0(ID_EX_rs2_data),
    .in1(in1_alu_out),
    .in2(in2_rd_din),
    .in3(0),
    .sel(ForwardB_sel),
    .out(forWard_B_out)
  );

  Mux2to1 mux_ID_EX_alu_src(
    .in0(forWard_B_out),
    .in1(ID_EX_imm),
    .sel(ID_EX_alu_src),
    .out(alu_in_2)
  );

  ForwardingEcallUnit FEU(
    .rs1(rs1), 
    .rs2(rs2),
    .is_ecall(is_ecall),
    .EX_MEM_rd(EX_MEM_rd),
    .mux_rs1_sel(mux_rs1_sel),
    .mux_rs2_sel(mux_rs2_sel)
  );

  Mux4to1 Mux_forwarding_rs1_dout(
    .in0(in2_rd_din),
    .in1(rs1_dout),
    .in2(in1_alu_out),
    .in3(0),
    .sel(mux_rs1_sel),
    .out(forwarding_rs1_dout)
  );  

  Mux2to1 Mux_forwarding_rs2_dout(
    .in0(in2_rd_din),
    .in1(rs2_dout),
    .sel(mux_rs2_sel),
    .out(forwarding_rs2_dout)
  );

  HazardDetectionUnit HDU(
    .rs1(rs1),
    .rs2(rs2),
    .ID_EX_rd(ID_EX_rd),
    .EX_MEM_rd(EX_MEM_rd),
    .ID_EX_mem_read(ID_EX_mem_read),
    .EX_MEM_mem_read(EX_MEM_mem_read),
    .is_ecall(is_ecall),
    .is_stall(is_stall)
  );
  
endmodule
