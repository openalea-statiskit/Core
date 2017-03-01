#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::CategoricalMultivariateDistribution const volatile * get_pointer<struct ::statiskit::CategoricalMultivariateDistribution const volatile >(struct ::statiskit::CategoricalMultivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_c1af1f263c37571f8e1257a72f39fd05()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::CategoricalMultivariateDistribution, autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_c1af1f263c37571f8e1257a72f39fd05("CategoricalMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
    }

}