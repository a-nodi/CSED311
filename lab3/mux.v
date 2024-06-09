// 2-to-1 Multiplexer
module Mux2to1(input wire [31:0] in0,    
               input wire [31:0] in1,    
               input wire sel,          
               output wire [31:0] out); 

    assign out = sel ? in1 : in0;

endmodule

// 4-to-1 Multiplexer
module Mux4to1(input wire [31:0] in0,   
               input wire [31:0] in1,   
               input wire [31:0] in2,   
               input wire [31:0] in3,   
               input wire [1:0] sel,    
               output wire [31:0] out); 

    assign out = (sel == 2'b00) ? in0 :
                 (sel == 2'b01) ? in1 :
                 (sel == 2'b10) ? in2 :
                                  in3;

endmodule

