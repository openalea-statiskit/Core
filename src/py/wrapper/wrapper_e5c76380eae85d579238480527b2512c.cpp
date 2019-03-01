#include "_core.h"


void wrapper_e5c76380eae85d579238480527b2512c(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::lower_bound_error >(module, "LowerBoundError");

}