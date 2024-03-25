module immediate_generator(
    input [23:0] part_of_inst,
    output reg [31:0] imm_gen_out  // sign-extended 32-bit immediate value
);

wire [6:0] opcode = part_of_inst[6:0];

// I-type
wire [11:0] imm_I = part_of_inst[23:12];
// S-type
wire [11:0] imm_S = {part_of_inst[23:17], part_of_inst[11:7]};
// B-type
wire [12:0] imm_B = {part_of_inst[23], part_of_inst[7], part_of_inst[23:18], part_of_inst[11:8], 1'b0};

always @(*) begin
    case(opcode)
        `ARITHMETIC_IMM, `LOAD, `JALR: // I-type
            imm_gen_out = {{20{imm_I[11]}}, imm_I};
        `STORE: // S-type
            imm_gen_out = {{20{imm_S[11]}}, imm_S};
        `BRANCH: // B-type
            imm_gen_out = {{19{imm_B[12]}}, imm_B};
        default:
            imm_gen_out = 32'b0;
    endcase
end

endmodule
