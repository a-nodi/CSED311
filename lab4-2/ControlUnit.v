`include "opcodes.v"

module ControlUnit (
    part_of_inst,
    mem_read,
    mem_to_reg,
    mem_write,
    alu_src,
    write_enable,
    pc_to_reg,
    is_ecall
);

    input [6:0] part_of_inst;
    output reg mem_read;
    output reg mem_to_reg;
    output reg mem_write;
    output reg alu_src;
    output reg write_enable;
    output reg pc_to_reg;
    output reg is_ecall;

    always @(*) begin
      // initialization
      is_jal = 0;
      is_jalr = 0;
      branch = 0;
      mem_read = 0;
      mem_to_reg = 0;
      mem_write = 0;
      alu_src = 0;
      write_enable = 0;
      pc_to_reg = 0;
      is_ecall = 0;

      case (part_of_inst)
        `ARITHMETIC: begin // R-type ALU
            write_enable = 1;
        end
        `ARITHMETIC_IMM: begin // I-type ALU
            alu_src = 1;
            write_enable = 1;
        end
        `LOAD: begin // I-type LD
            mem_read = 1;
            mem_to_reg = 1;
            alu_src = 1;
            write_enable = 1;
        end
        `STORE: begin // S-type SD
            mem_write = 1;
            alu_src = 1;
        end

        
        `BRANCH: begin // B-type
            branch = 1;
        end
        `JAL: begin // J-type
            is_jal = 1;
            write_enable = 1;
            pc_to_reg = 1;
        end
        `JALR: begin // I-type (for JALR instruction)
            is_jalr = 1;
            write_enable = 1;
            pc_to_reg = 1;
            alu_src = 1;
        end
        
        `ECALL: begin // System Call
            is_ecall = 1;
        end
        default: begin
        end
      endcase
    end    
endmodule
