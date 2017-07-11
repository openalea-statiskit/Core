#include "_core.h"



namespace autowig
{

    void method_decorator_92875bd7c0ec5ed89cd4c6ca1666a534(class ::statiskit::MultivariateConditionalData::Generator & instance, const class ::statiskit::MultivariateConditionalData::Generator & param_out) { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::MultivariateConditionalData::Generator const volatile * get_pointer<class ::statiskit::MultivariateConditionalData::Generator const volatile >(class ::statiskit::MultivariateConditionalData::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a57657628a525cab9dae00c5ee02b84f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b2b642c7a2d45bf5ad54e86cd730fb10 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_conditional_data");
    boost::python::object module_b2b642c7a2d45bf5ad54e86cd730fb10(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b2b642c7a2d45bf5ad54e86cd730fb10.c_str()))));
    boost::python::scope().attr("_multivariate_conditional_data") = module_b2b642c7a2d45bf5ad54e86cd730fb10;
    boost::python::scope scope_b2b642c7a2d45bf5ad54e86cd730fb10 = module_b2b642c7a2d45bf5ad54e86cd730fb10;
    bool  (::statiskit::MultivariateConditionalData::Generator::*method_pointer_feb4c26516435a63991d075a27fb96cf)() const = &::statiskit::MultivariateConditionalData::Generator::is_valid;
    class ::statiskit::MultivariateConditionalData::Generator & (::statiskit::MultivariateConditionalData::Generator::*method_pointer_92875bd7c0ec5ed89cd4c6ca1666a534)() = &::statiskit::MultivariateConditionalData::Generator::operator++;
    struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateConditionalData::Generator::*method_pointer_c7db9fd42b285f79a4622b30a0e83582)() const = &::statiskit::MultivariateConditionalData::Generator::responses;
    struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateConditionalData::Generator::*method_pointer_4d6d3c9222cd5f86a75dbe46871fd2b9)() const = &::statiskit::MultivariateConditionalData::Generator::explanatories;
    double  (::statiskit::MultivariateConditionalData::Generator::*method_pointer_117534bbe883512e8d4496727e8fb49d)() const = &::statiskit::MultivariateConditionalData::Generator::weight;
    boost::python::class_< class ::statiskit::MultivariateConditionalData::Generator, autowig::Held< class ::statiskit::MultivariateConditionalData::Generator >::Type > class_a57657628a525cab9dae00c5ee02b84f("Generator", "", boost::python::no_init);
    class_a57657628a525cab9dae00c5ee02b84f.def(boost::python::init< class ::statiskit::MultivariateConditionalData const * >(""));
    class_a57657628a525cab9dae00c5ee02b84f.def("is_valid", method_pointer_feb4c26516435a63991d075a27fb96cf, "");
    class_a57657628a525cab9dae00c5ee02b84f.def("__next__", method_pointer_92875bd7c0ec5ed89cd4c6ca1666a534, boost::python::return_internal_reference<>(), "");
    class_a57657628a525cab9dae00c5ee02b84f.def("__next__", autowig::method_decorator_92875bd7c0ec5ed89cd4c6ca1666a534);
    class_a57657628a525cab9dae00c5ee02b84f.def("responses", method_pointer_c7db9fd42b285f79a4622b30a0e83582, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a57657628a525cab9dae00c5ee02b84f.def("explanatories", method_pointer_4d6d3c9222cd5f86a75dbe46871fd2b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a57657628a525cab9dae00c5ee02b84f.def("weight", method_pointer_117534bbe883512e8d4496727e8fb49d, "");

}