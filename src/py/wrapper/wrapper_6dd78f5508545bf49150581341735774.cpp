#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6dd78f5508545bf49150581341735774()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_6dd78f5508545bf49150581341735774("_MixtureDistributionEMEstimation_6dd78f5508545bf49150581341735774", "", boost::python::no_init);
    class_6dd78f5508545bf49150581341735774.def(boost::python::init<  >(""));
    class_6dd78f5508545bf49150581341735774.def(boost::python::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_6dd78f5508545bf49150581341735774.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
    }

}