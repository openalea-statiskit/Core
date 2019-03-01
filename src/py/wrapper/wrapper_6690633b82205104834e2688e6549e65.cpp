#include "_core.h"

void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_846983cd69f05156a63294108734944e)(double const &)= &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::weight;

namespace autowig {
}

void wrapper_6690633b82205104834e2688e6549e65(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator, autowig::HolderType< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::Type, struct ::statiskit::UnivariateData::Generator > class_6690633b82205104834e2688e6549e65(module, "Generator", "");
    class_6690633b82205104834e2688e6549e65.def(pybind11::init< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > * >());
    class_6690633b82205104834e2688e6549e65.def("weight", method_pointer_846983cd69f05156a63294108734944e, "");

}