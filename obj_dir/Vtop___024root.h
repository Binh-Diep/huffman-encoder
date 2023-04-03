// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(data_en_i,0,0);
        VL_IN8(input_text_i,7,0);
        VL_OUT8(done_o,0,0);
        CData/*0:0*/ top__DOT__dut__DOT__tmp_done;
        CData/*0:0*/ top__DOT__dut__DOT__tmp_send;
        CData/*0:0*/ top__DOT__dut__DOT__tmp_text;
        CData/*3:0*/ top__DOT__dut__DOT__tmp_length_check;
        CData/*3:0*/ top__DOT__dut__DOT__tmp_count_check;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96ff575f__3;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__15;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96ff575f__2;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96ff575f__1;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__14;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__13;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__12;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96ff575f__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__11;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__10;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__9;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__8;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__7;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__6;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__5;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__4;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__3;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__2;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__1;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96fdabed__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__n;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__N;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__count;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__sort_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__sort_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__format_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__format_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__format_index;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__huffman_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__huffman_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__bintree_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__bintree_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__sortlist_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__sortlist_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__encode_leaf;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__huffcode_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__hufftext_i;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__hufftext_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__send_i;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT__send_k;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT__input_index;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT__current_state;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h2cc80c63__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h0bca19b8__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h51d6cd98__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_he62b2b63__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_he6179173__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_he6179173__1;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_hf3cb6b17__0;
        CData/*7:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h50dde3f6__0;
        CData/*3:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h36b4491b__0;
        CData/*1:0*/ top__DOT__dut__DOT__huffman_output__DOT__current_state;
        CData/*0:0*/ __Vclklast__TOP__clk_i;
        VL_OUT16(total_bit,10,0);
        SData/*15:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h96d12fa7__0;
    };
    struct {
        SData/*8:0*/ top__DOT__dut__DOT__huffman_input__DOT__pairlist_i;
        SData/*8:0*/ top__DOT__dut__DOT__huffman_input__DOT__pairlist_k;
        SData/*8:0*/ top__DOT__dut__DOT__huffman_input__DOT__encode_pair;
        SData/*15:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h1276a483__0;
        SData/*9:0*/ top__DOT__dut__DOT__huffman_output__DOT__i;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__22;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__21;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__20;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__19;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__18;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__17;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__16;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__15;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__14;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__13;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__12;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__11;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__10;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__9;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__8;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__7;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__6;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__5;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__4;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__3;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__2;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__1;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vxrand_h765c7e8e__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT__state;
        IData/*31:0*/ top__DOT__dut__DOT__huffman_input__DOT__unnamedblk1__DOT__i;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_hc043f5e0__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h4bcc1763__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_hdcf0e341__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_he01c59c8__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h38855cdc__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_hadb79630__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h6e31ceec__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_hf07f8643__0;
        IData/*22:0*/ top__DOT__dut__DOT__huffman_input__DOT____Vlvbound_h7cceea59__0;
        VlWide<32>/*1023:0*/ top__DOT__dut__DOT__huffman_output__DOT__text;
        VlUnpacked<CData/*7:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__text;
        VlUnpacked<CData/*7:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__hufftext;
        VlUnpacked<CData/*7:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__codeword;
        VlUnpacked<IData/*22:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__leaf_node;
        VlUnpacked<IData/*22:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__leaf_tmp;
        VlUnpacked<IData/*22:0*/, 508> top__DOT__dut__DOT__huffman_input__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__string_sort;
        VlUnpacked<CData/*7:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__prob_table;
        VlUnpacked<CData/*3:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__order_tree;
        VlUnpacked<CData/*3:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__length_text;
        VlUnpacked<SData/*15:0*/, 255> top__DOT__dut__DOT__huffman_input__DOT__huffman_code;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__dut__DOT__huffman_output__DOT__container;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
