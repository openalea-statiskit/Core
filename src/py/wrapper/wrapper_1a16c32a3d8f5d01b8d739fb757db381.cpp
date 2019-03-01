#include "_core.h"

void  (*function_pointer_1a16c32a3d8f5d01b8d739fb757db381)(::statiskit::Index const &) = ::statiskit::set_seed;


void wrapper_1a16c32a3d8f5d01b8d739fb757db381(pybind11::module& module)
{

    module.def("set_seed", function_pointer_1a16c32a3d8f5d01b8d739fb757db381, "");
}