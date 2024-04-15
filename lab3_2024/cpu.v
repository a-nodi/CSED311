// Submit this file with other files you created.
// Do not touch port declarations of the module 'CPU'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required
`include "Mux2to1.v"
`include "Mux4to1.v"
`include "ALU.v"

module cpu(input reset,       // positive reset signal
           input clk,         // clock signal
           output is_halted,
           output [31:0]print_reg[0:31]
           ); // Whehther to finish simulation
  /***** Wire declarations *****/
  wire [31:0] current_pc;
  wire [31:0] next_pc;
  wire pc_write_enable;
  wire [31:0] alu_result;
  wire alu_bcond;
  wire [31:0] addr;  // Memory address
  wire i_or_d;       // Memory address selection signal
  reg [4:0] rs1;    // Source register 1
  wire [4:0] rs2;    // Source register 2
  wire [31:0] rs1_dout;
  wire [31:0] rs2_dout;
  wire [31:0] rd_din;
  wire alu_src_a;
  wire [1:0] alu_src_b;
  wire reg_write;
  wire mem_read;
  wire mem_write;
  wire mem_to_reg;
  wire [31:0] imm_gen_out;
  wire is_ecall;
  wire ir_write;
  wire pc_source;
  wire pc_write;
  wire pc_write_not_cond;
  wire [4:0] alu_op;
  wire alu_ctrl_op;
  wire [31:0] alu_in_1;
  wire [31:0] alu_in_2;
  wire [31:0] dout; // Data output from memory

  /***** Register declarations *****/
  reg [31:0] IR; // instruction register
  reg [31:0] MDR; // memory data register
  reg [31:0] A; // Read 1 data register
  reg [31:0] B; // Read 2 data register
  reg [31:0] ALUOut; // ALU output register
  // Do not modify and use registers declared above.

  assign is_halted = (is_ecall && rs1_dout == 10)? 1:0;

  always @(posedge clk) begin
    if (reset) begin
      IR <= 0;
      MDR <= 0;
      A <= 0;
      B <= 0;
      ALUOut <= 0;
    end else begin
      if (!i_or_d && ir_write) IR <= dout;
      if (i_or_d) MDR <= dout;
      A <= rs1_dout;
      B <= rs2_dout;
      ALUOut <= alu_result;
    end
  end

  assign pc_write_enable = pc_write | (pc_write_not_cond & alu_bcond);

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  PC pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),  
    .pc_write_enable(pc_write_enable),   // input
    .current_pc(current_pc)   // output
  );

  Mux2to1 addr_mux(
    .in0(current_pc), 
    .in1(ALUOut),
    .sel(i_or_d),
    .out(addr)
  );

  Mux2to1 reg_data_input_mux(
    .in0(ALUOut),       
    .in1(MDR),          
    .sel(mem_to_reg),   
    .out(rd_din)       
  );

  Mux2to1 alu_input_a_mux(
    .in0(current_pc),
    .in1(A),
    .sel(alu_src_a),
    .out(alu_in_1)
  );

  Mux4to1 alu_input_b_mux(
    .in0(B),
    .in1(4),
    .in2(imm_gen_out),
    .in3(0),
    .sel(alu_src_b),
    .out(alu_in_2)
  );

  Mux2to1 next_pc_mux(
    .in0(alu_result),  
    .in1(ALUOut),      
    .sel(pc_source),   
    .out(next_pc)      
  );

  always @(*) begin
        if (is_ecall) begin
            rs1 = 5'b10001;
        end else begin
            rs1 = IR[19:15]; 
        end
  end
  

  // ---------- Register File ----------
  RegisterFile reg_file(
    .reset(reset),        // input
    .clk(clk),          // input
    .rs1(rs1),          // input
    .rs2(IR[24:20]),          // input
    .rd(IR[11:7]),           // input
    .rd_din(rd_din),       // input
    .write_enable(reg_write),    // input
    .rs1_dout(rs1_dout),     // output
    .rs2_dout(rs2_dout),      // output
    .print_reg(print_reg)     // output (TO PRINT REGISTER VALUES IN TESTBENCH)
  );

  // ---------- Memory ----------
  Memory memory(
    .reset(reset),        // input
    .clk(clk),          // input
    .addr(addr),         // input
    .din(rs2_dout),          // input
    .mem_read(mem_read),     // input
    .mem_write(mem_write),    // input
    .dout(dout)          // output
  );

  // ---------- Control Unit ----------
  ControlUnit ctrl_unit(
    .part_of_inst(IR[6:0]),
    .alu_bcond(alu_bcond),
    .clk(clk),
    .reset(reset),
    
    .i_or_d(i_or_d),
    .ir_write(ir_write),
    .pc_source(pc_source),
    .pc_write(pc_write),
    .pc_write_not_cond(pc_write_not_cond),
    .alu_op(alu_ctrl_op),
    .alu_src_a(alu_src_a),
    .alu_src_b(alu_src_b),
    .reg_write(reg_write),
    .mem_read(mem_read),
    .mem_write(mem_write),
    .mem_to_reg(mem_to_reg),
    .is_ecall(is_ecall)
  );

  // ---------- Immediate Generator ----------
  ImmediateGenerator imm_gen(
    .part_of_inst(IR[31:0]),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  ALUControlUnit alu_ctrl_unit(
    .part_of_inst({IR[31:25], IR[14:12], IR[6:0]}),  // input
    .alu_ctrl_op(alu_ctrl_op),
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  ALU alu(
    .alu_op(alu_op),      // input
    .alu_in_1(alu_in_1),    // input  
    .alu_in_2(alu_in_2),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)     // output
  );

endmodule
