#include "_core.h"


void wrapper_ca4f80534b7b5884bffbbf5ba13d2f49(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::size_error >(module, "SizeError");

}