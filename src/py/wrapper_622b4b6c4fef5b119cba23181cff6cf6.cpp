#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ContinuousMultivariateDistribution const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateDistribution const volatile >(struct ::statiskit::ContinuousMultivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_622b4b6c4fef5b119cba23181cff6cf6()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::ContinuousMultivariateDistribution, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_622b4b6c4fef5b119cba23181cff6cf6("ContinuousMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
    }

}