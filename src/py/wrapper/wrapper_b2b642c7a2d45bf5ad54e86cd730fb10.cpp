#include "_core.h"

::statiskit::Index  (::statiskit::MultivariateConditionalData::*method_pointer_2c8e4a89597d525bbd83a330e44de51a)()const= &::statiskit::MultivariateConditionalData::size;
class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > >  (::statiskit::MultivariateConditionalData::*method_pointer_1e7a6084df055ebcbee363707f5670df)()const= &::statiskit::MultivariateConditionalData::generator;
struct ::statiskit::MultivariateData const * (::statiskit::MultivariateConditionalData::*method_pointer_78b4eb48122156bebe181329287e3f53)()const= &::statiskit::MultivariateConditionalData::get_responses;
struct ::statiskit::MultivariateData const * (::statiskit::MultivariateConditionalData::*method_pointer_dafb990859a45716838f73a2eeb79f2b)()const= &::statiskit::MultivariateConditionalData::get_explanatories;
class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData > >  (::statiskit::MultivariateConditionalData::*method_pointer_6cb2dc0cb4795fed80b019c521e89283)()const= &::statiskit::MultivariateConditionalData::copy;
double  (::statiskit::MultivariateConditionalData::*method_pointer_86ea95d0898057ef90d64445c85d2c1f)()const= &::statiskit::MultivariateConditionalData::compute_total;

namespace autowig {
}

void wrapper_b2b642c7a2d45bf5ad54e86cd730fb10(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::MultivariateConditionalData, autowig::HolderType< class ::statiskit::MultivariateConditionalData >::Type > class_b2b642c7a2d45bf5ad54e86cd730fb10(module, "MultivariateConditionalData", "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def(pybind11::init< struct ::statiskit::MultivariateData const &, ::statiskit::Indices const &, ::statiskit::Indices const & >());
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def(pybind11::init< class ::statiskit::MultivariateConditionalData const & >());
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("__len__", method_pointer_2c8e4a89597d525bbd83a330e44de51a, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("__iter__", method_pointer_1e7a6084df055ebcbee363707f5670df, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("get_responses", method_pointer_78b4eb48122156bebe181329287e3f53, pybind11::return_value_policy::reference_internal, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("get_explanatories", method_pointer_dafb990859a45716838f73a2eeb79f2b, pybind11::return_value_policy::reference_internal, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("copy", method_pointer_6cb2dc0cb4795fed80b019c521e89283, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("compute_total", method_pointer_86ea95d0898057ef90d64445c85d2c1f, "");

}