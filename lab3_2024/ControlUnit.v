`include "opcodes.v"
`include "states.v"
`include "FSM.v"

module ControlUnit(
    part_of_inst,
    alu_bcond,
    clk,
    reset,
    
    i_or_d,
    ir_write,
    pc_source,
    pc_write,
    pc_write_not_cond,
    alu_op,
    alu_src_a,
    alu_src_b,
    reg_write,
    mem_read,
    mem_write,
    mem_to_reg,
    is_ecall
)
    input [6:0] part_of_inst;
    input alu_bcond;
    input clk;
    input reset;

    output reg i_or_d;
    output reg ir_write;
    output reg pc_source;
    output reg pc_write;
    output reg pc_write_not_cond;
    output reg alu_op;
    output reg alu_src_a;
    output reg [1:0] alu_src_b;
    output reg reg_write;
    output reg mem_read;
    output reg mem_write;
    output reg mem_to_reg;
    output reg is_ecall;

    reg [2:0] current_state;
    wire [2:0] next_state;

    // State managing FSM
    FSM fsm(
        .part_of_inst(part_of_inst),
        .alu_bcond(alu_bcond),
        .current_state(current_state),
        .next_state(next_state)
    );

    // State updating logic
    always @(posedge clk) begin
        if (reset) begin
            current_state <= `IF1;
        end

        else begin
            current_state <= next_state;
        end
    end

    always @(*) begin
        i_or_d = 1'b0;
        ir_write = 1'b0;
        pc_source = 1'b0;
        pc_write = 1'b0;
        pc_write_not_cond = 1'b0;
        alu_op = 2'b00;
        alu_src_a = 1'b0; // Default: PC <- PC + 4
        alu_src_b = 2'b01; // Default: PC <- PC + 4
        reg_write = 1'b0;
        mem_read = 1'b0;
        mem_write = 1'b0;
        mem_to_reg = 1'b0;
        is_ecall = 1'b0;

        case(current_state)
            `IF1 : begin
                // Default values
                pc_source = 1'b0;
                pc_write = 1'b0;
                pc_write_not_cond = 1'b0;
                alu_op = 2'b00;
                alu_src_a = 1'b0;
                alu_src_b = 2'b01;
                reg_write = 1'b0;
                mem_write = 1'b0;
                mem_to_reg = 1'b0;
                is_ecall = 1'b0;

                mem_read = 1'b1;
                i_or_d = 1'b0;
                ir_write = 1'b1;
            end

            `IF2 : begin
                if (part_of_inst == `ECALL) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    alu_op = 2'b00;
                    alu_src_a = 1'b0; // Default: PC <- PC + 4
                    alu_src_b = 2'b01; // Default: PC <- PC + 4
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;

                    is_ecall = 1'b1;
                end

                else begin
                    // Default values
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    alu_op = 2'b00;
                    alu_src_a = 1'b0; // Default: PC <- PC + 4
                    alu_src_b = 2'b01; // Default: PC <- PC + 4
                    reg_write = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;
                    
                    mem_read = 1'b1;
                    i_or_d = 1'b0;
                    ir_write = 1'b1;
                end
            end

            `ID : begin
                // Default values
                i_or_d = 1'b0;
                ir_write = 1'b0;
                pc_source = 1'b0;
                pc_write = 1'b0;
                pc_write_not_cond = 1'b0;
                reg_write = 1'b0;
                mem_read = 1'b0;
                mem_write = 1'b0;
                mem_to_reg = 1'b0;
                is_ecall = 1'b0;

                alu_src_a = 1'b0;
                alu_src_b = 2'b01;
                alu_op = 1'b0; // ALU works as Adder (ALUout <- pc + 4)
            end

            `EX1 : begin // Calcuate bcond (fro branch instruction) or ALUOut (for others)
                if (part_of_inst == `ARITHMETIC) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;
                    
                    alu_src_a = 1'b1; // 1st ALU input comes from register file
                    alu_src_b = 2'b00; // 2nd ALU input comes from register file
                    alu_op = 1'b1; // ALU works as ALU (ALUOut <- A op B)
                end

                else if (part_of_inst == `ARITHMETIC_IMM) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;

                    alu_src_a = 1'b1; // 1st ALU input comes from register file
                    alu_src_b = 2'b10; // 2nd ALU input comes from immediate generator
                    alu_op = 1'b1; // ALU works as ALU (ALUOut <- A op immediate)
                end

                else if (part_of_inst == `LOAD || part_of_inst == `STORE) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;
                    
                    alu_src_a = 1'b1; // 1st ALU input comes from register file
                    alu_src_b = 2'b10; // 2nd ALU input comes from immediate generator
                    alu_op = 1'b0; // ALU works as Adder (ALUOut <- A + immediate)
                end

                // PC calculation for branch (not taken) instruction
                else if (part_of_inst == `BRANCH) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_write = 1'b0;
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;

                    alu_src_a = 1'b1; // 1st ALU input comes from register file
                    alu_src_b = 2'b00; // 2nd ALU input comes from register file
                    alu_op = 1'b1; // ALU works as ALU (ALUOut <- A op B)
                    pc_write_not_cond = 1b`1; // Enable PC write(branch not taken)
                    pc_source = 1'b1; // PC <- ALUOUT
                end
            end

            `EX2 : begin // Calculate pc + imm (branch taken)
                // Default values
                i_or_d = 1'b0;
                ir_write = 1'b0;
                pc_write_not_cond = 1'b0;
                reg_write = 1'b0;
                mem_read = 1'b0;
                mem_write = 1'b0;
                mem_to_reg = 1'b0;
                is_ecall = 1'b0;
            
                // PC calculation for branch (taken) instruction
                alu_src_a = 1'b0; // 1st ALU input comes from PC
                alu_src_b = 2'b10; // 2nd ALU input comes from immediate generator
                alu_op = 1'b0; // ALU works as Adder (ALUOut <- PC + immediate)
                pc_write = 1'b1; // Enable PC write
                pc_source = 1'b0; // PC <- ALU
            end

            `MEM : begin
                if (part_of_inst == `LOAD) begin
                    // Default values
                    ir_write = 1'b0;
                    pc_source = 1'b0;
                    pc_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    alu_op = 2'b00;
                    alu_src_a = 1'b0; // Default: PC <- PC + 4
                    alu_src_b = 2'b01; // Default: PC <- PC + 4
                    reg_write = 1'b0;
                    mem_write = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;
                    
                    mem_read = 1'b1;
                    i_or_d = 1'b1;
                end

                // PC calculation for store instruction
                else if (part_of_inst == `STORE) begin
                    // Default values
                    ir_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    alu_op = 2'b00;
                    reg_write = 1'b0;
                    mem_read = 1'b0;
                    mem_to_reg = 1'b0;
                    is_ecall = 1'b0;

                    
                    mem_write = 1'b1; // Enable memory write
                    i_or_d = 1'b1; // ALUOut supplies data address
                    alu_src_a = 1'b0; // 1st ALU input comes from PC
                    alu_src_b = 2'b01; // 2nd ALU input is 4
                    alu_op = 1'b0; // ALU works as Adder (ALUOut <- PC + 4)
                    pc_write = 1'b1; // Enable PC write (unconditional)
                    pc_source = 1'b0; // PC <- ALU
                end
            end

            `WB : begin
                // PC calculation for r-type, i-type instructions
                if (part_of_inst == `ARITHMETIC || part_of_inst == `ARITHMETIC_IMM) begin
                    // Default values
                    ir_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    is_ecall = 1'b0;

                    reg_write = 1'b1;
                    mem_to_reg = 1'b0;
                    i_or_d = 1'b0;
                    alu_src_a = 1'b0; // 1st ALU input comes from PC
                    alu_src_b = 2'b01; // 2nd ALU input is 4
                    alu_op = 1'b0; // ALU works as Adder (ALUOut <- PC + 4)
                    pc_write = 1'b1; // Enable PC write (unconditional)
                    pc_source = 1'b0; // PC <- ALU
                end

                else if (part_of_inst == `LOAD) begin
                    // Default values
                    ir_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    is_ecall = 1'b0;
                    
                    reg_write = 1'b1;
                    mem_to_reg = 1'b1;
                    i_or_d = 1'b0;
                    alu_src_a = 1'b0; // 1st ALU input comes from PC
                    alu_src_b = 2'b01; // 2nd ALU input is 4
                    alu_op = 1'b0; // ALU works as Adder (ALUOut <- PC + 4)
                    pc_write = 1'b1; // Enable PC write (unconditional)
                    pc_source = 1'b0; // PC <- ALU
                end

                else if (part_of_inst == `JAL || part_of_inst == `JALR) begin
                    // Default values
                    i_or_d = 1'b0;
                    ir_write = 1'b0;
                    pc_write_not_cond = 1'b0;
                    mem_read = 1'b0;
                    mem_write = 1'b0;
                    is_ecall = 1'b0;
                    
                    reg_write = 1'b1;
                    mem_to_reg = 1'b0;
                    alu_src_a = 1'b0; // 1st ALU input comes from PC
                    alu_src_b = 2'b10; // 2nd ALU input comes from immediate generator
                    alu_op = 1'b0; // ALU works as Adder (ALUOut <- PC + immediate)
                    pc_write = 1'b1; // Enable PC write (unconditional)
                    pc_source = 1'b0; // PC <- ALU
                end
            end
        endcase
    end
endmodule
