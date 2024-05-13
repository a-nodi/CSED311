`include "Constants.v"

module TagTable(
    IF_btb_index,
    ID_EX_btb_index,
    ID_EX_tag,
    update_tag,
    clk,
    reset,
    corresponding_tag
);
    input [`BTB_INDEX_WIDTH - 1:0] IF_btb_index;
    input [`BTB_INDEX_WIDTH - 1:0] ID_EX_btb_index;
    input [`TAG_WIDTH - 1:0] ID_EX_tag;
    input update_tag;
    input clk;
    input reset;
    output reg [`TAG_WIDTH - 1:0] corresponding_tag;

    reg [`TAG_WIDTH - 1:0] _tag_table[0 : 2**`BTB_INDEX_WIDTH - 1];
    integer i;

    always @(*) begin
        corresponding_tag = _tag_table[IF_btb_index];
    end
    
    // Write the tag into the table when posedge clk
    always @(posedge clk) begin
        // Initialize the table to 0
        if (reset) begin
            for (i = 0; i < 2**`BTB_INDEX_WIDTH; i = i + 1) begin
                _tag_table[i] <= -1;  // 0xFFFFFFFF, if initialzed to 0, it will always give a hit at first time
            end
        end

        // Write the tag into the table
        if (update_tag) begin
            _tag_table[ID_EX_btb_index] <= ID_EX_tag;
        end
    end

endmodule
