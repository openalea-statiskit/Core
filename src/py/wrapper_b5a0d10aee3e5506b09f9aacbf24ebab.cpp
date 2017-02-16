#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile * get_pointer<struct ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile >(struct ::statiskit::BinomialDistributionMMEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_b5a0d10aee3e5506b09f9aacbf24ebab()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_dbc8a0461eeb579aa69a16cbe03a3913 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._binomial_distribution_mm_estimation");
    boost::python::object module_dbc8a0461eeb579aa69a16cbe03a3913(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_dbc8a0461eeb579aa69a16cbe03a3913.c_str()))));
    boost::python::scope().attr("_binomial_distribution_mm_estimation") = module_dbc8a0461eeb579aa69a16cbe03a3913;
    boost::python::scope scope_dbc8a0461eeb579aa69a16cbe03a3913 = module_dbc8a0461eeb579aa69a16cbe03a3913;
    boost::python::class_< struct ::statiskit::BinomialDistributionMMEstimation::Estimator, autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_b5a0d10aee3e5506b09f9aacbf24ebab("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::BinomialDistributionMMEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
    }

}