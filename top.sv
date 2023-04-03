/* verilator lint_off UNUSED */
module top#(parameter BIT_WIDTH = 8,
                          MAX_SYM   = 255)(
    //inputs
    input logic clk_i,
    input logic data_en_i,
    input logic [BIT_WIDTH-1:0] input_text_i,
    //outputs
    output logic done_o,
    output logic [10:0] total_bit
);
    //code
    huffman dut(
        .clk_i        (clk_i),
        .data_en_i    (data_en_i),
        .input_text_i (input_text_i),
        .done_o       (done_o),
        .total_bit    (total_bit)
    );
endmodule : top
