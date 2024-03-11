`include "vending_machine_def.v"

	

module check_time_and_coin(i_input_coin,
                           i_select_item,
						   current_total,
						   i_trigger_return,
						   coin_value,
						   clk,
						   reset_n,
						   wait_time,
						   o_return_coin
						   );
	input clk;
	input reset_n;
	input [`kNumCoins-1:0] i_input_coin;
	input [`kNumItems-1:0] i_select_item;
	input [`kTotalBits-1:0] current_total;
	input i_trigger_return;
	input [31:0] coin_value [`kNumCoins-1:0];
	output reg [`kNumCoins-1:0] o_return_coin;
	output reg [31:0] wait_time;

	// initiate values
	initial begin
		wait_time <= `kWaitTime;	
		o_return_coin <= 3'b000;
	end

	// update coin return time
	always @(i_input_coin, i_select_item) begin
		// If there is a input coin or user has selected item,, reset wait time
		if (i_input_coin[0] == 1 | i_input_coin[1] == 1 | i_input_coin[2] == 1 | i_select_item[0] == 1 | i_select_item[1] == 1 | i_select_item[2] == 1 | i_select_item[3] == 1) begin
			wait_time <= `kWaitTime;
		end
	end

	always @(*) begin
		o_return_coin = 3'b000;
		if (wait_time == 0 || i_trigger_return  == 1) begin
			if (current_total >= coin_value[2] + coin_value[1] + coin_value[0]) begin
				o_return_coin = 3'b111;
			end
			else if (current_total >= coin_value[2] + coin_value[1]) begin
				o_return_coin = 3'b110;
			end
			else if (current_total >= coin_value[2] + coin_value[0]) begin
				o_return_coin = 3'b101;
			end
			else if (current_total >= coin_value[2]) begin
				o_return_coin = 3'b100;
			end
			else if (current_total >= coin_value[1] + coin_value[0]) begin
				o_return_coin = 3'b011;
			end
			else if (current_total >= coin_value[1]) begin
				o_return_coin = 3'b010;
			end
			else if (current_total >= coin_value[0]) begin
				o_return_coin = 3'b001;
			end
		end
	end

	always @(posedge clk ) begin
		if (!reset_n) begin // Reset time
			wait_time <= `kWaitTime;
		end
		else if (i_trigger_return == 1) begin // If return, reset time
			wait_time <= 0;
		end
		else if (wait_time > 0) begin // If time is ticking, decrease time
			wait_time <= wait_time - 1;
		end

	end
endmodule 