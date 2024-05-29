`include "Constants.v"
`include "CLOG2.v"

`define IDLE 2'b00
`define HIT_CHECK 2'b01
`define READ_FROM_MEM 2'b10
`define WRITE_TO_MEM 2'b11

module Cache #(parameter LINE_SIZE = 16,
               parameter NUM_SETS = `CACHE_NUM_SETS,
               parameter NUM_WAYS = `CACHE_NUM_WAYS) (
    input reset,
    input clk,

    input is_input_valid,
    input [31:0] addr,
    input mem_rw,
    input [31:0] din,

    output is_ready,
    output is_output_valid,
    output [31:0] dout,
    output is_hit,
    output is_miss); // OK

  // Wire declarations
  wire is_data_mem_ready;

  // Input signals
  wire [`CACHE_TAG_WIDTH - 1:0] tag_input;
  wire [`CACHE_INDEX_WIDTH - 1:0] index_input;
  wire [`CACHE_OFFSET_WIDTH - 1:0] offset_input;

  wire [3:0] clog2;

  // cache storage
  wire [`BLOCK_SIZE * 8 - 1:0] data_stored;
  wire [`CACHE_TAG_WIDTH - 1:0] tag_stored;
  wire valid_stored;
  wire dirty_stored;


  wire is_tag_match;
  wire is_cache_hit;
  wire is_current_storage_dirty;

  // Reg declarations
  // You might need registers to keep the status.
  reg [`BLOCK_SIZE * 8 - 1:0] data_storage [0:NUM_SETS-1];
  reg [`CACHE_TAG_WIDTH - 1:0] tag_storage [0:NUM_SETS-1];
  reg [0:0] valid_storage [0:NUM_SETS-1];
  reg [0:0] dirty_storage [0:NUM_SETS-1];
  
  // Stage of the FSM
  reg [1:0] current_stage;
  reg [1:0] next_stage;

  // Temporary storage
  reg [`CACHE_TAG_WIDTH - 1:0] tag_write_tobe_cache;
  reg [`CACHE_TAG_WIDTH - 1:0] tag_read_from_cache;
  reg [`BLOCK_SIZE * 8 - 1:0] data_write_tobe_cache;
  reg [`DATA_WIDTH - 1:0] data_read_from_cache;

  // Write signals
  reg is_write_valid;
  reg is_write_dirty;
  reg tag_write_enable;
  reg data_write_enable;
  reg cache_is_output_valid;

  // Data memory signals
  reg [`ADDRESS_WIDTH - 1:0] data_memory_address;
  reg [`BLOCK_SIZE * 8 - 1:0] data_memory_data_input;
  reg data_memory_input_is_valid;
  reg data_memory_output_is_valid;
  reg data_memory_is_read;
  reg data_memory_is_write;
  reg [`BLOCK_SIZE * 8 - 1:0] data_memory_data_output;

  reg ways;

  integer i;
  // integer j;

  // Assign wires
  assign tag_input = addr[`ADDRESS_WIDTH - 1 : `ADDRESS_WIDTH - `CACHE_TAG_WIDTH];
  assign index_input = addr[`ADDRESS_WIDTH - `CACHE_TAG_WIDTH - 1 : `ADDRESS_WIDTH - `CACHE_TAG_WIDTH - `CACHE_INDEX_WIDTH];
  assign offset_input = addr[`CACHE_OFFSET_WIDTH - 1 : 0];
  assign clog2 = `CLOG2(LINE_SIZE);

  assign data_stored = data_storage[index_input];
  assign tag_stored = tag_storage[index_input];
  assign valid_stored = valid_storage[index_input];
  assign dirty_stored = dirty_storage[index_input];

  assign is_tag_match = (tag_stored == tag_input); // Compare tag is matched
  assign is_cache_hit = (is_tag_match && valid_stored); // is cache hit?
  
  assign is_hit = is_cache_hit; // output hit signal
  assign is_miss = !is_cache_hit;
  assign is_ready = is_data_mem_ready; // output ready signal
  assign is_output_valid = cache_is_output_valid; // || data_memory_output_is_valid; // output valid signal

  assign is_current_storage_dirty = dirty_storage[index_input]; // is the current storage dirty?

  assign dout = data_read_from_cache; // output data

  always @(posedge clk) begin
    if (reset) begin
      // Initialize data storage
      for (i = 0; i < NUM_SETS; i = i + 1) begin
        data_storage[i] <= 0;
        tag_storage[i] <= 0;
        valid_storage[i] <= 0;
        dirty_storage[i] <= 0;
        
      end
      // Initialize stage
      current_stage <= `IDLE;
      // next_stage <= `IDLE;
    end

    else begin // & Move to next stage      
      if (data_write_enable) begin
        data_storage[index_input] <= data_write_tobe_cache;
      end
    
      if (tag_write_enable) begin
        tag_storage[index_input] <= tag_write_tobe_cache;
        valid_storage[index_input] <= is_write_valid;
        dirty_storage[index_input] <= is_write_dirty;
      end
    
      current_stage <= next_stage;
    end
    // $display("stage: %d vaild: %d dirty: %d hit: %d tag_match: %d valid_stored: %d tstore: %d tinput: %d twtbc: %d", current_stage, is_write_valid, is_write_dirty, is_cache_hit, is_tag_match, valid_stored, tag_stored, tag_input, tag_write_tobe_cache);
    //j <= j + 1;
    ways <= NUM_WAYS;
  end

  /*
  FSM description
  1. IDLE: Wait for the input valid signal
  
  2. HIT_CHECK: Check if the cache hit
  
  3. READ_FROM_MEM: Read from the memory
  
  4. WRITE_TO_MEM: Write to the memory

  */

  // Assign I/O signals
  //always @(*) begin
  
  //end

  always @(*) begin
    data_write_tobe_cache = data_stored;

    case(offset_input)
      2'b00: begin
        data_write_tobe_cache[31:0] = din;
        data_read_from_cache = data_stored[31:0];
      end

      2'b01: begin
        data_write_tobe_cache[63:32] = din;
        data_read_from_cache = data_stored[63:32];
      end

      2'b10: begin
        data_write_tobe_cache[95:64] = din;
        data_read_from_cache = data_stored[95:64];
      end

      2'b11: begin
        data_write_tobe_cache[127:96] = din;
        data_read_from_cache = data_stored[127:96];
      end
    endcase
  
    tag_write_tobe_cache = 0;
    is_write_valid = 0;
    is_write_dirty = 0;
    
    tag_write_enable = 0;
    data_write_enable = 0;

    data_memory_is_read = 0;
    data_memory_is_write = 0;
    data_memory_input_is_valid = 0;
    data_memory_address = 0;
    data_memory_data_input = 0;
    cache_is_output_valid = 0;
    next_stage = `IDLE;

    // IDLE stage
    if (current_stage == `IDLE) begin
      cache_is_output_valid = 1;
      if (is_input_valid) begin // Valid input, have to check the tags
        next_stage = `HIT_CHECK;
      end
      else begin // Hold the current stage
        next_stage = `IDLE;
      end
    end

    // check the current data is in the cache
    else if (current_stage == `HIT_CHECK) begin

      if (is_cache_hit) begin // Cache hit
        next_stage = `IDLE;
        cache_is_output_valid = 1;
        // Write directly to cache
        if (mem_rw) begin
          is_write_valid = 1;
          is_write_dirty = 1;
          tag_write_enable = 1;
          tag_write_tobe_cache = tag_stored;
          data_write_enable = 1;
        end
      end

      else begin // Cache miss
        
        // block that should be replaced is clean. Just replace the block
        if (!is_current_storage_dirty) begin
          data_memory_is_read = 1;
          data_memory_input_is_valid = 1;
          data_memory_address = addr << clog2;
          next_stage = `READ_FROM_MEM;
        end
        
        // block that should be replaced is dirty. Write back to memory first
        else begin
          data_memory_is_write = 1;
          data_memory_input_is_valid = 1;
          data_memory_address = {tag_input, addr[`ADDRESS_WIDTH - `CACHE_TAG_WIDTH - 1 : 0]} << clog2;
          data_memory_data_input = data_stored;
          next_stage = `WRITE_TO_MEM;
        end
      end
    end

    // read data from memory and write to cache
    else if (current_stage == `READ_FROM_MEM) begin
      tag_write_enable = 1;
      is_write_valid = 1;
      tag_write_tobe_cache = tag_input;
      is_write_dirty = mem_rw;

      if (is_data_mem_ready) begin
        data_write_tobe_cache = data_memory_data_output;
        data_write_enable = 1;
        // data_memory_input_is_valid = 0;
        next_stage = `HIT_CHECK;
      end

      else begin
        next_stage = `READ_FROM_MEM;
      end
    end

    // write the dirty block back to memory
    else if (current_stage == `WRITE_TO_MEM) begin
      if (is_data_mem_ready) begin
          data_memory_input_is_valid = 1;
          data_memory_is_read = 1;
          //data_memory_is_write = 0;
          data_memory_address = addr  << clog2;
          next_stage = `READ_FROM_MEM;
      end
      
      else begin
        next_stage = `WRITE_TO_MEM;
      end
    end
  end

  // Instantiate data memory
  DataMemory #(.BLOCK_SIZE(LINE_SIZE)) data_mem(
    .reset(reset),
    .clk(clk),

    .is_input_valid(data_memory_input_is_valid),
    .addr(data_memory_address),        // NOTE: address must be shifted by CLOG2(LINE_SIZE)
    .mem_read(data_memory_is_read),
    .mem_write(data_memory_is_write),
    .din(data_memory_data_input),

    // is output from the data memory valid?
    .is_output_valid(data_memory_output_is_valid),
    .dout(data_memory_data_output),
    // is data memory ready to accept request?
    .mem_ready(is_data_mem_ready)
  );
endmodule
