
`include "vending_machine_def.v"
	

module calculate_current_state(i_input_coin,i_select_item,item_price,coin_value,current_total,
input_total, output_total, return_total,current_total_nxt,wait_time,o_return_coin,o_available_item,o_output_item);


	
	input [`kNumCoins-1:0] i_input_coin,o_return_coin;
	input [`kNumItems-1:0]	i_select_item;			
	input [31:0] item_price [`kNumItems-1:0];
	input [31:0] coin_value [`kNumCoins-1:0];	
	input [`kTotalBits-1:0] current_total;
	input [31:0] wait_time;
	output reg [`kNumItems-1:0] o_available_item,o_output_item;
	output reg  [`kTotalBits-1:0] input_total, output_total, return_total,current_total_nxt;
	integer i;	
	
	// Combinational logic for the next states
	always @(*) begin

		input_total = 0;
		output_total = 0;
		return_total = 0;
		current_total_nxt = 0;

		// Calculate input total
		if (i_input_coin[0] == 1) begin
			input_total = input_total + coin_value[0];
		end
		if (i_input_coin[1] == 1) begin
			input_total = input_total + coin_value[1];
		end
		if (i_input_coin[2] == 1) begin
			input_total = input_total + coin_value[2];
		end

		// Calculate output total
		if (o_output_item[0] == 1) begin
			output_total = output_total + item_price[0];
		end 
		if (o_output_item[1] == 1) begin
			output_total = output_total + item_price[1];
		end
		if (o_output_item[2] == 1) begin
			output_total = output_total + item_price[2];
		end
		if (o_output_item[3] == 1) begin
			output_total = output_total + item_price[3];
		end

		// Calculate return total
		if (o_return_coin[0] == 1) begin
			return_total = return_total + coin_value[0];
		end
		if (o_return_coin[1] == 1) begin
			return_total = return_total + coin_value[1];
		end
		if (o_return_coin[2] == 1) begin
			return_total = return_total + coin_value[2];
		end

		// Calculate current total
		current_total_nxt = current_total + input_total - output_total - return_total;

	end

	
	
	// Combinational logic for the outputs
	always @(*) begin
		o_available_item = 4'b0000;
		o_output_item = 4'b0000;

		
		if (current_total >= item_price[3]) begin
			o_available_item[3] = 1;
			if (i_select_item[3]) begin
				o_output_item[3] = 1;
			end
		end

		if (current_total >= item_price[2]) begin
			o_available_item[2] = 1;
			if (i_select_item[2]) begin
				o_output_item[2] = 1;
			end
		end

		if (current_total >= item_price[1]) begin
			o_available_item[1] = 1;
			if (i_select_item[1]) begin
				o_output_item[1] = 1;
			end
		end

		if (current_total >= item_price[0]) begin
			o_available_item[0] = 1;
			if (i_select_item[0]) begin
				o_output_item[0] = 1;
			end
		end
	end
 
	


endmodule 