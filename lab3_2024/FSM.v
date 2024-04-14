



module FSM(
    part_of_inst,
    MemData,
    current_state,
    next_state
);

    input [6:0] part_of_inst;
    input [6:0] MemData;
    input [3:0] current state;
    output reg [3:0] next_state;

    always @(*) begin