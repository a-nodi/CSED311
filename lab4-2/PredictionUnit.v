`include "BTB.v"
`include "TagTable.v"
`include "TwoBitPredictor.v"

module PredictionUnit(
    current_pc,
    next_pc
);
    input [31:0] current_pc;
    output reg [31:0] next_pc;
    
    wire tag;
    wire tag_from_table;
    wire branch;
    wire btb_index;
    
    TagTable tag_table(
        .btb_index(btb_index),
        .corresponding_tag(tag_from_table)
    );

    BTB btb(
        .pc(current_pc),
        .branch(branch),
        .btb_index(btb_index)
    );

    TwoBitPredictor predictor(
        .branch(branch)
    );



endmodule