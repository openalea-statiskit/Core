#include "_core.h"


void wrapper_f722c8cfa79750d98e46db79b3b1130d(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::not_implemented_error >(module, "NotImplementedError");

}