#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::UnivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_41e812da3d3654cd9fb33041c3acf25f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_340c5465095052af9d63bdb8d9799d79 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_distribution_estimation");
    boost::python::object module_340c5465095052af9d63bdb8d9799d79(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_340c5465095052af9d63bdb8d9799d79.c_str()))));
    boost::python::scope().attr("_univariate_distribution_estimation") = module_340c5465095052af9d63bdb8d9799d79;
    boost::python::scope scope_340c5465095052af9d63bdb8d9799d79 = module_340c5465095052af9d63bdb8d9799d79;
    boost::python::class_< struct ::statiskit::UnivariateDistributionEstimation::Estimator, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type, boost::noncopyable > class_41e812da3d3654cd9fb33041c3acf25f("Estimator", "", boost::python::no_init);

}