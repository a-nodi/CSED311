// Do not submit this file.
`include "cpu.v"

module top(input reset,
           input clk,
           output is_halted,
           output [31:0] print_reg [0:31],
           output [31:0]number_of_hit,
           output [31:0]number_of_miss);

  cpu cpu(
    .reset(reset), 
    .clk(clk),
    .is_halted(is_halted),
    .print_reg(print_reg),
    .number_of_hit(number_of_hit),
    .number_of_miss(number_of_miss)
  );

endmodule
