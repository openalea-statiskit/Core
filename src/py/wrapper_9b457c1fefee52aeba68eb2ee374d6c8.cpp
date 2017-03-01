#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_9b457c1fefee52aeba68eb2ee374d6c8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1f8a991c324584993f9a58dcb9c014e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_multivariate_distribution_estimation");
    boost::python::object module_f1f8a991c324584993f9a58dcb9c014e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1f8a991c324584993f9a58dcb9c014e.c_str()))));
    boost::python::scope().attr("_continuous_multivariate_distribution_estimation") = module_f1f8a991c324584993f9a58dcb9c014e;
    boost::python::scope scope_f1f8a991c324584993f9a58dcb9c014e = module_f1f8a991c324584993f9a58dcb9c014e;
    boost::python::class_< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_9b457c1fefee52aeba68eb2ee374d6c8("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }

}