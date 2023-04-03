#define MAX_SIM 5000
void set_random(Vtop *dut, vluint64_t sim_unit){
    dut -> data_en_i = (sim_unit < 50);
    dut -> input_text_i = 65+(int)(rand()*(69-65+1.0)/(1.0+RAND_MAX));
}
