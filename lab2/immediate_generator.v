module immediate_generator(
    input [11:0] part_of_inst, // instruction의 20~31비트
    output [31:0] imm_gen_out  // sign-extended 32-bit immediate value
);

    //input의 MSB, 즉 part_of_inst[11]를 활용하여 sign-extension
    assign imm_gen_out = {{20{part_of_inst[11]}}, part_of_inst};

endmodule
