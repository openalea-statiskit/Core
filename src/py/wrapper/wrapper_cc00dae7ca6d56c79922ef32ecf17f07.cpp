#include "_core.h"

class ::statiskit::IntegerSampleSpace const & (*function_pointer_cc00dae7ca6d56c79922ef32ecf17f07)() = ::statiskit::get_ZZ;


void wrapper_cc00dae7ca6d56c79922ef32ecf17f07(pybind11::module& module)
{

    module.def("get_zz", function_pointer_cc00dae7ca6d56c79922ef32ecf17f07, pybind11::return_value_policy::copy, "");
}