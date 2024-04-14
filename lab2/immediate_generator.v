module immediate_generator(
    input [31:0] part_of_inst,
    output reg [31:0] imm_gen_out  // sign-extended 32-bit immediate value
);

wire [6:0] opcode = part_of_inst[6:0];

// I-type 31:20
wire [11:0] imm_I = part_of_inst[31:20];
// S-type 31:25, 11:7
wire [11:0] imm_S = {part_of_inst[31:25], part_of_inst[11:7]};
// B-type 31, 7, 30:25, and 11:8
wire [12:0] imm_B = {part_of_inst[31], part_of_inst[7], part_of_inst[30:25], part_of_inst[11:8], 1'b0};
// J-type 31, 19:12, 20, and 30:21
wire [20:1] imm_J = {part_of_inst[31], part_of_inst[19:12], part_of_inst[20], part_of_inst[30:21]};

always @(*) begin
    case(opcode)
        `ARITHMETIC_IMM, `LOAD, `JALR: // I-type
            imm_gen_out = {{20{imm_I[11]}}, imm_I};
        `STORE: // S-type
            imm_gen_out = {{20{imm_S[11]}}, imm_S};
        `BRANCH: // B-type
            imm_gen_out = {{19{imm_B[12]}}, imm_B};
        `JAL: // J-type 
            imm_gen_out = {{11{imm_J[20]}}, imm_J, 1'b0};
        default:
            imm_gen_out = 32'b0;
    endcase
end

endmodule
