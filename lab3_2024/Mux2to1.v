// 2-to-1 Multiplexer
module Mux2to1(input wire [31:0] in0,    
               input wire [31:0] in1,    
               input wire sel,          
               output wire [31:0] out); 

    assign out = sel ? in1 : in0;

endmodule
