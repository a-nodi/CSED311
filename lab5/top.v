// Do not submit this file.
`include "cpu.v"

module top(input reset,
           input clk,
           output is_halted,
           output [31:0] print_reg [0:31],
           output is_hit,
           output is_miss);

  cpu cpu(
    .reset(reset), 
    .clk(clk),
    .is_halted(is_halted),
    .print_reg(print_reg),
    .is_hit(is_hit),
    .is_miss(is_miss)
  );

endmodule
