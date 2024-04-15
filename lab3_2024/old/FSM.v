`include "opcodes.v"

`deifne INSTRUCTION_FETCH 4'b0000
`define INSTRUCTION_DECODE_REGISTER_FETCH 4'b0001
`define MEMORY_ADDRESS_COMPUTATION 4'b0010
`define MEMORY_ACCESS_LW 4'b0011
`define WRITE_BACK_STEP 4'b0100
`define MEMORY_ACCESS_SW 4'b0101
`define R_TYPE_EXECUTION 4'b0110
`define R_TYPE_COMPLETION 4'b0111
`define BRANCH_COMPLETION 4'b1000
`define I_TYPE_EXECUTION 4'b1001
`define JAL_EXECUTION 4'b1010
`define JALR_EXECUTION 4'b1011
`define HALT 4'b1100


module FSM(
    part_of_inst,
    alu_bcond,
    current_state,
    next_state
);

    input [6:0] part_of_inst;
    input alu_bcond;
    input [3:0] current state;
    output reg [3:0] next_state;

    // Determine next state
    always @(*) begin
        case (current_state)
            `INSTRUCTION_FETCH: begin
                if (part_of_inst == `JAL) begin
                    next_state = `JAL_EXECUTION;
                end
                else begin
                    next_state = `INSTRUCTION_DECODE_REGISTER_FETCH;
                end
            end

            `INSTRUCTION_DECODE_REGISTER_FETCH: begin
                if (part_of_inst == `ARITHMETIC) begin
                    next_state = `R_TYPE_EXECUTION;
                end
                else if (part_of_inst == `ARITHMETIC_IMM) begin
                    next_state = `I_TYPE_EXECUTION;
                end
                else if (part_of_inst == `LOAD) begin
                    next_state = `MEMORY_ADDRESS_LW;
                end
                else if (part_of_inst == `STORE) begin
                    next_state = `MEMORY_ACCESS_SW;
                end
                else if (part_of_inst == `BRANCH) begin
                    next_state = `MEMORY_ADDRESS_COMPUTATION;
                end
                else if (part_of_inst == `JAL) begin
                    next_state = `JAL_EXECUTION;
                end
                else if (part_of_inst == `JALR) begin
                    next_state = `JALR_EXECUTION;
                end
                else if (part_of_inst == `ECALL) begin
                    next_state = `HALT;
                end
            end

            `MEMORY_ADDRESS_COMPUTATION: begin
                if(part_of_inst == `LOAD) begin
                    next_state = `MEMORY_ACCESS_LW;
                end
                else if(part_of_inst == `STORE) begin
                    next_state = `MEMORY_ACCESS_SW;
                end
            end

            `MEMORY_ACCESS_LW: begin
                next_state = `WRITE_BACK_STEP;
            end

            `WRITE_BACK_STEP: begin
                next_state = `INSTRUCTION_FETCH;
            end

            `MEMORY_ACCESS_SW: begin
                next_state = `INSTRUCTION_FETCH;
            end

            `R_TYPE_EXECUTION: begin
                next_state = `R_TYPE_COMPLETION;
            end

            `R_TYPE_COMPLETION: begin
                next_state = `INSTRUCTION_FETCH;
            end

            `BRANCH_COMPLETION: begin
                if (alu_bcond) begin
                    next_state = `MEMORY_ADDRESS_COMPUTATION;
                end
                else begin
                    next_state = `INSTRUCTION_FETCH;
                end
            end

            `I_TYPE_EXECUTION: begin
                next_state = `R_TYPE_COMPLETION;
            end

            `JAL_EXECUTION: begin
                next_state = `INSTRUCTION_FETCH;
            end

            `JALR_EXECUTION: begin
                next_state = `INSTRUCTION_FETCH;
            end

            `HALT: begin
                next_state = `HALT;
            end

            default: begin
                next_state = `INSTRUCTION_FETCH;
            end
        endcase
    end
endmodule