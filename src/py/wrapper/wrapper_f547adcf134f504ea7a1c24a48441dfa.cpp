#include "_core.h"

class ::statiskit::RealSampleSpace const & (*function_pointer_f547adcf134f504ea7a1c24a48441dfa)() = ::statiskit::get_PR;


void wrapper_f547adcf134f504ea7a1c24a48441dfa(pybind11::module& module)
{

    module.def("get_pr", function_pointer_f547adcf134f504ea7a1c24a48441dfa, pybind11::return_value_policy::copy, "");
}