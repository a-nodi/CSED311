`include "Constants.v"

module TwoBitPredictor(
    actually_taken,
    IF_btb_index,
    ID_EX_btb_index,
    update_counter,
    reset,
    clk,
    pred_taken
);
    input actually_taken;
    input [`BTB_INDEX_WIDTH - 1: 0] IF_btb_index; // Corresponding index in the BTB
    input [`BTB_INDEX_WIDTH - 1: 0] ID_EX_btb_index; // Index from the ID_EX stage
    input update_counter;
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
        
        // Update the counter
        if (update_counter) begin
            case (counter[ID_EX_btb_index])
                2'b00: begin
                    counter[IF_btb_index] <= actually_taken == 1 ? 2'b01 : 2'b00;
                end
                2'b01: begin
                    counter[IF_btb_index] <= actually_taken == 1 ? 2'b11 : 2'b00;
                end
                2'b10: begin
                    counter[IF_btb_index] <= actually_taken == 1 ? 2'b11 : 2'b00;
                end
                2'b11: begin
                    counter[IF_btb_index] <= actually_taken == 1 ? 2'b11 : 2'b10;
                end
            endcase
        end

        // Determine the prediction
        case (counter[IF_btb_index])
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