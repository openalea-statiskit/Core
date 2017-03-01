#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DiscreteMultivariateDistribution const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateDistribution const volatile >(struct ::statiskit::DiscreteMultivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_31aa0a631312549a9cf4cb8740b55a7f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::DiscreteMultivariateDistribution, autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_31aa0a631312549a9cf4cb8740b55a7f("DiscreteMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
    }

}