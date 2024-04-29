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
           output [31:0]print_reg[0:31]); // Whehther to finish simulation
  /***** Wire declarations *****/
  //PC
  wire [31:0] current_pc;
  wire [31:0] next_pc;
  //Imem
  wire [31:0] imem_out;
  //Register
  wire [4:0] rs1;
  wire [4:0] rs2;
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
  wire [6:0] alu_op;
  wire is_ecall;
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

  wire is_stall;

  wire ID_EX_is_halted_temp;
  //Forwarding
  wire [1:0] forward_A;
  wire [1:0] forward_B;
  wire [31:0] forWard_B_out;
  wire [1:0]mux_rs1_dout;
  wire mux_rs2_dout;
  wire [31:0] f_rs1_dout;
  wire [31:0] f_rs2_dout;

  /***** Register declarations *****/
  // You need to modify the width of registers
  // In addition, 
  // 1. You might need other pipeline registers that are not described below
  // 2. You might not need registers described below
  /***** IF/ID pipeline registers *****/
  reg IF_ID_inst;           // will be used in ID stage
  /***** ID/EX pipeline registers *****/
  // From the control unit
  reg ID_EX_alu_op;         // will be used in EX stage
  reg ID_EX_alu_src;        // will be used in EX stage
  reg ID_EX_mem_write;      // will be used in MEM stage
  reg ID_EX_mem_read;       // will be used in MEM stage
  reg ID_EX_mem_to_reg;     // will be used in WB stage
  reg ID_EX_reg_write;      // will be used in WB stage
  // From others
  reg [31:0] ID_EX_rs1_data;
  reg [31:0] ID_EX_rs2_data;
  reg [31:0] ID_EX_imm;
  reg [31:0] ID_EX_ALU_ctrl_unit_input;
  reg [4:0] ID_EX_rd;
  reg ID_EX_is_halted;

  reg [4:0] ID_EX_rs1;
  reg [4:0] ID_EX_rs2;

  /***** EX/MEM pipeline registers *****/
  // From the control unit
  reg EX_MEM_mem_write;     // will be used in MEM stage
  reg EX_MEM_mem_read;      // will be used in MEM stage
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
  // From others
  reg MEM_WB_mem_to_reg_src_1;
  reg MEM_WB_mem_to_reg_src_2;

  reg [4:0] MEM_WB_rd;
  reg MEM_WB_is_halted;


  assign rs2 = IF_ID_inst[24:20];
  assign rd = MEM_WB_rd;
  assign ID_EX_is_halted_temp = is_ecall & (f_rs1_dout==10)&(rs1==17);
  assign is_halted = MEM_WB_is_halted;

  Mux2to1 mux_is_ecall(
    .in0(IF_ID_inst[19:15]),
    .in1(5'b10001),
    .sell(is_ecall),
    .out(rs1)
  );

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(current_pc)   // output
  );

  Adder PC_adder(
    .in1(current_pc),
    .in2(32'd4),
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
    end
    else if (IF_ID_write) begin
      IF_ID_inst <= imem_out;
    end
  end

  // ---------- Register File ----------
  RegisterFile reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (rs1),          // input
    .rs2 (rs2),          // input
    .rd (rd),           // input
    .rd_din (rd_din),       // input
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
    .alu_op(alu_op),        // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IF_ID_inst),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // Update ID/EX pipeline registers here
  always @(posedge clk) begin
    if (reset | is_stall) begin
      // From ControlUnit
      ID_EX_alu_op <= 0;         
      ID_EX_alu_src <= 0;        
      ID_EX_mem_write <= 0;      
      ID_EX_mem_read <= 0;       
      ID_EX_mem_to_reg <= 0;     
      ID_EX_reg_write <= 0;      
      // From others
      ID_EX_rs1_data <= 0;
      ID_EX_rs2_data <= 0;
      ID_EX_imm <= 0;
      ID_EX_ALU_ctrl_unit_input <= 0;
      ID_EX_rd <= 0;
      ID_EX_is_halted <= 0;
      ID_EX_rs1 <= 0;
      ID_EX_rs2 <= 0;
    end
    else begin
      // From ControlUnit
      ID_EX_alu_op <= alu_op;         
      ID_EX_alu_src <= alu_src;       
      ID_EX_mem_write <= mem_write;      
      ID_EX_mem_read <= mem_read;       
      ID_EX_mem_to_reg <= mem_to_reg;   
      ID_EX_reg_write <= reg_write;     
      // From others
      ID_EX_rs1_data <= f_rs1_dout;
      ID_EX_rs2_data <= f_rs2_dout;
      ID_EX_imm <= imm_gen_out;
      ID_EX_ALU_ctrl_unit_input <= IF_ID_inst;
      ID_EX_rd <= IF_ID_inst[11:7];
      ID_EX_is_halted <= ID_EX_is_halted_temp;
      ID_EX_rs1 <= rs1;
      ID_EX_rs2 <= rs2;
    end
  end

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit (
    .part_of_inst(ID_EX_ALU_ctrl_unit_input),  // input
    .opcode(ID_EX_alu_op),
    .alu_op(func_code)         // output
  );

  // ---------- ALU ----------
  ALU alu (
    .alu_op(func_code),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
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
    end
    else begin
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
    end
  end

  // ---------- Data Memory ----------
  DataMemory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (EX_MEM_alu_out),       // input
    .din (EX_MEM_dmem_data),        // input
    .mem_read (EX_MEM_mem_read),   // input
    .mem_write (EX_MEM_mem_write),  // input
    .dout (dmem_out)        // output
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
    end
    else begin
      //From ControlUnit
      MEM_WB_mem_to_reg <= EX_MEM_mem_to_reg;
      MEM_WB_reg_write <= EX_MEM_reg_write;
      //From others
      MEM_WB_mem_to_reg_src_1 <= dmem_out;
      MEM_WB_mem_to_reg_src_2 <= EX_MEM_alu_out;
      MEM_WB_is_halted <= EX_MEM_is_halted;
      MEM_WB_rd <= EX_MEM_rd;
    end
  end

  MUX2to1 Reg_Write_MUX (
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
    .ForwardA(forward_A),
    .ForwardB(forward_B)
  );

  Mux4to1 mux_forward_A(
    .in0(ID_EX_rs1_data),
    .in1(EX_MEM_alu_out),
    .in2(rd_din),
    .in3(0),
    .sel(forward_A),
    .out(alu_in_1)
  );

  Mux4to1 mux_forward_B(
    .in0(ID_EX_rs2_data),
    .in1(EX_MEM_alu_out),
    .in2(rd_din),
    .in3(0),
    .sel(forward_B),
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
    .fromWBrd(rd),
    .EX_MEM_rd(EX_MEM_rd),
    .is_ecall(is_ecall),
    .mux_rs1_dout(mux_rs1_dout),
    .mux_rs2_dout(mux_rs2_dout)
  );

  Mux4to1 Mux_rs1_dout(
    .in0(rd_din),
    .in1(rs1_dout),
    .in2(EX_MEM_alu_out),
    .in3(0),
    .sel(mux_rs1_dout),
    .out(f_rs1_dout)
  );  

  Mux2to1 Mux_rs2_dout(
    .in0(rd_din),
    .in1(rs2_dout),
    .sel(mux_rs2_dout),
    .out(f_rs2_dout)
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
