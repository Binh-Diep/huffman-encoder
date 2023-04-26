/* verilator lint_off UNUSED */
module huffman#(parameter BIT_WIDTH  = 8,
                          MAX_CHAR   = 255,
                          MAX_SYM    = 255,
                          F          = 32640,
                          BIT_FREQ   = int'($clog2(MAX_CHAR)),
                          BIT_SYMBOL = int'($clog2(F)),
                          ELEMENT    = BIT_FREQ + BIT_SYMBOL)(
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
    logic tmp_done;
    logic tmp_send;
    logic tmp_text;
    logic tmp_st_cw;
    logic tmp_st_ln;
    logic tmp_ed_cw;
    logic tmp_ed_ln;
    logic tmp_flag_bit;
    logic tmp_st_bit;
    logic [3:0] tmp_length_check;
    logic [3:0] tmp_count_check;
    logic [10:0] tmp_total_bit;
    logic [int'($clog2(MAX_SYM))/2-1:0] tmp_data_ln;
    logic [BIT_WIDTH-1:0] tmp_num_n;
    logic [BIT_WIDTH-1:0] tmp_num_N;
    logic [2*BIT_WIDTH-1:0] tmp_data_cw;
    //code
    encoder huffman_encoder(
        .clk_i         (clk_i),
        .data_en_i     (data_en_i),
        .input_text_i  (input_text_i),
        .send_o        (tmp_send),
        .done_o        (tmp_done),
        .output_text_o (tmp_text),
        .length_check  (tmp_length_check),
        .count_check   (tmp_count_check),
        .st_cw_o       (tmp_st_cw),
        .st_ln_o       (tmp_st_ln),
        .data_ln_o     (tmp_data_ln),
        .num_n_o       (tmp_num_n),
        .num_N_o       (tmp_num_N),
        .data_cw_o     (tmp_data_cw)
    );
    store huffman_store(
        .clk_i         (clk_i),
        .receive_i     (tmp_send),
        .finish_i      (tmp_done),
        .text_i        (tmp_text),
        .flag_bit_i    (tmp_flag_bit),
        .length_check  (tmp_length_check),
        .count_check   (tmp_count_check),
        .st_bit_o      (tmp_st_bit),
        .done_o        (done_en_o),
        .total_bit_o   (tmp_total_bit)
    );
    decoder huffman_decoder(
        .clk_i         (clk_i),
        .st_cw_i       (tmp_st_cw),
        .st_ln_i       (tmp_st_ln),
        .data_ln_i     (tmp_data_ln),
        .num_n_i       (tmp_num_n),
        .num_N_i       (tmp_num_N),
        .total_bit_i   (tmp_total_bit),
        .data_cw_i     (tmp_data_cw),
        .st_bit_i      (tmp_st_bit),
        .done_o        (done_de_o),
        .char_o        (char_o),
        .flag_bit_o    (tmp_flag_bit)
    );
    assign total_bit_o = tmp_total_bit;
endmodule : huffman
