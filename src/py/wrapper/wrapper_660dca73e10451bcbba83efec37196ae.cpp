#include "_core.h"


void wrapper_660dca73e10451bcbba83efec37196ae(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::upper_bound_error >(module, "UpperBoundError");

}