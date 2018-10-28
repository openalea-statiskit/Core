#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GumbelDistribution const volatile * get_pointer<class ::statiskit::GumbelDistribution const volatile >(class ::statiskit::GumbelDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_851931d00bce5cabad06313cbacce91b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::GumbelDistribution::*method_pointer_bc77f20dea4954c7970e95ba781f19b8)() const = &::statiskit::GumbelDistribution::get_mu;
    void  (::statiskit::GumbelDistribution::*method_pointer_c7c163a120c655a3a16625df32ad6113)(double const &) = &::statiskit::GumbelDistribution::set_mu;
    double const & (::statiskit::GumbelDistribution::*method_pointer_dd1ffd3620be59b6a7a4d652ba8d8010)() const = &::statiskit::GumbelDistribution::get_sigma;
    void  (::statiskit::GumbelDistribution::*method_pointer_7d7bb45edc66567a8f06b7e379d8ef04)(double const &) = &::statiskit::GumbelDistribution::set_sigma;
    boost::python::class_< class ::statiskit::GumbelDistribution, autowig::Held< class ::statiskit::GumbelDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_851931d00bce5cabad06313cbacce91b("GumbelDistribution", "This class GumbelDistribution represents a `Gumbel\ndistribution <https://en.wikipedia.org/wiki/Gumbel_distribution>`__\n(maximum).\n\nThe Gumbel distribution (maximum) is an univariate continuous\ndistribution. It is also called extreme value type I distribution\n(maximum). The support is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_851931d00bce5cabad06313cbacce91b.def(boost::python::init<  >(""));
    class_851931d00bce5cabad06313cbacce91b.def(boost::python::init< double const &, double const & >(""));
    class_851931d00bce5cabad06313cbacce91b.def(boost::python::init< class ::statiskit::GumbelDistribution const & >(""));
    class_851931d00bce5cabad06313cbacce91b.def("get_mu", method_pointer_bc77f20dea4954c7970e95ba781f19b8, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("set_mu", method_pointer_c7c163a120c655a3a16625df32ad6113, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("get_sigma", method_pointer_dd1ffd3620be59b6a7a4d652ba8d8010, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale prameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_851931d00bce5cabad06313cbacce91b.def("set_sigma", method_pointer_7d7bb45edc66567a8f06b7e379d8ef04, "Set the value of the scale prameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

    if(autowig::Held< class ::statiskit::GumbelDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GumbelDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}