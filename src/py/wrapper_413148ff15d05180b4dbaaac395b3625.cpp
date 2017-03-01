#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_413148ff15d05180b4dbaaac395b3625()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f09c97b097575bf2b4af254e6faa082c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._categorical_multivariate_distribution_estimation");
    boost::python::object module_f09c97b097575bf2b4af254e6faa082c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f09c97b097575bf2b4af254e6faa082c.c_str()))));
    boost::python::scope().attr("_categorical_multivariate_distribution_estimation") = module_f09c97b097575bf2b4af254e6faa082c;
    boost::python::scope scope_f09c97b097575bf2b4af254e6faa082c = module_f09c97b097575bf2b4af254e6faa082c;
    boost::python::class_< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_413148ff15d05180b4dbaaac395b3625("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }

}