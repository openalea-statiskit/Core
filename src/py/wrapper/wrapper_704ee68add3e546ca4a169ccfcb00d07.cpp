#include "_core.h"


void wrapper_704ee68add3e546ca4a169ccfcb00d07(pybind11::module& module)
{


    pybind11::register_exception< struct ::statiskit::qualitative_sample_space_error >(module, "QualitativeSampleSpaceError");

}