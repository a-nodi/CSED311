`include "alu_func.v"

module alu #(parameter data_width = 16) (
	input [data_width - 1 : 0] A, 
	input [data_width - 1 : 0] B, 
	input [3 : 0] FuncCode,
       	output reg [data_width - 1: 0] C,
       	output reg OverflowFlag);
// Do not use delay in your implementation.

// You can declare any variables as needed.
/*
	YOUR VARIABLE DECLARATION...
*/

initial begin
	C = 0;
	OverflowFlag = 0;
end   	

// TODO: You should implement the functionality of ALU!
// (HINT: Use 'always @(...) begin ... end')
/*
	YOUR ALU FUNCTIONALITY IMPLEMENTATION...
*/
  always @(*) begin
        OverflowFlag = 0;
        case(FuncCode)
            `FUNC_ADD: begin
  				C = A + B;
    			OverflowFlag = (~A[data_width-1] & ~B[data_width-1] & C[data_width-1]) | (A[data_width-1] & B[data_width-1] & ~C[data_width-1]);
				//양수를 더했을 때 음수가 나오거나 음수를 더했을 때 양수가 나오면 overflow
			end
            `FUNC_SUB: begin
    			C = A - B;
    			OverflowFlag = (~A[data_width-1] & B[data_width-1] & C[data_width-1]) | (A[data_width-1] & ~B[data_width-1] & ~C[data_width-1]);
				//양수에서 음수를 뺐을 때 음수가 나오거나 음수에서 양수를 뺐을 때 양수가 나오면 overflow
			end
            `FUNC_ID: C = A; // Identity
            `FUNC_NOT: C = ~A; // Bitwise NOT
            `FUNC_AND: C = A & B; // Bitwise AND
            `FUNC_OR: C = A | B; // Bitwise OR
            `FUNC_NAND: C = ~(A & B); // Bitwise NAND
            `FUNC_NOR: C = ~(A | B); // Bitwise NOR
            `FUNC_XOR: C = A ^ B; // Bitwise XOR
            `FUNC_XNOR: C = ~(A ^ B); // Bitwise XNOR
            `FUNC_LLS: C = A << 1; // Logical Left Shift
            `FUNC_LRS: C = A >> 1; // Logical Right Shift
            `FUNC_ALS: C = $signed(A) <<< 1; // Arithmetic Left Shift
            `FUNC_ARS: C = $signed(A) >>> 1; // Arithmetic Right Shift
            `FUNC_TCP: C = ~A + 1; // Two's Complement
            `FUNC_ZERO: C = 0; // Zero
            default: C = 0; // Default case
        endcase
  end
endmodule
