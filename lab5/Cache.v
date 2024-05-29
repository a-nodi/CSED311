`include "Constants.v"
`include "CLOG2.v"

`define IDLE 2'b00
`define HIT_CHECK 2'b01
`define WRITE_TO_MEM 2'b10
`define READ_FROM_MEM 2'b11

module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = `CACHE_NUM_SETS,
               parameter NUM_WAYS = `CACHE_NUM_WAYS) (
    input reset,
    input clk,

    input is_input_valid,
    input [`ADDRESS_WIDTH - 1:0] addr,
    input mem_rw,
    input [`DATA_WIDTH - 1:0] din,

    output is_ready,
    output is_output_valid,
    output reg [31:0] dout,
    output reg is_hit);

  // Wire declarations
  // Cache input 
  wire [`CACHE_INDEX_WIDTH - 1:0] index_input;
  wire [`CACHE_OFFSET_WIDTH - 1:0] offset_input;
  wire [`CACHE_TAG_WIDTH - 1:0] tag_input;

  // Cache output
  wire [8 * `BLOCK_SIZE - 1:0] data_stored;
  wire [`CACHE_TAG_WIDTH - 1:0] tag_stored;
  wire valid_stored;
  wire dirty_stored;
  wire [2 * `BLOCK_SIZE - 1:0] block0;
  wire [2 * `BLOCK_SIZE - 1:0] block1;
  wire [2 * `BLOCK_SIZE - 1:0] block2;
  wire [2 * `BLOCK_SIZE - 1:0] block3;

  // Cache control signals
  wire is_tag_matched;
  wire is_cache_hit;

  // Data memory signal
  wire is_data_mem_ready;

  // Misc
  wire [3:0] clog2;

  // Reg declarations
  // Cache data
  reg [8 * `BLOCK_SIZE - 1:0] data_storage [NUM_SETS - 1:0]; 
  reg [`CACHE_TAG_WIDTH - 1:0] tag_storage [NUM_SETS - 1:0]; 
  reg valid_storage [NUM_SETS - 1:0];
  reg dirty_storage [NUM_SETS - 1:0];

  // Cache working stage
  reg[1:0] current_stage;
  reg[1:0] next_stage;

  // Cache input signals
  reg is_write_dirty;
  reg is_write_valid;

  // Cache control signal
  reg write_enable;
  
  // Data memory signals
  reg data_memory_is_input_valid;
  reg [`ADDRESS_WIDTH - 1:0] data_memory_addr;
  reg data_memory_mem_read;
  reg data_memory_mem_write;
  reg [`BLOCK_SIZE * 8 - 1:0] data_memory_din;
  reg data_memory_is_output_valid;
  reg [`BLOCK_SIZE * 8 - 1:0] data_memory_dout;   
  // wire is_data_mem_ready;
  reg [`BLOCK_SIZE * 8 - 1:0] temp_data;

  // Misc
  reg ways;
  integer i;

  // Cache input
  assign index_input = addr[`ADDRESS_WIDTH - `CACHE_TAG_WIDTH - 1 : `ADDRESS_WIDTH - `CACHE_TAG_WIDTH - `CACHE_INDEX_WIDTH];
  assign offset_input = addr[`ADDRESS_WIDTH - `CACHE_TAG_WIDTH - `CACHE_INDEX_WIDTH - 1 : `ADDRESS_WIDTH - `CACHE_TAG_WIDTH - `CACHE_INDEX_WIDTH - `CACHE_OFFSET_WIDTH];
  assign tag_input = addr[`ADDRESS_WIDTH - 1 : `ADDRESS_WIDTH - `CACHE_TAG_WIDTH];

  // Module output signals
  assign is_ready = is_data_mem_ready;
  assign is_output_valid = (next_stage == `IDLE) ? 1 : 0;

  // Cache output
  assign data_stored = data_storage[index_input];
  assign tag_stored = tag_storage[index_input];
  assign valid_stored = valid_storage[index_input];
  assign dirty_stored = dirty_storage[index_input];
  assign block0 = data_stored[2 * `BLOCK_SIZE - 1:0];
  assign block1 = data_stored[4 * `BLOCK_SIZE - 1:2 * `BLOCK_SIZE];
  assign block2 = data_stored[6 * `BLOCK_SIZE - 1:4 * `BLOCK_SIZE];
  assign block3 = data_stored[8 * `BLOCK_SIZE - 1:6 * `BLOCK_SIZE];

  // Cache control signals
  assign is_tag_matched = (tag_input == tag_stored) ? 1 : 0;  
  assign is_cache_hit = (valid_stored && is_tag_matched) ? 1 : 0;

  // Misc
  assign clog2 = `CLOG2(LINE_SIZE);

  always @(posedge clk) begin
    // Initialize cache
    if(reset) begin
      for(i = 0; i < NUM_SETS; i = i + 1) begin
        data_storage[i] <= 0;
        tag_storage[i] <= 0;
        valid_storage[i] <= 0;
        dirty_storage[i] <= 0;
      end
    end
    
    // Update cache
    else begin
      if(write_enable) begin
          data_storage[index_input] <= temp_data;
          tag_storage[index_input] <= tag_input;
          valid_storage[index_input] <= is_write_valid;
          dirty_storage[index_input] <= is_write_dirty;
      end
    end

    // Move to next stage
    current_stage <= reset ? `IDLE : next_stage;
  end

  always @(*) begin
    
    // Cache input signals
    write_enable = 0;
    is_write_valid = 0;
    is_write_dirty = 0;

    // Module output
    dout = 0;

    // Module output signals
    is_hit = is_cache_hit ? 1 : 0;

    // Data memory signals
    data_memory_is_input_valid = 0;
    data_memory_addr = 0;
    data_memory_mem_read = 0;
    data_memory_mem_write = 0;
    data_memory_din = 0;

    // Cache input signals
    temp_data = 0;
    
    // Misc
    ways = NUM_WAYS;

    // Next stage set (error handling)
    next_stage = `IDLE;

    // Update cache block
    case (offset_input)
      2'b00: begin
        temp_data = {block3, block2, block1, din};
        dout = data_storage[index_input][2 * `BLOCK_SIZE - 1: 0];
      end
      2'b01: begin
        temp_data = {block3, block2, din, block0};
        dout = data_storage[index_input][4 * `BLOCK_SIZE - 1: 2 * `BLOCK_SIZE];
      end
      2'b10: begin
        temp_data = {block3, din, block1, block0};
        dout = data_storage[index_input][6 * `BLOCK_SIZE - 1: 4 * `BLOCK_SIZE];
      end
      2'b11: begin
        temp_data = {din, block2, block1, block0};
        dout = data_storage[index_input][8 * `BLOCK_SIZE - 1: 6 * `BLOCK_SIZE];
      end
    endcase

    // Idle stage
    if(current_stage == `IDLE) begin
      next_stage = is_input_valid ? `HIT_CHECK : `IDLE;
    end

    // Check if the cache hit
    else if (current_stage == `HIT_CHECK) begin
      if (is_cache_hit) begin // Cache hit
        if(mem_rw) begin // Write to cache
          write_enable = 1;
          is_write_valid = 1;
          is_write_dirty = 1;
        end

        next_stage = `IDLE;
      end
      else begin // Cache miss
          next_stage = dirty_stored ? `WRITE_TO_MEM : `READ_FROM_MEM;
      end
    end

    else if (current_stage == `WRITE_TO_MEM) begin
      // Write dirty cache line to memory
      if (is_data_mem_ready) begin
        data_memory_addr = {tag_storage[index_input], index_input, 4'b0000} >> clog2;
        data_memory_is_input_valid = 1;
        data_memory_mem_write = 1;
        data_memory_mem_read = 0;
        data_memory_din = data_storage[index_input];
        next_stage = `READ_FROM_MEM;
      end
      else begin
        next_stage =`WRITE_TO_MEM;
      end
    end

    else if (current_stage == `READ_FROM_MEM) begin
        data_memory_mem_read =1;
        data_memory_mem_write =0;
        data_memory_addr = addr >> clog2;
        data_memory_is_input_valid = 1;

      if (data_memory_is_output_valid) begin
        write_enable = 1;
        temp_data = data_memory_dout;
        is_write_valid = 1;
        is_write_dirty = 0;
        data_memory_is_input_valid = 0;
        next_stage = `HIT_CHECK;
      end

      else begin
        next_stage =`READ_FROM_MEM;
      end
    end
  end

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),
    .is_input_valid(data_memory_is_input_valid),
    .addr(data_memory_addr),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(data_memory_mem_read),
    .mem_write(data_memory_mem_write),
    .din(data_memory_din),
    // is output from the data memory valid?
    .is_output_valid(data_memory_is_output_valid),
    .dout(data_memory_dout),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
endmodule
