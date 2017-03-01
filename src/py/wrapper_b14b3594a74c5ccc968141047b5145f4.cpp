#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile >(struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_b14b3594a74c5ccc968141047b5145f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DiscreteMultivariateDistributionEstimation, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation >, boost::noncopyable > class_b14b3594a74c5ccc968141047b5145f4("DiscreteMultivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }

}