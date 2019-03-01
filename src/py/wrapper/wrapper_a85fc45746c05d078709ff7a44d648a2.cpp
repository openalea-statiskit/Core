#include "_core.h"


void wrapper_a85fc45746c05d078709ff7a44d648a2(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::interval_error >(module, "IntervalError");

}