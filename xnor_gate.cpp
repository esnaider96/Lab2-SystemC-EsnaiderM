#include <systemc.h>

SC_MODULE(XnorGate) {
    sc_in<bool> a, b;
    sc_out<bool> y;

    void do_xnor() {
        y.write(a.read() == b.read()); // Igualdad
    }

    SC_CTOR(XnorGate) {
        SC_METHOD(do_xnor);
        sensitive << a << b;
    }
};
