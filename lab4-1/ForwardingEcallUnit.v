`define EX_MEM_ALU_OUT_SEL 2'b01
`define RD_DIN_SEL 2'b10

module ForwardingEcallUnit(
    rs1,
    rs2,
    is_ecall,
    EX_MEM_rd,
    mux_rs1_sel,
    mux_rs2_sel
);
    input [4:0] rs1;
    input [4:0] rs2;
    input is_ecall;
    input [4:0] EX_MEM_rd;
    output reg [1:0] mux_rs1_sel;
    output reg mux_rs2_sel;
    
    always @(*) begin
        mux_rs1_sel = EX_MEM_rd == 17 && is_ecall ? `RD_DIN_SEL : `EX_MEM_ALU_OUT_SEL;
        mux_rs2_sel = 1'b1;
    end
endmodule
