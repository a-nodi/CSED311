`include "opcodes.v"

module Control(
    part_of_inst,
    alu_bcond,
    clk,
    reset,
    PCWriteCond,
    PCWrite,
    IorD,
    MemRead,
    MemWrite,
    MemtoReg,
    IRWrite,
    ALUSrcA,
    ALUSrcB,
    ALUOp,
    RegWrite,
    PCSource,
    is_ecall
)

    input [6:0] part_of_inst;
    input alu_bcond;
    input clk;
    input reset;

    output reg PCWriteCond;
    output reg PCWrite;
    output reg IorD;
    output reg MemRead;
    output reg MemWrite;
    output reg MemtoReg;
    output reg IRWrite;
    output reg ALUSrcA;
    output reg [1:0] ALUSrcB;
    output reg [1:0] ALUOp;
    output reg RegWrite;
    output reg PCSource;
    output reg is_ecall;

    reg [3:0] current_state;
    wire[3:0] next_state;

    FSM fsm(
        .part_of_inst(part_of_inst),
        .alu_bcond(alu_bcond),
        .current_state(current_state),
        .next_state(next_state)
    );

    always @(posedge clk) begin
        if (reset) begin
            current_state <= `INSTRUCTION_FETCH;
        end
        else begin
            current_state <= next_state;
        end

    always @(*) begin
        PCWriteCond = 1'b0;
        PCWrite = 1'b0;
        IorD = 1'b0;
        MemRead = 1'b0;
        MemWrite = 1'b0;
        MemtoReg = 1'b0;
        IRWrite = 1'b0;
        ALUSrcA = 1'b0;
        ALUSrcB = 2'b00;
        ALUOp = 2'b00;
        RegWrite = 1'b0;
        PCSource = 1'b0;
        is_ecall = 1'b0;

        case (current_state)
            `INSTRUCTION_FETCH: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0; // Instruction comes from PC
                MemRead = 1'b1; // Need to read instruction from memory
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b1; // Need to write instruction to IR
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b01; // 2nd ALU input is 4 (PC <- PC + 4)
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `INSTRUCTION_DECODE_REGISTER_FETCH: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b1; // 
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b1;
                is_ecall = 1'b0;
            end

            `MEMORY_ADDRESS_COMPUTATION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `MEMORY_ACCESS_LW: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b1;
                MemRead = 1'b1;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b00;
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;            
            end

            `WRITE_BACK_STEP: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b1;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b00;
                ALUOp = 2'b10;
                RegWrite = 1'b1;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `MEMORY_ACCESS_SW: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b1;
                MemRead = 1'b0;
                MemWrite = 1'b1;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b00;
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `R_TYPE_EXECUTION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b00;
                ALUOp = 2'b10;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `R_TYPE_COMPLETION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b00;
                ALUOp = 2'b00;
                RegWrite = 1'b1;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `BRANCH_COMPLETION: begin
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b00;
                ALUOp = 2'b00;
                PCWriteCond = 1'b1;
                PCSource = 1'b1;
            end

            `I_TYPE_EXECUTION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b10; // I-type
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `JAL_EXECUTION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b1;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b10;
                ALUOp = 2'b00;
                RegWrite = 1'b1;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `JALR_EXECUTION: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b1;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b1;
                ALUSrcB = 2'b10;
                ALUOp = 2'b10; // 
                RegWrite = 1'b1;
                PCSource = 1'b0;
                is_ecall = 1'b0;
            end

            `HALT: begin
                PCWriteCond = 1'b0;
                PCWrite = 1'b0;
                IorD = 1'b0;
                MemRead = 1'b0;
                MemWrite = 1'b0;
                MemtoReg = 1'b0;
                IRWrite = 1'b0;
                ALUSrcA = 1'b0;
                ALUSrcB = 2'b00;
                ALUOp = 2'b00;
                RegWrite = 1'b0;
                PCSource = 1'b0;
                is_ecall = 1'b1;
            end
        endcase
    end