`include "opcodes.v"
`include "states.v"

module FSM(
    part_of_inst,
    alu_bcond,
    current_state,
    next_state
);

    input [6:0] part_of_inst;
    input alu_bcond;
    input [2:0] current_state;
    output reg [2:0] next_state;
    
    // Combinational logic for the FSM
    always @(*) begin
        case(current_state)
            `IF1 : begin
                next_state = `IF2;
            end

            `IF2 : begin
                if (part_of_inst == `ECALL) begin
                    next_state = `IF1; // IF -> IF
                end

                else if (part_of_inst == `JAL) begin
                    next_state = `EX1; // IF -> EX
                end

                else begin
                    next_state = `ID; // IF -> ID
                end
            end
            
            `ID : begin
                next_state = `EX1; // ID -> EX
            end

            `EX1 : begin
                if (part_of_inst == `BRANCH && alu_bcond) begin // If branch is taken
                    next_state = `EX2; // hold in EX
                end

                else if (part_of_inst == `BRANCH && !alu_bcond) begin // If branch is not taken 
                    next_state = `IF1; // EX -> IF
                end

                else begin
                    if (part_of_inst == `ARITHMETIC || part_of_inst == `ARITHMETIC_IMM || part_of_inst == `JAL || part_of_inst == `JALR) begin
                        next_state = `WB; // EX -> WB
                    end

                    else if (part_of_inst == `LOAD || part_of_inst == `STORE) begin
                        next_state = `MEM; // MEM -> WB
                    end

                    else begin
                        next_state = `IF1; // EX -> IF
                    end
                end
            end

            `EX2 : begin
                next_state = `IF1; // EX -> IF (After branch taken)
            end

            `MEM : begin
                if (part_of_inst == `LOAD) begin
                    next_state = `WB; // MEM -> WB
                end

                else if (part_of_inst == `STORE) begin
                    next_state = `IF1; // MEM -> IF
                end

                else begin
                    next_state = `IF1; // MEM -> IF
                end
            end

            `WB : begin
                next_state = `IF1; // WB -> IF
            end

            default : begin
                next_state = `IF1; // Starting
            end
        endcase
    end
endmodule
