alu_control_unit alu_ctrl_unit (
    part_of_inst,
    alu_op
  );
    input [31:0] part_of_inst;
    output reg [4:0] alu_op;

    assign funct7 = part_of_inst[31:25];
    assign funct3 = part_of_inst[14:12];
    assign opcode = part_of_inst[6:0];

    always (*) begin
        alu_op = 5'b00000;

        if (opcode == ARITHMETIC) begin
            if (funct7 == FUNCT7_OTHERS) begin
                case (funct3) begin
                    ALU_ADD: alu_op = 5'b00011;
                    ALU_AND: alu_op = 5'b01001;
                    ALU_OR: alu_op = 5'b01010;
                    ALU_XOR: alu_op = 5'b01101;
                    ALU_SLT: alu_op = 5'b00100;
                    ALU_SLL: alu_op = 5'b00101;
                endcase
            end

            if (funct7 == FUNCT7_SUB) begin
                case (funct3) begin
                    ALU_SUB: alu_op = 5'b00100;
                endcase
            end
        end

        if (opcode == ARITHMETIC_IMM) begin
            if (funct7 == FUNCT7_OTHERS) begin
                case(funct3) begin
                    ALU_ADDI: alu_op = 5'b00011;
                    ALU_ANDI: alu_op = 5'b01001;
                    ALU_ORI: alu_op = 5'b01010;
                    ALU_XORI: alu_op = 5'b01101;
                    ALU_SLTI: alu_op = 5'b00100;
                    ALU_SLLI: alu_op = 5'b00101;
                endcase
            end
        end

        if (opcode == LOAD) begin
            case(funct3) begin
                ALU_LW: alu_op = 5'b00011;
            endcase
        end

        if (opcode == STORE) begin
            case(funct3) begin
                ALU_SW: alu_op = 5'b00011;
            endcase
        end

        if (opcode == BRANCH) begin
            case(funct3) begin
                ALU_BEQ: alu_op = 5'b10011;
                ALU_BNE: alu_op = 5'b10100;
                ALU_BLT: alu_op = 5'b10101;
                ALU_BGE: alu_op = 5'b10110;
            endcase
        end

        if (opcode == JALR) begin
            alu_op = 5'b00011;
        end

        if (opcode == JAL) begin
            alu_op = 5'b00011;
        end

    end