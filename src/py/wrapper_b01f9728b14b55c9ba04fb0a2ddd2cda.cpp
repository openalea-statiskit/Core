#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_b01f9728b14b55c9ba04fb0a2ddd2cda()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b14b3594a74c5ccc968141047b5145f4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_multivariate_distribution_estimation");
    boost::python::object module_b14b3594a74c5ccc968141047b5145f4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b14b3594a74c5ccc968141047b5145f4.c_str()))));
    boost::python::scope().attr("_discrete_multivariate_distribution_estimation") = module_b14b3594a74c5ccc968141047b5145f4;
    boost::python::scope scope_b14b3594a74c5ccc968141047b5145f4 = module_b14b3594a74c5ccc968141047b5145f4;
    boost::python::class_< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b01f9728b14b55c9ba04fb0a2ddd2cda("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
    }

}