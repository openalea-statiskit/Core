#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ContinuousUnivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::ContinuousUnivariateDistributionEstimation const volatile >(struct ::statiskit::ContinuousUnivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_f13beb88f0a956f5bc0cd7245bbd4b1c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::ContinuousUnivariateDistributionEstimation, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation >, boost::noncopyable > class_f13beb88f0a956f5bc0cd7245bbd4b1c("ContinuousUnivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
    }

}