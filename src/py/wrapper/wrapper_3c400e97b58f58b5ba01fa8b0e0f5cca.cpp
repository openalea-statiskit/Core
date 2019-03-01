#include "_core.h"

class ::statiskit::RealSampleSpace const & (*function_pointer_3c400e97b58f58b5ba01fa8b0e0f5cca)() = ::statiskit::get_NR;


void wrapper_3c400e97b58f58b5ba01fa8b0e0f5cca(pybind11::module& module)
{

    module.def("get_nr", function_pointer_3c400e97b58f58b5ba01fa8b0e0f5cca, pybind11::return_value_policy::copy, "");
}