`define EX_MEM_ALU_OUT_SEL 2'b01
`define RD_DIN_SEL 2'b10

module ForwardingEcallUnit(
    rs1,
    rs2,
    is_ecall,
    fromWBrd,
    EX_MEM_rd,
    mux_rs1_sel,
    mux_rs2_sel
);
    input rs1;
    input rs2;
    input is_ecall;
    input fromWBrd;
    input EX_MEM_rd;
    output reg [1:0] mux_rs1_sel;
    output reg mux_rs2_sel;
    
    always @(*) begin
        
        if (EX_MEM_rd==17 && is_ecall) begin
            mux_rs1_sel = RD_DIN_SEL;
        end
        else begin
            mux_rs1_sel = EX_MEM_ALU_OUT_SEL;
        end
        
        mux_rs2_sel = 1'b1;
    end
endmodule
