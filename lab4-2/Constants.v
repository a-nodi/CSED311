`define INSTRUCTION_WIDTH 32
`define TAG_WIDTH 25
`define BTB_INDEX_WIDTH 5  // As the TA said.

// pc : [31:7] [6:2] [1:0]
//       tag  index  offset <- offset doesn't change since pc is always incremented by 4