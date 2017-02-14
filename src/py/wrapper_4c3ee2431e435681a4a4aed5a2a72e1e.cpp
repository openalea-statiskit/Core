#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::BinomialDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_4c3ee2431e435681a4a4aed5a2a72e1e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a640206684935d01aa5be922b3bbdf00 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_distribution_ml_estimation");
    boost::python::object module_a640206684935d01aa5be922b3bbdf00(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a640206684935d01aa5be922b3bbdf00.c_str()))));
    boost::python::scope().attr("_binomial_distribution_ml_estimation") = module_a640206684935d01aa5be922b3bbdf00;
    boost::python::scope scope_a640206684935d01aa5be922b3bbdf00 = module_a640206684935d01aa5be922b3bbdf00;
    boost::python::class_< struct ::statiskit::BinomialDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, class ::statiskit::Optimization > > class_4c3ee2431e435681a4a4aed5a2a72e1e("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}