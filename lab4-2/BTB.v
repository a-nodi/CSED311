`include "Constants.v"

module BTB(
    IF_btb_index,
    ID_EX_btb_index,
    update_table,
    ID_EX_pc,
    reset,
    clk, 
    target_out
);
    input [`BTB_INDEX_WIDTH - 1:0] IF_btb_index;
    input [`BTB_INDEX_WIDTH - 1:0] ID_EX_btb_index;
    input update_table;
    input reset;
    input clk;
    input [`PC_WIDTH - 1:0] ID_EX_pc;
    output reg [`PC_WIDTH - 1:0] target_out;

    reg [`PC_WIDTH - 1:0] target_table[0:2 ** `BTB_INDEX_WIDTH - 1];

    integer i;

    // Push out the target address
    always @(*) begin
        target_out = target_table[IF_btb_index];
    end

    always @(posedge clk) begin
        if (reset) begin // Initialize the table to 0
            for (i = 0; i < 2 ** `BTB_INDEX_WIDTH; i = i + 1) begin
                target_table[i] <= 0;
            end
        end

        // Write the target into the table when positive clk
        if (update_table) begin
            target_table[ID_EX_btb_index] <= ID_EX_pc;
        end
    end

endmodule
