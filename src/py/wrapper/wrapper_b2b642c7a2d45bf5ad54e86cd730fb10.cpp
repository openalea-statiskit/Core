#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateConditionalData const volatile * get_pointer<class ::statiskit::MultivariateConditionalData const volatile >(class ::statiskit::MultivariateConditionalData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b2b642c7a2d45bf5ad54e86cd730fb10()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MultivariateConditionalData::*method_pointer_2c8e4a89597d525bbd83a330e44de51a)() const = &::statiskit::MultivariateConditionalData::size;
    class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > >  (::statiskit::MultivariateConditionalData::*method_pointer_1e7a6084df055ebcbee363707f5670df)() const = &::statiskit::MultivariateConditionalData::generator;
    struct ::statiskit::MultivariateData const * (::statiskit::MultivariateConditionalData::*method_pointer_78b4eb48122156bebe181329287e3f53)() const = &::statiskit::MultivariateConditionalData::get_responses;
    struct ::statiskit::MultivariateData const * (::statiskit::MultivariateConditionalData::*method_pointer_dafb990859a45716838f73a2eeb79f2b)() const = &::statiskit::MultivariateConditionalData::get_explanatories;
    class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData > >  (::statiskit::MultivariateConditionalData::*method_pointer_6cb2dc0cb4795fed80b019c521e89283)() const = &::statiskit::MultivariateConditionalData::copy;
    double  (::statiskit::MultivariateConditionalData::*method_pointer_86ea95d0898057ef90d64445c85d2c1f)() const = &::statiskit::MultivariateConditionalData::compute_total;
    boost::python::class_< class ::statiskit::MultivariateConditionalData, autowig::Held< class ::statiskit::MultivariateConditionalData >::Type > class_b2b642c7a2d45bf5ad54e86cd730fb10("MultivariateConditionalData", "", boost::python::no_init);
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def(boost::python::init< struct ::statiskit::MultivariateData const &, ::statiskit::Indices const &, ::statiskit::Indices const & >(""));
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def(boost::python::init< class ::statiskit::MultivariateConditionalData const & >(""));
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("__len__", method_pointer_2c8e4a89597d525bbd83a330e44de51a, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("__iter__", method_pointer_1e7a6084df055ebcbee363707f5670df, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("get_responses", method_pointer_78b4eb48122156bebe181329287e3f53, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("get_explanatories", method_pointer_dafb990859a45716838f73a2eeb79f2b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("copy", method_pointer_6cb2dc0cb4795fed80b019c521e89283, "");
    class_b2b642c7a2d45bf5ad54e86cd730fb10.def("compute_total", method_pointer_86ea95d0898057ef90d64445c85d2c1f, "");

}