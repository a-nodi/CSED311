`include "Constants.v"

module TagTable(
    btb_index,
    current_tag,
    clk,
    reset,
    corresponding_tag
);
    input [`BTB_INDEX_WIDTH - 1:0] btb_index;
    input [`TAG_WIDTH - 1:0] current_tag;
    input clk;
    input reset;
    output reg [`TAG_WIDTH - 1:0] corresponding_tag;

    reg [2**`BTB_INDEX_WIDTH - 1:0] tag_table[0 : 2**`BTB_INDEX_WIDTH - 1];
    integer i;

    always @(*) begin
        corresponding_tag = tag_table[btb_index];
    end
    
    // Write the tag into the table when posedge clk
    always @(posedge clk) begin
        // Initialize the table to 0
        if (reset) begin
            for (i = 0; i < 2**`BTB_INDEX_WIDTH; i = i + 1) begin
                tag_table[i] <= 0;
            end
        end
        
        // Write the tag into the table
        tag_table[btb_index] <= current_tag;
    end

endmodule