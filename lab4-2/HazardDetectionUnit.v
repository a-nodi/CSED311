module HazardDetectionUnit(
    rs1,
    rs2,
    ID_EX_rd,
    EX_MEM_rd,
    ID_EX_mem_read,
    EX_MEM_mem_read,
    is_ecall,
    is_stall
);

    input [4:0] rs1;
    input [4:0] rs2;
    input [4:0] ID_EX_rd;
    input [4:0] EX_MEM_rd;
    input ID_EX_mem_read;
    input EX_MEM_mem_read;
    input is_ecall;

    reg is_load_hazard;
    reg is_ecall_hazard;

    output reg is_stall;

    always @(*) begin
        
        is_load_hazard = (rs1 == ID_EX_rd || rs2 == ID_EX_rd) && ID_EX_mem_read;
        is_ecall_hazard = is_ecall && (ID_EX_rd == 17 || (EX_MEM_rd == 17 && EX_MEM_mem_read));

        is_stall = is_load_hazard || is_ecall_hazard ? 1 : 0;
    end

endmodule
