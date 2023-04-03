/* verilator lint_off UNUSED */
module data_output#(parameter MAX_SYM   = 255,
                              BIT_WIDTH = 8,
                              SIZE      = 32,
                              MAX_TEXT  = 1024,
                              TEXT_WIDTH= 32)(
    //inputs
    input logic clk_i,
    input logic receive_i,
    input logic finish_i,
    input logic text_i,
    input logic [int'($clog2(MAX_SYM))/2-1:0] length_check,
    input logic [int'($clog2(MAX_SYM))/2-1:0] count_check,
    //outputs
    output logic done_o,
    output logic [10:0] total_bit
);
    logic [9:0] i;
    logic [MAX_TEXT-1:0] text;
    logic [TEXT_WIDTH-1:0] container [SIZE];
    typedef enum logic [1:0]{
        RECEIVE   = 2'd0,
        CONT      = 2'd1,
        DONE      = 2'd2
    } state_e;
    state_e current_state;
    //code
    always_ff @(posedge clk_i) begin
        case (current_state)
            RECEIVE: begin
                if (receive_i) begin
                    if (!finish_i) begin
                        if (length_check != count_check) begin
                            text[MAX_TEXT-1-i] <= text_i;
                            i <= i + 1;
                            total_bit <= total_bit + 1;
                        end
                        else begin
                            current_state <= RECEIVE;
                        end
                    end
                    else current_state <= CONT;
                end
                else current_state <= RECEIVE;
            end
            CONT: begin
                if (finish_i) begin
                    container[0]  <= text[1023:992];
                    container[1]  <= text[991:960];
                    container[2]  <= text[959:928];
                    container[3]  <= text[927:896];
                    container[4]  <= text[895:864];
                    container[5]  <= text[863:832];
                    container[6]  <= text[831:800];
                    container[7]  <= text[799:768];
                    container[8]  <= text[767:736];
                    container[9]  <= text[735:704];
                    container[10] <= text[703:672];
                    container[11] <= text[671:640]; 
                    container[12] <= text[639:608];
                    container[13] <= text[607:576];
                    container[14] <= text[575:544];
                    container[15] <= text[543:512];
                    container[16] <= text[511:480];
                    container[17] <= text[479:448];
                    container[18] <= text[447:416];
                    container[19] <= text[415:384];
                    container[20] <= text[383:352];
                    container[21] <= text[351:320];
                    container[22] <= text[319:288];
                    container[23] <= text[287:256];
                    container[24] <= text[255:224];
                    container[25] <= text[223:192];
                    container[26] <= text[191:160];
                    container[27] <= text[159:128];
                    container[28] <= text[127:96];
                    container[29] <= text[95:64];
                    container[30] <= text[63:32];
                    container[31] <= text[31:0];   
                    current_state  <= DONE;                
                end
                else current_state <= CONT;
            end
            DONE: begin
                done_o <= 1'b1;
            end 
            default: done_o <= 1'b0;
        endcase
    end
endmodule : data_output
