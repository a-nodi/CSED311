`include "BTB.v"
`include "TagTable.v"
`include "TwoBitPredictor.v"
`include "BHSR.v"

module PredictionUnit(
    reset,
    clk,
    IF_pc,
    ID_EX_pc,
    branch_or_jmp,
    ID_EX_is_jal,
    ID_EX_is_jalr,
    ID_EX_branch,
    alu_bcond,
    ID_EX_branch_taken,
    pc_imm,
    alu_result,
    ID_EX_BHSR,
    BHSR,
    predicted_pc
);
    input [`PC_WIDTH - 1:0] IF_pc;
    input [`PC_WIDTH - 1:0] ID_EX_pc;
    input reset;
    input clk;
    input branch_or_jmp;
    input ID_EX_is_jal;
    input ID_EX_is_jalr;
    input ID_EX_branch;
    input ID_EX_branch_taken;
    input alu_bcond;
    input [`PC_WIDTH - 1:0] pc_imm;
    input [`PC_WIDTH - 1:0] alu_result;
    input [`BTB_INDEX_WIDTH - 1:0] ID_EX_BHSR;
    output reg [`BTB_INDEX_WIDTH - 1:0] BHSR;
    output reg [31:0] predicted_pc;
    
    // Tag
    wire [`TAG_WIDTH - 1:0] IF_tag;
    wire [`TAG_WIDTH - 1:0] ID_EX_tag;
    wire [`TAG_WIDTH - 1:0] tag_from_table;
    
    // BHSR
    wire [`BTB_INDEX_WIDTH - 1 : 0] IF_BHSR;
    
    // BTB index
    wire [`BTB_INDEX_WIDTH - 1:0] IF_btb_index;
    wire [`BTB_INDEX_WIDTH - 1:0] ID_EX_btb_index;

    wire is_tag_match;
    wire [`PC_WIDTH - 1:0] target_out;
    wire pred_taken;

    TagTable tag_table(
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .ID_EX_tag(ID_EX_tag),
        .update_tag(branch_or_jmp),
        .reset(reset),
        .clk(clk),
        .corresponding_tag(tag_from_table)
    );

    TwoBitPredictor predictor(
        .actually_taken(branch_or_jmp),
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .update_counter(ID_EX_branch || ID_EX_is_jal || ID_EX_is_jalr),
        .reset(reset),
        .clk(clk),
        .pred_taken(pred_taken)
    );

    BTB btb(
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .update_table(branch_or_jmp),
        .ID_EX_pc(ID_EX_is_jalr ? alu_result : pc_imm),
        .reset(reset),
        .clk(clk),
        .target_out(target_out)
    );

    BHSR bhsr(
        .branch_or_jump(branch_or_jmp),
        .reset(reset),
        .clk(clk),
        .IF_BHSR(IF_BHSR)
    );

    // Parse tag and btbindex from IF_PC
    assign IF_tag = IF_pc[`PC_WIDTH - 1 : `PC_WIDTH - `TAG_WIDTH];
    assign IF_btb_index = IF_pc[`PC_WIDTH - 1 - `TAG_WIDTH : `PC_WIDTH - `TAG_WIDTH - `BTB_INDEX_WIDTH] ^ IF_BHSR;

    // Parse tag and btbindex from ID_EX_PC
    assign ID_EX_tag = ID_EX_pc[`PC_WIDTH - 1 : `PC_WIDTH - `TAG_WIDTH];    
    assign ID_EX_btb_index = ID_EX_pc[`PC_WIDTH - 1 - `TAG_WIDTH : `PC_WIDTH - `TAG_WIDTH - `BTB_INDEX_WIDTH] ^ ID_EX_BHSR;

    assign is_tag_match = IF_tag == tag_from_table;

    always @(*) begin
        BHSR = IF_BHSR;
        predicted_pc = is_tag_match && pred_taken && target_out != 0 ? target_out : IF_pc + 4;
    end

endmodule
