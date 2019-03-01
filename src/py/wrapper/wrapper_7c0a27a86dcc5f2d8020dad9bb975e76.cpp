#include "_core.h"


void wrapper_7c0a27a86dcc5f2d8020dad9bb975e76(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::duplicated_value_error >(module, "DuplicatedValueError");

}