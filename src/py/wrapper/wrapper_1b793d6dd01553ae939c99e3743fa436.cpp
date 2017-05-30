#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1b793d6dd01553ae939c99e3743fa436()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > > class_1b793d6dd01553ae939c99e3743fa436("_MixtureDistributionEMEstimation_1b793d6dd01553ae939c99e3743fa436", "", boost::python::no_init);
    class_1b793d6dd01553ae939c99e3743fa436.def(boost::python::init<  >(""));
    class_1b793d6dd01553ae939c99e3743fa436.def(boost::python::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_1b793d6dd01553ae939c99e3743fa436.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type >();
    }

}