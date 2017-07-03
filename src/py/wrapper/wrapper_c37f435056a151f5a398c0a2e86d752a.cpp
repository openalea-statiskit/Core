#include "_core.h"



namespace autowig
{

    void method_decorator_48e3ad08fc4b5eb885552c771f60437c(class ::statiskit::UnivariateConditionalData::Generator & instance, const class ::statiskit::UnivariateConditionalData::Generator & param_out) { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::UnivariateConditionalData::Generator const volatile * get_pointer<class ::statiskit::UnivariateConditionalData::Generator const volatile >(class ::statiskit::UnivariateConditionalData::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c37f435056a151f5a398c0a2e86d752a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_4e58a130fe9e52ffa312f3e583614e93 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_conditional_data");
    boost::python::object module_4e58a130fe9e52ffa312f3e583614e93(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_4e58a130fe9e52ffa312f3e583614e93.c_str()))));
    boost::python::scope().attr("_univariate_conditional_data") = module_4e58a130fe9e52ffa312f3e583614e93;
    boost::python::scope scope_4e58a130fe9e52ffa312f3e583614e93 = module_4e58a130fe9e52ffa312f3e583614e93;
    bool  (::statiskit::UnivariateConditionalData::Generator::*method_pointer_dbd5d1e6edee5e428a604bd20bd9b331)() const = &::statiskit::UnivariateConditionalData::Generator::is_valid;
    class ::statiskit::UnivariateConditionalData::Generator & (::statiskit::UnivariateConditionalData::Generator::*method_pointer_48e3ad08fc4b5eb885552c771f60437c)() = &::statiskit::UnivariateConditionalData::Generator::operator++;
    struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateConditionalData::Generator::*method_pointer_3493ddb18deb5b769d44454484d55164)() const = &::statiskit::UnivariateConditionalData::Generator::response;
    struct ::statiskit::MultivariateEvent const * (::statiskit::UnivariateConditionalData::Generator::*method_pointer_0629b3c1d1b15640b93d4865d7fb2e1a)() const = &::statiskit::UnivariateConditionalData::Generator::explanatories;
    double  (::statiskit::UnivariateConditionalData::Generator::*method_pointer_cde76156e34b5300ab1ff4b31c270ba4)() const = &::statiskit::UnivariateConditionalData::Generator::weight;
    boost::python::class_< class ::statiskit::UnivariateConditionalData::Generator, autowig::Held< class ::statiskit::UnivariateConditionalData::Generator >::Type > class_c37f435056a151f5a398c0a2e86d752a("Generator", "", boost::python::no_init);
    class_c37f435056a151f5a398c0a2e86d752a.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_c37f435056a151f5a398c0a2e86d752a.def("is_valid", method_pointer_dbd5d1e6edee5e428a604bd20bd9b331, "");
    class_c37f435056a151f5a398c0a2e86d752a.def("__next__", method_pointer_48e3ad08fc4b5eb885552c771f60437c, boost::python::return_internal_reference<>(), "");
    class_c37f435056a151f5a398c0a2e86d752a.def("__next__", autowig::method_decorator_48e3ad08fc4b5eb885552c771f60437c);
    class_c37f435056a151f5a398c0a2e86d752a.def("response", method_pointer_3493ddb18deb5b769d44454484d55164, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c37f435056a151f5a398c0a2e86d752a.def("explanatories", method_pointer_0629b3c1d1b15640b93d4865d7fb2e1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_c37f435056a151f5a398c0a2e86d752a.def("weight", method_pointer_cde76156e34b5300ab1ff4b31c270ba4, "");

}