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
    /*
        Branch Prediction Unit
        Gshare + Two Bit Hysteresis Counter
        Component
        
        - Tag Table
        - Two Bit Predictor
        - BTB
        - BHSR
        - Misc muxes and comparators

        Data always written when posedge clk
    */

    input [`PC_WIDTH - 1:0] IF_pc; // PC from the IF stage
    input [`PC_WIDTH - 1:0] ID_EX_pc; // PC from the ID_EX stage
    input reset; // Reset signal
    input clk; // Clock signal
    input branch_or_jmp; // Signal that indicates a branch or jump
    input ID_EX_is_jal; // Signal that indicates a jump and link register in the ID_EX stage
    input ID_EX_is_jalr; // Signal that indicates a jump and link register in the ID_EX stage
    input ID_EX_branch; // Signal that indicates a branch in the ID_EX stage
    input ID_EX_branch_taken; // Signal that indicates a branch taken in the ID_EX stage
    input alu_bcond; // Signal that indicates a branch condition
    input [`PC_WIDTH - 1:0] pc_imm; // PC + immediate value
    input [`PC_WIDTH - 1:0] alu_result; // Result from the ALU(JALR)
    input [`BTB_INDEX_WIDTH - 1:0] ID_EX_BHSR; // BHSR from the ID_EX stage
    output reg [`BTB_INDEX_WIDTH - 1:0] BHSR; // BHSR
    output reg [31:0] predicted_pc; // Predicted PC
    
    // Tag
    wire [`TAG_WIDTH - 1:0] IF_tag;
    wire [`TAG_WIDTH - 1:0] ID_EX_tag;
    wire [`TAG_WIDTH - 1:0] tag_from_table;
    
    // BHSR
    wire [`BTB_INDEX_WIDTH - 1 : 0] IF_BHSR;
    
    // BTB index
    wire [`BTB_INDEX_WIDTH - 1:0] IF_btb_index;
    wire [`BTB_INDEX_WIDTH - 1:0] ID_EX_btb_index;

    wire is_tag_match; // Signal that indicates if the tag matches
    wire [`PC_WIDTH - 1:0] target_out; // PC from the BTB
    wire try_to_branch; // Signal that indicates a branch or jump
    wire pred_taken; // Signal that indicates the prediction
    wire is_btb_output_valid; // Signal that indicates if the BTB output is valid

    // Tag Table
    TagTable tag_table(
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .ID_EX_tag(ID_EX_tag),
        .update_tag(branch_or_jmp),
        .reset(reset),
        .clk(clk),
        .corresponding_tag(tag_from_table) // Corresponding tag from the table
    );

    // Two Bit Predictor
    TwoBitPredictor predictor(
        .actually_taken(branch_or_jmp),
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .update_counter(try_to_branch),
        .reset(reset),
        .clk(clk),
        .pred_taken(pred_taken) // Prediction taken or not
    );

    // BTB
    BTB btb(
        .IF_btb_index(IF_btb_index),
        .ID_EX_btb_index(ID_EX_btb_index),
        .update_table(branch_or_jmp),
        .ID_EX_pc(ID_EX_is_jalr ? alu_result : pc_imm),
        .reset(reset),
        .clk(clk),
        .target_out(target_out) // Coresponding PC from the BTB
    );

    // BHSR
    BHSR bhsr(
        .branch_or_jump(branch_or_jmp),
        .update_bhsr(try_to_branch),
        .reset(reset),
        .clk(clk),
        .IF_BHSR(IF_BHSR) // BHSR from the IF(current) stage
    );

    // Parse tag and btbindex from IF_PC
    assign IF_tag = IF_pc[`PC_WIDTH - 1 : `PC_WIDTH - `TAG_WIDTH];
    assign IF_btb_index = IF_pc[`PC_WIDTH - 1 - `TAG_WIDTH : `PC_WIDTH - `TAG_WIDTH - `BTB_INDEX_WIDTH] ^ IF_BHSR;

    // Parse tag and btbindex from ID_EX_PC
    assign ID_EX_tag = ID_EX_pc[`PC_WIDTH - 1 : `PC_WIDTH - `TAG_WIDTH];    
    assign ID_EX_btb_index = ID_EX_pc[`PC_WIDTH - 1 - `TAG_WIDTH : `PC_WIDTH - `TAG_WIDTH - `BTB_INDEX_WIDTH] ^ ID_EX_BHSR;

    // Check if the tag matches
    assign is_tag_match = IF_tag == tag_from_table;

    // Check if the instruction should try to branch
    assign try_to_branch = ID_EX_branch || ID_EX_is_jal || ID_EX_is_jalr;

    // Check if the BTB output is valid
    assign is_btb_output_valid = target_out != 0;

    // Update the BHSR and the predicted PC
    always @(*) begin
        BHSR = IF_BHSR; // Update the BHSR
        predicted_pc = is_tag_match && pred_taken && is_btb_output_valid ? target_out : IF_pc + 4; // Update the predicted PC
    end

endmodule
