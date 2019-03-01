#include "_core.h"

class ::statiskit::IntegerSampleSpace const & (*function_pointer_cfd7d1ec1fbc514b9feba31d16e55cf6)() = ::statiskit::get_NN;


void wrapper_cfd7d1ec1fbc514b9feba31d16e55cf6(pybind11::module& module)
{

    module.def("get_nn", function_pointer_cfd7d1ec1fbc514b9feba31d16e55cf6, pybind11::return_value_policy::copy, "");
}