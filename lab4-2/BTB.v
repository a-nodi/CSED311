module BTB(
    input [31:0] pc,
    input [31:0] target,
    input branch,
    input [1:0] branch_type,
    input [1:0] branch_taken,
    output reg [31:0] target_out
);

    // reg [31:0] target_out;

    wire[21:0] tag;
    wire[9:0] btb_index;


    always @(*) begin
        if (branch) begin
            if (branch_type == 2'b00) begin
                target_out = pc + target;
            end
            else if (branch_type == 2'b01) begin
                target_out = pc + target;
            end
            else if (branch_type == 2'b10) begin
                target_out = pc + target;
            end
            else if (branch_type == 2'b11) begin
                target_out = pc + target;
            end
        end
        else begin
            target_out = pc + 4;
        end
    end
endmodule
