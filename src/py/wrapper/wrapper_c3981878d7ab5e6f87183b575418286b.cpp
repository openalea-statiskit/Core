#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3981878d7ab5e6f87183b575418286b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > > > class_c3981878d7ab5e6f87183b575418286b("_MixtureDistributionEMEstimation_c3981878d7ab5e6f87183b575418286b", "", boost::python::no_init);
    class_c3981878d7ab5e6f87183b575418286b.def(boost::python::init<  >(""));
    class_c3981878d7ab5e6f87183b575418286b.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_c3981878d7ab5e6f87183b575418286b.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
    }

}