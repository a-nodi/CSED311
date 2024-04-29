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
    output [1:0] ForwardA;
    output [1:0] ForwardB;

    always @(*) begin
        // Forward operation of rs1
        if (ID_EX_rs1 != 0 && ID_EX_rs1 == EX_MEM_rd && EX_MEM_RegWrite) begin // MEM stage
            ForwardA = 2'b10;
        end
        else if (ID_EX_rs1 != 0 && ID_EX_rs1 == MEM_WB_rd && MEM_WB_RegWrite) begin // WB state
            ForwardA = 2'b01;
        end
        else begin
            ForwardA = 2'b00;
        end

        // Forward operation of rs2
        if (ID_EX_rs2 != 0 && ID_EX_rs2 == EX_MEM_rd && EX_MEM_RegWrite) begin // MEM state
            ForwardB = 2'b10;
        end
        else if (ID_EX_rs2 != 0 && ID_EX_rs2 == MEM_WB_rd && MEM_WB_RegWrite) begin // WB state
            ForwardB = 2'b01;
        end
        else begin
            ForwardB = 2'b00;
        end

    end

endmodule


