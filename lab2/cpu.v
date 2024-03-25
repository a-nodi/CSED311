// Submit this file with other files you created.
// Do not touch port declarations of the module 'cpu'.

// Guidelines
// 1. It is highly recommened to `define opcodes and something useful.
// 2. You can modify the module.
// (e.g., port declarations, remove modules, define new modules, ...)
// 3. You might need to describe combinational logics to drive them into the module (e.g., mux, and, or, ...)
// 4. `include files if required

module cpu(input reset,                     // positive reset signal
           input clk,                       // clock signal
           output is_halted,                // Whehther to finish simulation
           output [31:0] print_reg [0:31]); // TO PRINT REGISTER VALUES IN TESTBENCH (YOU SHOULD NOT USE THIS)
  /***** Wire declarations *****/
  // PC-instruction memory 간 연결
  wire [31:0] imem_addr;       // PC의 현재 address
  wire [31:0] next_pc;         // 다음 PC address
  wire [31:0] instruction;     // instruction memory에서 읽은 instruction
  wire PCSrc1, PCSrc2;         // next_pc 값 할당하기 위한 signal

  // RF 연결
  wire [31:0] rs1_dout;        // RF에서 읽은 data 1
  wire [31:0] rs2_dout;        // RF에서 읽은 data 2
  wire [31:0] rd_din;          // RF에 쓰여질 data

  // Control Unit 연결
  wire is_jal, is_jalr, branch, mem_read, mem_to_reg, mem_write, alu_src, write_enable, pc_to_reg, is_ecall;

  // alu, alu_contorl_unit 연결
  wire [3:0] alu_op;           // ALU 연산 유형
  wire [31:0] alu_result;      // ALU 연산 결과
  wire alu_bcond;              // ALU 분기 조건 결과

  // immediate_generator 연결
  wire [31:0] imm_gen_out;     // immediate value 출력 값

  // data_memory 연결
  wire [31:0] mem_data;        // data_memory에서 읽은 data

  /***** Register declarations *****/

  // ---------- Update program counter ----------
  // PC must be updated on the rising edge (positive edge) of the clock.
  pc pc(
    .reset(reset),       // input (Use reset to initialize PC. Initial value must be 0)
    .clk(clk),         // input
    .next_pc(next_pc),     // input
    .current_pc(imem_addr)   // output
  );

  assign PCSrc1 = is_jal || (branch && alu_bcond);  // branch와 alu_bcond가 동시에 1이거나 JAL인 경우
  assign PCSrc2 = is_jalr;  // JALR인 경우

  always @(*) begin  //next_pc에 값 할당
    if (PCSrc1) begin
        next_pc = pc + imm_gen_out; // PCSrc1이 1일 경우
    end else if (PCSrc2) begin
        next_pc = alu_result; // PCSrc2가 1일 경우
    end else begin
        next_pc = pc + 4;
    end
  end
  
  // ---------- Instruction Memory ----------
  instruction_memory imem(
    .reset(reset),   // input
    .clk(clk),     // input
    .addr(imem_addr),    // input
    .dout(instruction)     // output
  );

  // ---------- Register File ----------
  register_file reg_file (
    .reset (reset),        // input
    .clk (clk),          // input
    .rs1 (instruction[19:15]),          // input
    .rs2 (instruction[24:20]),          // input
    .rd (instruction[11:7]),           // input
    .rd_din (rd_din),       // input
    .write_enable (reg_write), // input
    .rs1_dout (rs1_dout),     // output
    .rs2_dout (rs2_dout),     // output
    .print_reg (print_reg)  //DO NOT TOUCH THIS
  );

  // PCtoReg가 1이면 PC+4, 0이면 MemtoReg를 확인해서 1이면 mem_data, 0이면 alu_result 값 할당
  assign rd_din = pc_to_reg ? imem_addr + 4 : (mem_to_reg ? mem_data : alu_result);

  // ---------- Control Unit ----------
  control_unit ctrl_unit (
    .part_of_inst(instruction[6:0]),  // input
    .is_jal(is_jal),        // output
    .is_jalr(is_jalr),       // output
    .branch(branch),        // output
    .mem_read(mem_read),      // output
    .mem_to_reg(mem_to_reg),    // output
    .mem_write(mem_write),     // output
    .alu_src(alu_src),       // output
    .write_enable(write_enable),  // output
    .pc_to_reg(pc_to_reg),     // output
    .is_ecall(is_ecall)       // output (ecall inst)
  );

  // ---------- Immediate Generator ----------
  immediate_generator imm_gen(
    .part_of_inst(instruction[31:20]),  // input
    .imm_gen_out(imm_gen_out)    // output
  );

  // ---------- ALU Control Unit ----------
  alu_control_unit alu_ctrl_unit (
    .part_of_inst(instruction),  // input
    .alu_op(alu_op)         // output
  );

  // ---------- ALU ----------
  alu alu (
    .alu_op(alu_op),      // input
    .alu_in_1(rs1_dout),    // input  
    .alu_in_2(alu_src ? imm_gen_out : rs2_dout),    // input
    .alu_result(alu_result),  // output
    .alu_bcond(alu_bcond)    // output
  );

  // ---------- Data Memory ----------
  data_memory dmem(
    .reset (reset),      // input
    .clk (clk),        // input
    .addr (alu_result),       // input
    .din (rs2_dout),        // input
    .mem_read (mem_read),   // input
    .mem_write (mem_write),  // input
    .dout (mem_data)        // output
  );
endmodule
