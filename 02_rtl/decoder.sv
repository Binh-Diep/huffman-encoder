/* verilator lint_off UNUSED */
module decoder#(parameter BIT_WIDTH  = 8,
                          MAX_CHAR   = 255,
                          MAX_SYM    = 255,
                          F          = 32640,
                          BIT_FREQ   = int'($clog2(MAX_CHAR)),
                          BIT_SYMBOL = int'($clog2(F)),
                          ELEMENT    = BIT_FREQ + BIT_SYMBOL)(
    //inputs
    input logic clk_i,
    input logic st_cw_i,
    input logic st_ln_i,
    input logic st_bit_i,
    input logic [int'($clog2(MAX_SYM))/2-1:0] data_ln_i,
    input logic [BIT_WIDTH-1:0] num_n_i,
    input logic [BIT_WIDTH-1:0] num_N_i,
    input logic [2*BIT_WIDTH-1:0] data_cw_i,
    input logic [10:0] total_bit_i,
    //outputs
    output logic done_o,
    output logic flag_bit_o,
    output logic [BIT_WIDTH-1:0] char_o
);
    //B1: Chuyển huffman codeword và pairlist từ khối encoder sang khối decoder
    //B2: Lấy từng bit từ RAM của khối store để xử lý tiếp B3
    //B3: Nếu bit 0 là phần tử áp cuối trong pairlist, nếu bit 1 là phần tử cuối trong pairlist (bit đầu tiên của ký tự)
    //B4: Xét trong pairlist, tìm cặp phần tử có tổng bằng phần tử hiện tại đang xét
    //B5: Dựa vào vị trí chẵn hoặc lẻ để xác định bit 0 hay bit 1
    //B6: Thực hiện vòng lặp B4 và B5 đến khi xét đến phần tử leaf node
    //B7: So sánh chuỗi bit trong thanh ghi tạm (8bit) với huffman codeword để tìm mã ASCII của ký tự
    //B8: Lưu ký tự vừa tìm được vào trong bộ nhớ tạm
    //B9: Mỗi chu kỳ load mỗi ô nhớ của bộ nhớ tạm ra ngoài (mỗi ký tự)
    logic data_bit;
    logic signed [10:0] total_bit;
    logic [BIT_WIDTH-1:0] tmp_value;
    logic [BIT_WIDTH-1:0] count_length;
    logic [BIT_WIDTH-1:0] count_bit;
    logic [BIT_WIDTH-1:0] count_code;
    logic [BIT_WIDTH-1:0] count_mem;
    logic [BIT_WIDTH-1:0] count_send;
    logic [BIT_WIDTH-1:0] count_LN;
    logic [BIT_WIDTH-1:0] n;
    logic [BIT_WIDTH-1:0] N;
    logic [BIT_WIDTH-1:0] count_CD;
    //logic [BIT_WIDTH-1:0] reg_codeword;//
    logic [int'($clog2(MAX_SYM))/2-1:0] length_text [MAX_CHAR];
    logic [2*BIT_WIDTH-1:0] huffman_code [MAX_SYM];
    logic [BIT_WIDTH-1:0] char_memory [MAX_SYM]; 
    typedef enum logic [3:0] {
        INIT     = 4'd0,
        WAIT     = 4'd1,
        CD_TRANS = 4'd2,
        LN_TRANS = 4'd3,
        PRE_DEC  = 4'd4,
        LOAD     = 4'd5,
        DEC_S1   = 4'd6,
        DEC_S2   = 4'd7,
        ERROR    = 4'd8,
        SEND     = 4'd9
    } state_e;
    state_e current_state;
    assign data_bit = st_bit_i;
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                done_o <= 0;
                char_o <= 0;
                count_mem <= 0;
                current_state <= WAIT;
            end
            WAIT: begin
                if (st_cw_i) begin
                    n <= num_n_i;
                    N <= num_N_i;
                    total_bit <= total_bit_i;
                    count_CD <= 0;
                    current_state <= CD_TRANS;
                end
                else begin
                    current_state <= WAIT;
                end
            end
            CD_TRANS: begin
                if (count_CD < n) begin
                    count_CD               <= count_CD + 1;
                    huffman_code[count_CD] <= data_cw_i;
                end
                else begin
                    current_state <= LN_TRANS;
                end
            end
            LN_TRANS: begin
                if (st_ln_i) begin
                    if (count_LN < N) begin
                        count_LN            <= count_LN + 1;
                        length_text[count_LN] <= data_ln_i;
                    end
                    else begin
                        flag_bit_o <= 1;
                        current_state <= PRE_DEC;
                    end
                end
                else begin
                    current_state <= DEC_S1;
                end
            end
            PRE_DEC: begin
                count_length <= 1;
                tmp_value <= 0;
                current_state <= DEC_S1;
            end
            LOAD: begin
                flag_bit_o <= 1;
                current_state <= DEC_S1;
            end
            DEC_S1: begin
                if (total_bit >= 0) begin
                    if (count_length <= {4'h0,length_text[count_bit]}) begin
                        tmp_value <= ((tmp_value << 1) | {7'h0,data_bit});
                        count_length <= count_length + 1;
                        total_bit <= total_bit - 1;
                        current_state <= DEC_S1;
                        if (count_length == {4'h0,length_text[count_bit]}) begin
                            flag_bit_o <= 0;
                        end
                        else begin
                            flag_bit_o <= 1;
                        end
                    end
                    else begin
                        count_code <= 0;
                        tmp_value <= (tmp_value << (9 - count_length));
                        current_state <= DEC_S2;
                    end
                end
                else begin
                    count_send <= 0;
                    current_state <= SEND;
                end
            end
            DEC_S2: begin
                if (count_code < n) begin
                    if (tmp_value == huffman_code[count_code][2*BIT_WIDTH-1:BIT_WIDTH]) begin
                        count_bit <= count_bit + 1;
                        count_mem <= count_mem + 1;
                        char_memory[count_mem] <= huffman_code[count_code][BIT_WIDTH-1:0]; //send character output
                        current_state <= LOAD;
                        count_length <= 1;
                        tmp_value <= 0;
                    end 
                    else begin
                        count_code <= count_code + 1;
                        current_state <= DEC_S2;
                    end
                end
                else begin
                    current_state <= ERROR; //decoder error
                end
            end
            SEND: begin
                if (count_send < N) begin
                    char_o <= char_memory[count_send];
                    count_send <= count_send + 1;
                end
                else begin
                    done_o <= 1;
                    char_o <= 0;
                end
            end
            ERROR: begin
                done_o <= 0;
                char_o <= 8'hFF;
            end
            default: begin
                done_o <= 0;
                char_o <= 0;
            end
        endcase
    end
endmodule : decoder
