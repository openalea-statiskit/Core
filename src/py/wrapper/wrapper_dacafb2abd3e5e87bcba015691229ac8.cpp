#include "_core.h"

class ::statiskit::RealSampleSpace const & (*function_pointer_dacafb2abd3e5e87bcba015691229ac8)() = ::statiskit::get_RR;


void wrapper_dacafb2abd3e5e87bcba015691229ac8(pybind11::module& module)
{

    module.def("get_rr", function_pointer_dacafb2abd3e5e87bcba015691229ac8, pybind11::return_value_policy::copy, "");
}