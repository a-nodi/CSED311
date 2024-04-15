`include "opcodes.v"

module alu_control_unit (
    part_of_inst,
    alu_ctrl_op,
    alu_op
  );
    input [16:0] part_of_inst;
    input alu_ctrl_op;
    output reg [4:0] alu_op;

    wire [6:0] funct7;
    wire [2:0] funct3;
    wire [6:0] opcode;

    assign funct7 = part_of_inst[16:10];
    assign funct3 = part_of_inst[9:7];
    assign opcode = part_of_inst[6:0];

    always @(*) begin        
        alu_op = 5'b00000;

        if (alu_ctrl_op == 0) begin
            alu_op = 5'b00011;            
        end

        else begin
            if (opcode == `ARITHMETIC) begin
                if (funct7 == `FUNCT7_OTHERS) begin
                    case (funct3)
                        `FUNCT3_ADD: alu_op = 5'b00011;
                        `FUNCT3_AND: alu_op = 5'b01001;
                        `FUNCT3_OR: alu_op = 5'b01010;
                        `FUNCT3_XOR: alu_op = 5'b01101;
                        `FUNCT3_SLL: alu_op = 5'b01111;
                        `FUNCT3_SRL: alu_op = 5'b10000;
                        default: begin
                        end
                    endcase
                end

                if (funct7 == `FUNCT7_SUB) begin
                    case (funct3)
                        `FUNCT3_SUB: alu_op = 5'b00100;
                        default: begin
                        end
                    endcase
                end
            end

            else if (opcode == `ARITHMETIC_IMM) begin

                case(funct3)
                    `FUNCT3_ADD: alu_op = 5'b00011;
                    `FUNCT3_AND: alu_op = 5'b01001;
                    `FUNCT3_OR: alu_op = 5'b01010;
                    `FUNCT3_XOR: alu_op = 5'b01101;
                    `FUNCT3_SLL: alu_op = 5'b01111;
                    `FUNCT3_SRL: alu_op = 5'b10000;
                    default: begin
                    end
                endcase
            
            end

            else if (opcode == `LOAD) begin
                case(funct3)
                    `FUNCT3_LW: alu_op = 5'b00011;
                    default: begin
                    end
                endcase
            end

            else if (opcode == `STORE) begin
                case(funct3)
                    `FUNCT3_SW: alu_op = 5'b00011;
                    default: begin
                    end
                endcase
            end

            else if (opcode == `BRANCH) begin
                case(funct3)
                    `FUNCT3_BEQ: alu_op = 5'b10011;
                    `FUNCT3_BNE: alu_op = 5'b10100;
                    `FUNCT3_BLT: alu_op = 5'b10101;
                    `FUNCT3_BGE: alu_op = 5'b10110;
                    default: begin
                    end
                endcase
            end

            else if (opcode == `JALR) begin
                alu_op = 5'b00011;
            end

            else if (opcode == `JAL) begin
                alu_op = 5'b00011;
            end
        emd
    end
endmodule
