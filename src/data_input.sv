/* verilator lint_off UNUSED */
module data_input#(parameter BIT_WIDTH  = 8,
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
    output logic send_o,
    output logic done_o,
    output logic output_text_o,
    output logic [int'($clog2(MAX_SYM))/2-1:0] length_check,
    output logic [int'($clog2(MAX_SYM))/2-1:0] count_check
);
    //Variables
    logic [BIT_WIDTH-1:0] n;                          //number of distinct symbols
    logic [BIT_WIDTH-1:0] N;                          //number of character in text
    logic [BIT_WIDTH-1:0] count;                      
    logic [BIT_WIDTH-1:0] sort_i;                     //stage sort
    logic [BIT_WIDTH-1:0] sort_k;                     //stage sort
    logic [BIT_WIDTH-1:0] format_i;                   //stage format
    logic [BIT_WIDTH-1:0] format_k;                   //stage format
    logic [BIT_WIDTH-1:0] format_index;               //stage format
    logic [BIT_WIDTH-1:0] huffman_i;                  //stage huffman
    logic [BIT_WIDTH-1:0] huffman_k;                  //stage huffman
    logic [BIT_WIDTH-1:0] bintree_i;                  //stage binary tree
    logic [BIT_WIDTH-1:0] bintree_k;                  //stage binary tree
    logic [BIT_WIDTH:0]   pairlist_i;                 //stage pair list
    logic [BIT_WIDTH:0]   pairlist_k;                 //stage pair list
    logic [BIT_WIDTH-1:0] sortlist_i;                 //stage sort list
    logic [BIT_WIDTH-1:0] sortlist_k;                 //stage sort list
    logic [BIT_WIDTH-1:0] encode_leaf;                //stage encode
    logic [BIT_WIDTH:0]   encode_pair;                //stage encode
    logic [ELEMENT-1:0]   state;                      //stage encode
    logic [BIT_WIDTH-1:0] huffcode_i;                 //stage huffcode code
    logic [BIT_WIDTH-1:0] hufftext_i;                 //stage hufftext code
    logic [BIT_WIDTH-1:0] hufftext_k;                 //stage hufftext code
    logic [BIT_WIDTH-1:0] send_i;                     //stage send
    logic [BIT_WIDTH/2-1:0] send_k;                     //stage send
    logic [BIT_WIDTH-1:0] input_index;                //index in text
    logic [BIT_WIDTH-1:0] text      [MAX_CHAR];       //text contains characters from input
    logic [BIT_WIDTH-1:0] hufftext  [MAX_CHAR];       //text contains characters from encoder       
    logic [BIT_WIDTH-1:0] codeword  [MAX_SYM];        //text contains characters from input
    logic [ELEMENT-1:0]   leaf_node [MAX_SYM];        //leaf node
    logic [ELEMENT-1:0]   leaf_tmp  [MAX_SYM];
    logic [ELEMENT-1:0]   pair_list [2*MAX_SYM-2];
    logic [BIT_WIDTH-1:0] string_sort [MAX_CHAR];     //text contains characters after sorting
    logic [int'($clog2(MAX_SYM))-1:0] prob_table [MAX_SYM]; //table includes probability of symbols
    logic [int'($clog2(MAX_SYM))/2-1:0] order_tree [MAX_SYM]; //height of code
    logic [int'($clog2(MAX_SYM))/2-1:0] length_text [MAX_CHAR];
    logic [2*BIT_WIDTH-1:0] huffman_code [MAX_SYM];
    //List of state
    typedef enum logic [3:0]{
        INIT       = 4'd0,
        GET_DATA   = 4'd1,
        LOAD       = 4'd2,
        SORT       = 4'd3,
        FORMAT     = 4'd4,
        LEAF_NODE  = 4'd5,
        BIN_TREE   = 4'd6,
        PAIR_LIST  = 4'd7,
        SORT_LIST  = 4'd8,
        PRE_ENCODE = 4'd9,
        ENCODE     = 4'd10,
        HUFFCODE   = 4'd11,
        HUFFTEXT   = 4'd12,
        SEND       = 4'd13
    } state_e;
    state_e current_state;
    //code
    always_ff @(posedge clk_i) begin
        case (current_state)
            INIT: begin
                N             <= 0;
                input_index   <= 0;
                current_state <= GET_DATA;
            end
            GET_DATA: begin
                if (data_en_i) begin
                    text[input_index] <= input_text_i;
                    input_index       <= input_index + 1;
                end
                else begin
                    N             <= input_index;
                    current_state <= LOAD;
                end
            end
            LOAD: begin
                string_sort   <= text;
                current_state <= SORT;
            end
            SORT: begin
                if (sort_i < N) begin
	                if (sort_k < (N - sort_i - 1)) begin
		                if (string_sort[sort_k] > string_sort[sort_k + 1]) begin
			                string_sort[sort_k]     <= string_sort[sort_k + 1];
			                string_sort[sort_k + 1] <= string_sort[sort_k]; 
			                sort_k                  <= (sort_k + 1);
		                end
		                else begin
		                    sort_k <= (sort_k + 1);
		                end
	                end
	                else begin
	                    sort_k <= 0;
	                    sort_i <= (sort_i + 1);
	                end
                end
                else begin
                    n             <= 0;
                    format_i      <= 1;
                    format_k      <= 1;
                    format_index  <= 0; 
                    current_state <= FORMAT;
                end
            end 
            FORMAT: begin
                if (format_i <= N) begin
                    if (string_sort[format_i] == string_sort[format_i-1]) begin
                        format_k <= format_k + 1;
                    end
                    else begin
                        n                        <= n + 1;
                        format_k                 <= 1;
                        format_index             <= format_index + 1;
                        prob_table[format_index] <= format_k;
                    end
                    format_i <= format_i + 1;
                end
                else begin
                    current_state <= LEAF_NODE;
                end
            end
            LEAF_NODE: begin //format: freq_00..00_ASCII
                if (huffman_i < n) begin
                    leaf_node[huffman_i] <= {prob_table[huffman_i],7'b0,string_sort[huffman_k+prob_table[huffman_i]-1]};
                    huffman_i            <= huffman_i + 1;
                    huffman_k            <= huffman_k+prob_table[huffman_i]; 
                end
                else begin
                    current_state <= BIN_TREE;
                end
            end
            BIN_TREE: begin
                if (bintree_i < n) begin
	                if (bintree_k < (n - bintree_i - 1)) begin
		                if (leaf_node[bintree_k] > leaf_node[bintree_k + 1]) begin
			                leaf_node[bintree_k]     <= leaf_node[bintree_k + 1];
			                leaf_node[bintree_k + 1] <= leaf_node[bintree_k]; 
			                bintree_k                <= (bintree_k + 1);
		                end
		                else begin
		                    bintree_k <= (bintree_k + 1);
		                end
	                end
	                else begin
	                    bintree_k <= 0;
	                    bintree_i <= (bintree_i + 1);
	                end
                end
                else begin
                    leaf_tmp      <= leaf_node;
                    current_state <= PAIR_LIST;
                end
            end
            PAIR_LIST: begin
                if (pairlist_k <= (n-2)) begin
                    leaf_tmp[pairlist_k[BIT_WIDTH-1:0]]    <= leaf_tmp[pairlist_k[BIT_WIDTH-1:0]] + leaf_tmp[pairlist_k[BIT_WIDTH-1:0]+1];
                    pair_list[pairlist_i]   <= leaf_tmp[pairlist_k[BIT_WIDTH-1:0]];
                    pair_list[pairlist_i+1] <= leaf_tmp[pairlist_k[BIT_WIDTH-1:0]+1];
                    leaf_tmp[pairlist_k[BIT_WIDTH-1:0]+1]  <= 0;
                    pairlist_k              <= pairlist_k + 1;
                    pairlist_i              <= pairlist_i + 2;
                    sortlist_i              <= 0;
                    sortlist_k              <= 0;
                    current_state           <= SORT_LIST;
                end
                else begin
                    current_state <= PRE_ENCODE;
                end
            end
            SORT_LIST: begin
                if (sortlist_i < n) begin
	                if (sortlist_k < (n - sortlist_i - 1)) begin
		                if (leaf_tmp[sortlist_k] > leaf_tmp[sortlist_k + 1]) begin
			                leaf_tmp[sortlist_k]     <= leaf_tmp[sortlist_k + 1];
			                leaf_tmp[sortlist_k + 1] <= leaf_tmp[sortlist_k]; 
			                sortlist_k               <= (sortlist_k + 1);
		                end
		                else begin
		                    sortlist_k <= (sortlist_k + 1);
		                end
	                end
	                else begin
	                    sortlist_k <= 0;
	                    sortlist_i <= (sortlist_i + 1);
	                end
                end
                else begin
                    current_state <= PAIR_LIST;
                end
            end
            PRE_ENCODE: begin
                state         <= leaf_node[encode_leaf];
                current_state <= ENCODE;
            end
            ENCODE: begin
                if (encode_leaf < n) begin
                    if (state == (pair_list[(n-1)*2-1] + pair_list[(n-1)*2-2])) begin
                        encode_leaf   <= encode_leaf + 1;
                        current_state <= PRE_ENCODE;
                    end
                    else begin
                        if (state == pair_list[encode_pair]) begin
                            if (encode_pair % 2 == 0) begin
                                codeword[encode_leaf]   <= (codeword[encode_leaf] >> 1) | 8'h00;
                                state                   <= pair_list[encode_pair] + pair_list[encode_pair + 1];
                            end
                            else begin
                                codeword[encode_leaf]   <= (codeword[encode_leaf] >> 1) | 8'h80;
                                state                   <= pair_list[encode_pair] + pair_list[encode_pair - 1];
                            end
                            encode_pair             <= 0;
                            order_tree[encode_leaf] <= order_tree[encode_leaf] + 1;
                        end
                        else begin
                            encode_pair <= encode_pair + 1;
                        end
                    end
                end
                else begin
                    current_state <= HUFFCODE;
                end
            end
            HUFFCODE: begin
                if (huffcode_i < n) begin
                    huffman_code[huffcode_i] <= {codeword[huffcode_i],leaf_node[huffcode_i][BIT_WIDTH-1:0]};
                    huffcode_i               <= huffcode_i + 1; 
                end
                else begin
                    current_state <= HUFFTEXT;
                end
            end
            HUFFTEXT: begin
                if (hufftext_i < N) begin
                    if (text[hufftext_i] == huffman_code[hufftext_k][BIT_WIDTH-1:0]) begin
                        hufftext[hufftext_i]    <= codeword[hufftext_k];
                        length_text[hufftext_i] <= order_tree[hufftext_k];
                        hufftext_i              <= hufftext_i + 1;
                        hufftext_k              <= 0;
                    end
                    else begin
                        hufftext_k <= hufftext_k + 1;
                    end
                end
                else begin
                    current_state <= SEND;
                end
            end
            SEND: begin //i count in cell, k count in length bits/cell
                send_o <= 1'b1;
                if (send_i < N) begin
                    if ((send_k < length_text[send_i])) begin
                        output_text_o <= hufftext[send_i][BIT_WIDTH-1-send_k];
                        send_k <= send_k + 1;
                    end
                    else begin
                        send_k <= 0;
                        send_i <= send_i + 1;
                    end
                    length_check <= length_text[send_i];
                    count_check  <= send_k;
                end
                else done_o <= 1'b1;
            end
            default: begin
                done_o        <= 0;
                output_text_o <= 0;
            end
        endcase
    end
    always_comb begin
        $display("-----------TEXT UNENCODE-----------");
        for (int i=0;i<N;i++) begin
            $display("FREQ[%d]: %d_%b",i,leaf_node[i][ELEMENT-1:ELEMENT-1-7],leaf_node[i][ELEMENT-9:0]);
        end        
        /*for (int i=0;i<N;i++) begin
            $display("TEXT[%d]: %s",i,text[i]);
        end
        $display("-----------TABLE CODE-----------");
        for (int i=0;i<n;i++) begin
            $display("CODE[%d]: %b_%s",i,huffman_code[i][2*BIT_WIDTH-1:BIT_WIDTH],huffman_code[i][BIT_WIDTH-1:0]);
        end
        $display("-----------TEXT ENCODED-----------");
        for (int i=0;i<N;i++) begin
            $display("TEXT[%d]: %b",i,hufftext[i]);
        end
        $display("------------LENGTH CHAR------------");
        for (int i=0;i<N;i++) begin
            $display("LENGTH[%d]: %d",i,length_text[i]);
        end*/
    end
endmodule : data_input
