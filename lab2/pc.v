module pc(
    input reset,
    input clk,
    input [31:0] next_pc,
    output reg [31:0] current_pc
);

    always @(posedge clk) begin
        if (reset) begin
            current_pc <= 32'b0;  //리셋 시 PC를 0으로 초기화
        end else begin
            current_pc <= next_pc;  //다음 PC 값으로 업데이트
        end
    end

endmodule
