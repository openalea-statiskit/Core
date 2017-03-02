#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_1935a142d4425b8e9212ebbb3d98b996()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_66ba790876ea5d25be923643f217b67a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_66ba790876ea5d25be923643f217b67a");
    boost::python::object module_66ba790876ea5d25be923643f217b67a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_66ba790876ea5d25be923643f217b67a.c_str()))));
    boost::python::scope().attr("__optimization_estimation_66ba790876ea5d25be923643f217b67a") = module_66ba790876ea5d25be923643f217b67a;
    boost::python::scope scope_66ba790876ea5d25be923643f217b67a = module_66ba790876ea5d25be923643f217b67a;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::noncopyable > class_1935a142d4425b8e9212ebbb3d98b996("Estimator", "", boost::python::no_init);

}