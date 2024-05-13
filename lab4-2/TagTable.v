`include "Constants.v"

module TagTable(
    btb_index,
    reset,
    corresponding_tag
);
    input [`BTB_INDEX_WIDTH - 1:0] btb_index;
    input reset;
    output reg [`TAG_WIDTH - 1:0] corresponding_tag;

    reg [2**`BTB_INDEX_WIDTH - 1:0] tag_table[0 : 2**`BTB_INDEX_WIDTH - 1];
    integer i;

    always @(posedge reset) begin
        for (i = 0; i < 2**`BTB_INDEX_WIDTH; i = i + 1) begin
            tag_table[i] = 0;
        end
    end

    always @(*) begin
        corresponding_tag = tag_table[btb_index];
    end

endmodule