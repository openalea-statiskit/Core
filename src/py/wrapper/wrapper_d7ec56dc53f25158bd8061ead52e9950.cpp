#include "_core.h"


void wrapper_d7ec56dc53f25158bd8061ead52e9950(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::sample_space_error >(module, "SampleSpaceError");

}