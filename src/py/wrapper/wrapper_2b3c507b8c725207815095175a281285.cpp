#include "_core.h"


void wrapper_2b3c507b8c725207815095175a281285(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::in_set_error >(module, "InSetError");

}