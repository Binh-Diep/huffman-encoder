/* verilator lint_off UNUSED */
module huffman#(parameter BIT_WIDTH = 8,
                          MAX_SYM   = 255)(
    //inputs
    input logic clk_i,
    input logic data_en_i,
    input logic [BIT_WIDTH-1:0] input_text_i,
    //outputs
    output logic done_o,
    output logic [10:0] total_bit
);
    logic tmp_done;
    logic tmp_send;
    logic tmp_text;
    logic [3:0] tmp_length_check;
    logic [3:0] tmp_count_check;
    //code
    data_input huffman_input(
        .clk_i         (clk_i),
        .data_en_i     (data_en_i),
        .input_text_i  (input_text_i),
        .send_o        (tmp_send),
        .done_o        (tmp_done),
        .output_text_o (tmp_text),
        .length_check  (tmp_length_check),
        .count_check   (tmp_count_check)
    );
    data_output huffman_output(
        .clk_i         (clk_i),
        .receive_i     (tmp_send),
        .finish_i      (tmp_done),
        .text_i        (tmp_text),
        .length_check  (tmp_length_check),
        .count_check   (tmp_count_check),
        .done_o        (done_o),
        .total_bit     (total_bit)
    );
endmodule : huffman
