`define MEM_TO_EX_FORWARD 2'b01
`define WB_TO_EX_FORWARD 2'b10
`define NO_FORWARD 2'b00

module ForwardingUnit(
    ID_EX_rs1,
    ID_EX_rs2,
    EX_MEM_rd,
    MEM_WB_rd,
    EX_MEM_RegWrite,
    MEM_WB_RegWrite,
    ForwardA,
    ForwardB
);

    input [4:0] ID_EX_rs1;
    input [4:0] ID_EX_rs2;
    input [4:0] EX_MEM_rd;
    input [4:0] MEM_WB_rd;
    input EX_MEM_RegWrite;
    input MEM_WB_RegWrite;
    output reg [1:0] ForwardA;
    output reg [1:0] ForwardB;

    reg rs1_mem_to_ex_forward;
    reg rs1_wb_to_ex_forward;
    reg rs2_mem_to_ex_forward;
    reg rs2_wb_to_ex_forward;

    always @(*) begin
        
        rs1_mem_to_ex_forward = ID_EX_rs1 != 0 && ID_EX_rs1 == EX_MEM_rd && EX_MEM_RegWrite; // MEM stage
        rs1_wb_to_ex_forward = ID_EX_rs1 != 0 && ID_EX_rs1 == MEM_WB_rd && MEM_WB_RegWrite; // WB state
        
        ForwardA = rs1_mem_to_ex_forward ? `MEM_TO_EX_FORWARD : (rs1_wb_to_ex_forward ? `WB_TO_EX_FORWARD : `NO_FORWARD);

        rs2_mem_to_ex_forward = ID_EX_rs2 != 0 && ID_EX_rs2 == EX_MEM_rd && EX_MEM_RegWrite; // MEM stage
        rs2_wb_to_ex_forward = ID_EX_rs2 != 0 && ID_EX_rs2 == MEM_WB_rd && MEM_WB_RegWrite; // WB state

        ForwardB = rs2_mem_to_ex_forward ? `MEM_TO_EX_FORWARD : (rs2_wb_to_ex_forward ? `WB_TO_EX_FORWARD : `NO_FORWARD);

    end

endmodule


