#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_6345fc1b6c0c5953a1ea3e895aa4e75f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_6ab41d8aa0095175b6da7190fc953a97 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_6ab41d8aa0095175b6da7190fc953a97");
    boost::python::object module_6ab41d8aa0095175b6da7190fc953a97(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_6ab41d8aa0095175b6da7190fc953a97.c_str()))));
    boost::python::scope().attr("__optimization_estimation_6ab41d8aa0095175b6da7190fc953a97") = module_6ab41d8aa0095175b6da7190fc953a97;
    boost::python::scope scope_6ab41d8aa0095175b6da7190fc953a97 = module_6ab41d8aa0095175b6da7190fc953a97;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::noncopyable > class_6345fc1b6c0c5953a1ea3e895aa4e75f("Estimator", "", boost::python::no_init);

}