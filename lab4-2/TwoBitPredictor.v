module TwoBitPredictor(
    actually_taken,
    clk,
    pred_taken
);
    input actually_taken;
    input clk;
    output reg pred_taken;
    
    reg counter = 2'b00;
    
    /*

    Two bit Hysteresis counter

    */
    always @(clk) begin
        case (counter)
            2'b00: begin
                counter = actually_taken == 1 ? 2'b01 : 2'b00;
            end
            2'b01: begin
                counter = actually_taken == 1 ? 2'b11 : 2'b00;
            end
            2'b10: begin
                counter = actually_taken == 1 ? 2'b11 : 2'b00;
            end
            2'b11: begin
                counter = actually_taken == 1 ? 2'b11 : 2'b10;
            end
        endcase

        case (counter)
            2'b00: begin
                pred_taken = 0;
            end
            2'b01: begin
                pred_taken = 0;
            end
            2'b10: begin
                pred_taken = 1;
            end
            2'b11: begin
                pred_taken = 1;
            end
        endcase
    end
endmodule