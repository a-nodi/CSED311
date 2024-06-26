module PC(
    input wire reset,
    input wire clk,
    input wire [31:0] next_pc,
    input wire pc_write_enable, 
    output reg [31:0] current_pc
);

always @(posedge clk) begin
    if (reset) begin
        current_pc <= 32'b0;
    end else if (pc_write_enable) begin
        current_pc <= next_pc;
    end
end

endmodule
