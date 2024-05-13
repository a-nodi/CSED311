`include "Constants.v"

module TwoBitPredictor(
    actually_taken,
    btb_index,
    reset,
    clk,
    pred_taken
);
    input actually_taken;
    input [`BTB_INDEX_WIDTH - 1: 0]btb_index; // Corresponding index in the BTB
    input reset;
    input clk;
    output reg pred_taken;
    
    reg [1:0] counter[0:2**`BTB_INDEX_WIDTH - 1];
    
    integer i;

    /*

    Two bit Hysteresis counter

    */

    always @(posedge clk) begin
        if (reset) begin // Initialize the table to 0
            for (i = 0; i < 2**`BTB_INDEX_WIDTH; i = i + 1) begin
                counter[i] <= 2'b00;
            end
        end
        
        case (counter[btb_index])
            2'b00: begin
                counter[btb_index] <= actually_taken == 1 ? 2'b01 : 2'b00;
            end
            2'b01: begin
                counter[btb_index] <= actually_taken == 1 ? 2'b11 : 2'b00;
            end
            2'b10: begin
                counter[btb_index] <= actually_taken == 1 ? 2'b11 : 2'b00;
            end
            2'b11: begin
                counter[btb_index] <= actually_taken == 1 ? 2'b11 : 2'b10;
            end
        endcase

        case (counter[btb_index])
            2'b00: begin
                pred_taken <= 0;
            end
            2'b01: begin
                pred_taken <= 0;
            end
            2'b10: begin
                pred_taken <= 1;
            end
            2'b11: begin
                pred_taken <= 1;
            end
        endcase
    end
endmodule