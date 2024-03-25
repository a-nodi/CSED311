module alu(
    alu_op,
    alu_in_1,
    alu_in_2,
    alu_result,
    alu_bcond
);

    input [4:0] alu_op;
    input [31:0] alu_in_1;
    input [31:0] alu_in_2;
    output reg [31:0] alu_result;
    output reg alu_bcond;

    always @(*) begin
        alu_result = 0;
        alu_bcond = 0;
    
        case(alu_op)
            5'b00000: // Always 0
                alu_result = 0;
            
            5'b00001: // Always 1
                alu_result = 1;
            
            5'b00010: // Identity
                alu_result = alu_in_1;
            
            5'b00011: // Addition
                alu_result = alu_in_1 + alu_in_2;
            
            5'b00100: // Subtraction
                alu_result = alu_in_1 - alu_in_2;

            5'b00101: // Increment
                alu_result = alu_in_1 + 1;

            5'b00110: // Decrement
                alu_result = alu_in_1 - 1;

            5'b00111: // One's complement
                alu_result = ~alu_in_1;
            
            5'b01000: // Two's complement
                alu_result = ~alu_in_1 + 1;

            5'b01001: // AND
                alu_result = alu_in_1 & alu_in_2;

            5'b01010: // OR
                alu_result = alu_in_1 | alu_in_2;
            
            5'b01011: // NAND
                alu_result = ~(alu_in_1 & alu_in_2);

            5'b01100: // NOR
                alu_result = ~(alu_in_1 | alu_in_2);
            
            5'b01101: // XOR
                alu_result = alu_in_1 ^ alu_in_2;

            5'b01110: // NXOR
                alu_result = ~(alu_in_1 ^ alu_in_2);
            
            5'b01111: // Logical shift left
                alu_result = alu_in_1 << alu_in_2[4:0];
            
            5'b10000: // Logical shift right
                alu_result = alu_in_1 >> alu_in_2[4:0];

            5'b10001: // Arithmetic shift left
                alu_result = alu_in_1 <<< alu_in_2[4:0];
            
            5'b10010: // Arithmetic shift right
                alu_result = alu_in_1 >>> alu_in_2[4:0];

            5'b10011: // BEQ
                alu_bcond = alu_in_1 == alu_in_2;
            
            5'b10100: // BNE
                alu_bcond = alu_in_1 != alu_in_2;

            5'b10101: // BLT
                alu_bcond = alu_in_1 < alu_in_2;
            
            5'b10110: // BGE
                alu_bcond = alu_in_1 >= alu_in_2;
            
        endcase
    end
endmodule
