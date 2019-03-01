#include "_core.h"

double const & (::statiskit::RealSampleSpace::*method_pointer_e45aa72c802953dbb36e6b5455b1259f)()const= &::statiskit::RealSampleSpace::get_lower_bound;
double const & (::statiskit::RealSampleSpace::*method_pointer_e4cbbd25259f5cc096668eb93a2c4623)()const= &::statiskit::RealSampleSpace::get_upper_bound;
bool const & (::statiskit::RealSampleSpace::*method_pointer_1b3382c01d7b5a75a6be397193c75a26)()const= &::statiskit::RealSampleSpace::get_left_closed;
bool const & (::statiskit::RealSampleSpace::*method_pointer_2059defeec565154b2e04dcf45efe891)()const= &::statiskit::RealSampleSpace::get_right_closed;

namespace autowig {
}

void wrapper_49ca84779c315483b61bc3fa2c2221b3(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::RealSampleSpace, autowig::HolderType< class ::statiskit::RealSampleSpace >::Type, struct ::statiskit::ContinuousSampleSpace > class_49ca84779c315483b61bc3fa2c2221b3(module, "RealSampleSpace", "");
    class_49ca84779c315483b61bc3fa2c2221b3.def(pybind11::init< double const &, double const &, bool const &, bool const & >());
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_lower_bound", method_pointer_e45aa72c802953dbb36e6b5455b1259f, pybind11::return_value_policy::copy, "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_upper_bound", method_pointer_e4cbbd25259f5cc096668eb93a2c4623, pybind11::return_value_policy::copy, "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_left_closed", method_pointer_1b3382c01d7b5a75a6be397193c75a26, pybind11::return_value_policy::copy, "");
    class_49ca84779c315483b61bc3fa2c2221b3.def("get_right_closed", method_pointer_2059defeec565154b2e04dcf45efe891, pybind11::return_value_policy::copy, "");

}