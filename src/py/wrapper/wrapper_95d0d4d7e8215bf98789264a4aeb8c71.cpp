#include "_core.h"

void  (*function_pointer_95d0d4d7e8215bf98789264a4aeb8c71)() = ::statiskit::set_seed;


void wrapper_95d0d4d7e8215bf98789264a4aeb8c71(pybind11::module& module)
{

    module.def("set_seed", function_pointer_95d0d4d7e8215bf98789264a4aeb8c71, "");
}