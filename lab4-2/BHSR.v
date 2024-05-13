`include "Constants.v"

module BHSR(
    branch_or_jump,
    reset,
    clk,
    IF_BHSR
);
    
    input branch_or_jump;
    input reset;
    input clk;
    output reg [`BTB_INDEX_WIDTH - 1:0] IF_BHSR;

    reg [`BTB_INDEX_WIDTH - 1:0] _branch_history;

    integer i;

    always @(posedge clk) begin
        if (reset) begin
            for (i = 0; i < `BTB_INDEX_WIDTH - 1; i = i + 1) begin
                _branch_history[i] <= 0;
            end
        end

        // Update the branch history
        _branch_history[`BTB_INDEX_WIDTH - 1:1] <= _branch_history[`BTB_INDEX_WIDTH - 2:0];
        _branch_history[0] <= branch_or_jump;
        
        IF_BHSR <= _branch_history;
    end
endmodule