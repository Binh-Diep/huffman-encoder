/* verilator lint_off UNUSED */
module top#(parameter BIT_WIDTH = 8,
                          MAX_SYM   = 255)(
    //inputs
    input logic clk_i,
    input logic data_en_i,
    input logic [BIT_WIDTH-1:0] input_text_i,
    //outputs
    output logic done_de_o,
    output logic done_en_o,
    output logic [7:0] char_o,
    output logic [10:0] total_bit_o
);
    //code
    huffman dut(
        .clk_i        (clk_i),
        .data_en_i    (data_en_i),
        .input_text_i (input_text_i),
        .done_de_o    (done_de_o),
        .done_en_o    (done_en_o),
        .char_o       (char_o),
        .total_bit_o  (total_bit_o)
    );
endmodule : top
