#include <systemc.h>

SC_MODULE(XorGate) {
    sc_in<bool> a, b;
    sc_out<bool> y;

    void do_xor() {
        y.write(a.read() != b.read()); // Si son diferentes, da 1
    }

    SC_CTOR(XorGate) {
        SC_METHOD(do_xor);
        sensitive << a << b;
    }
};
