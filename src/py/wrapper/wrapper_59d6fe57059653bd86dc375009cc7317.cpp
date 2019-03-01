#include "_core.h"

int const & (::statiskit::IntegerSampleSpace::*method_pointer_1b29bc091ed15718a0e14eb444619634)()const= &::statiskit::IntegerSampleSpace::get_lower_bound;
int const & (::statiskit::IntegerSampleSpace::*method_pointer_be2e248f8fea5c788ef6147a2ab2f528)()const= &::statiskit::IntegerSampleSpace::get_upper_bound;

namespace autowig {
}

void wrapper_59d6fe57059653bd86dc375009cc7317(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::IntegerSampleSpace, autowig::HolderType< class ::statiskit::IntegerSampleSpace >::Type, struct ::statiskit::DiscreteSampleSpace > class_59d6fe57059653bd86dc375009cc7317(module, "IntegerSampleSpace", "");
    class_59d6fe57059653bd86dc375009cc7317.def(pybind11::init< int const &, int const & >());
    class_59d6fe57059653bd86dc375009cc7317.def("get_lower_bound", method_pointer_1b29bc091ed15718a0e14eb444619634, pybind11::return_value_policy::copy, "");
    class_59d6fe57059653bd86dc375009cc7317.def("get_upper_bound", method_pointer_be2e248f8fea5c788ef6147a2ab2f528, pybind11::return_value_policy::copy, "");

}