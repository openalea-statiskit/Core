#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::UnivariateConditionalDistribution const volatile >(struct ::statiskit::UnivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_7ed55bcdec33582fb2767f7d96937c85()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_88034e6695c6585193cb0e690ef8dc6e)(struct ::statiskit::MultivariateEvent const &) = &::statiskit::UnivariateConditionalDistribution::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::UnivariateConditionalDistribution::*method_pointer_c1e88b9c4fb15f1bbe5dd0090911fcfa)() const = &::statiskit::UnivariateConditionalDistribution::get_response_space;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_152a627d69cd5b35837e015943fc1e75)() const = &::statiskit::UnivariateConditionalDistribution::get_explanatory_space;
    unsigned int  (::statiskit::UnivariateConditionalDistribution::*method_pointer_a19605344e725c65ab302819d1663dbe)() const = &::statiskit::UnivariateConditionalDistribution::get_nb_parameters;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >  (::statiskit::UnivariateConditionalDistribution::*method_pointer_2d42bbbaff065a9cb38813f62e9dafda)() const = &::statiskit::UnivariateConditionalDistribution::copy;
    boost::python::class_< struct ::statiskit::UnivariateConditionalDistribution, autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type, boost::noncopyable > class_7ed55bcdec33582fb2767f7d96937c85("UnivariateConditionalDistribution", "", boost::python::no_init);
    class_7ed55bcdec33582fb2767f7d96937c85.def("__call__", method_pointer_88034e6695c6585193cb0e690ef8dc6e, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Parameter:\n    `event` (:py:class:`statiskit.core.statiskit.MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :py:class:`statiskit.core.statiskit.UnivariateDistribution`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_response_space", method_pointer_c1e88b9c4fb15f1bbe5dd0090911fcfa, ":Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateSampleSpace, struct ::std::default\\_delete<\n    struct ::statiskit::UnivariateSampleSpace > >\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_explanatory_space", method_pointer_152a627d69cd5b35837e015943fc1e75, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`statiskit.core.statiskit.MultivariateSampleSpace`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_nb_parameters", method_pointer_a19605344e725c65ab302819d1663dbe, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("copy", method_pointer_2d42bbbaff065a9cb38813f62e9dafda, "");

}