`include "opcodes.v"

`define IF1 3'b000 // 
`define IF2 3'b001 // Operate ecall
`define ID 3'b010
`define EX1 3'b011 // Calculate bcond (for branch) or ALUOut (for others)
`define EX2 3'b100 // Calculate pc + imm
`define MEM 3'b101
`define WB 3'b110
`define HALT 3'b111