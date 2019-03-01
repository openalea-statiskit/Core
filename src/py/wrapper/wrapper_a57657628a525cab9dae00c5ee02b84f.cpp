#include "_core.h"

bool  (::statiskit::MultivariateConditionalData::Generator::*method_pointer_feb4c26516435a63991d075a27fb96cf)()const= &::statiskit::MultivariateConditionalData::Generator::is_valid;
class ::statiskit::MultivariateConditionalData::Generator & (::statiskit::MultivariateConditionalData::Generator::*method_pointer_92875bd7c0ec5ed89cd4c6ca1666a534)()= &::statiskit::MultivariateConditionalData::Generator::operator++;
struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateConditionalData::Generator::*method_pointer_c7db9fd42b285f79a4622b30a0e83582)()const= &::statiskit::MultivariateConditionalData::Generator::responses;
struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateConditionalData::Generator::*method_pointer_4d6d3c9222cd5f86a75dbe46871fd2b9)()const= &::statiskit::MultivariateConditionalData::Generator::explanatories;
double  (::statiskit::MultivariateConditionalData::Generator::*method_pointer_117534bbe883512e8d4496727e8fb49d)()const= &::statiskit::MultivariateConditionalData::Generator::weight;

namespace autowig {
    void method_decorator_92875bd7c0ec5ed89cd4c6ca1666a534(class ::statiskit::MultivariateConditionalData::Generator & instance, const class ::statiskit::MultivariateConditionalData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_a57657628a525cab9dae00c5ee02b84f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateConditionalData::Generator, autowig::HolderType< class ::statiskit::MultivariateConditionalData::Generator >::Type > class_a57657628a525cab9dae00c5ee02b84f(module, "Generator", "");
    class_a57657628a525cab9dae00c5ee02b84f.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_a57657628a525cab9dae00c5ee02b84f.def("is_valid", method_pointer_feb4c26516435a63991d075a27fb96cf, "");
    class_a57657628a525cab9dae00c5ee02b84f.def("__next__", method_pointer_92875bd7c0ec5ed89cd4c6ca1666a534, pybind11::return_value_policy::reference_internal, "");
    class_a57657628a525cab9dae00c5ee02b84f.def("__next__", autowig::method_decorator_92875bd7c0ec5ed89cd4c6ca1666a534);
    class_a57657628a525cab9dae00c5ee02b84f.def("responses", method_pointer_c7db9fd42b285f79a4622b30a0e83582, pybind11::return_value_policy::reference_internal, "");
    class_a57657628a525cab9dae00c5ee02b84f.def("explanatories", method_pointer_4d6d3c9222cd5f86a75dbe46871fd2b9, pybind11::return_value_policy::reference_internal, "");
    class_a57657628a525cab9dae00c5ee02b84f.def("weight", method_pointer_117534bbe883512e8d4496727e8fb49d, "");

}