#include "_core.h"

::statiskit::Index  (::statiskit::UnivariateConditionalData::*method_pointer_891c77abd74058eb896acde63c8c306e)()const= &::statiskit::UnivariateConditionalData::size;
class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > >  (::statiskit::UnivariateConditionalData::*method_pointer_22bc4df12bff5c14934cfd818d1859b5)()const= &::statiskit::UnivariateConditionalData::generator;
struct ::statiskit::UnivariateData const * (::statiskit::UnivariateConditionalData::*method_pointer_54f3f26ebc9f58639eaf0be516e8cc8e)()const= &::statiskit::UnivariateConditionalData::get_response;
struct ::statiskit::MultivariateData const * (::statiskit::UnivariateConditionalData::*method_pointer_6af1b5032326545795b1ddc9c78239ee)()const= &::statiskit::UnivariateConditionalData::get_explanatories;
class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > >  (::statiskit::UnivariateConditionalData::*method_pointer_3e4d6e483f3257c9a3eeac0f5f8b8664)()const= &::statiskit::UnivariateConditionalData::copy;
double  (::statiskit::UnivariateConditionalData::*method_pointer_53ae0ea110b759638cd974670309ca13)()const= &::statiskit::UnivariateConditionalData::compute_total;

namespace autowig {
}

void wrapper_4e58a130fe9e52ffa312f3e583614e93(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateConditionalData, autowig::HolderType< class ::statiskit::UnivariateConditionalData >::Type > class_4e58a130fe9e52ffa312f3e583614e93(module, "UnivariateConditionalData", "");
    class_4e58a130fe9e52ffa312f3e583614e93.def(pybind11::init< struct ::statiskit::MultivariateData const &, ::statiskit::Index const &, ::statiskit::Indices const & >());
    class_4e58a130fe9e52ffa312f3e583614e93.def(pybind11::init< class ::statiskit::UnivariateConditionalData const & >());
    class_4e58a130fe9e52ffa312f3e583614e93.def("__len__", method_pointer_891c77abd74058eb896acde63c8c306e, "");
    class_4e58a130fe9e52ffa312f3e583614e93.def("__iter__", method_pointer_22bc4df12bff5c14934cfd818d1859b5, "");
    class_4e58a130fe9e52ffa312f3e583614e93.def("get_response", method_pointer_54f3f26ebc9f58639eaf0be516e8cc8e, pybind11::return_value_policy::reference_internal, "");
    class_4e58a130fe9e52ffa312f3e583614e93.def("get_explanatories", method_pointer_6af1b5032326545795b1ddc9c78239ee, pybind11::return_value_policy::reference_internal, "");
    class_4e58a130fe9e52ffa312f3e583614e93.def("copy", method_pointer_3e4d6e483f3257c9a3eeac0f5f8b8664, "");
    class_4e58a130fe9e52ffa312f3e583614e93.def("compute_total", method_pointer_53ae0ea110b759638cd974670309ca13, "");

}