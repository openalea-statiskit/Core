#include "_core.h"

void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_29ca89a65c145b51b49d5ff023beda12)(double const &)= &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::weight;

namespace autowig {
}

void wrapper_8a816909345b5bf2911f863db5b8cb0b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::Type, struct ::statiskit::MultivariateData::Generator > class_8a816909345b5bf2911f863db5b8cb0b(module, "Generator", "");
    class_8a816909345b5bf2911f863db5b8cb0b.def(pybind11::init< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > * >());
    class_8a816909345b5bf2911f863db5b8cb0b.def("weight", method_pointer_29ca89a65c145b51b49d5ff023beda12, "");

}