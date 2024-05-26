`define PC_WIDTH 32
`define TAG_WIDTH 25
`define BTB_INDEX_WIDTH 5  // As the TA said.
// pc : [31:7] [6:2] [1:0]
//       tag  index  offset <- offset doesn't change since pc is always incremented by 4

`define ADDRESS_WIDTH 32
`define DATA_WIDTH 32
`define CACHE_NUM_SETS 16
`define CACHE_NUM_WAYS 1
`define CACHE_TAG_WIDTH 24
`define CACHE_INDEX_WIDTH 4
`define CACHE_OFFSET_WIDTH 2
`define BLOCK_SIZE 16

// Address : [31:7] [6:2] [1:0]
//            tag  index  offset

`define CACHE_NUM_SETS 16
`define CACHE_NUM_WAYS 1

