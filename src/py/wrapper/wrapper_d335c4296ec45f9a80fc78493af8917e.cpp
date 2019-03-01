#include "_core.h"


void wrapper_d335c4296ec45f9a80fc78493af8917e(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::sample_size_error >(module, "SampleSizeError");

}