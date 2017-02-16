#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_227ebcabe93051fdb49f2bd6c608d881()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_e5e03034302f5c6ca9d068a205353d2a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._negative_binomial_distribution_ml_estimation");
    boost::python::object module_e5e03034302f5c6ca9d068a205353d2a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_e5e03034302f5c6ca9d068a205353d2a.c_str()))));
    boost::python::scope().attr("_negative_binomial_distribution_ml_estimation") = module_e5e03034302f5c6ca9d068a205353d2a;
    boost::python::scope scope_e5e03034302f5c6ca9d068a205353d2a = module_e5e03034302f5c6ca9d068a205353d2a;
    boost::python::class_< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator, class ::statiskit::Optimization > > class_227ebcabe93051fdb49f2bd6c608d881("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NegativeBinomialDistributionMLEstimation::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}