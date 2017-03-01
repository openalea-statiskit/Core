#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::MultivariateDistributionEstimation const volatile >(struct ::statiskit::MultivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_43ff7c79dcd15ad9995fd0d0ccc6d440()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::MultivariateDistributionEstimation::estimated_type const * (::statiskit::MultivariateDistributionEstimation::*method_pointer_123ca6ff048a55c3916851be0f12a662)() const = &::statiskit::MultivariateDistributionEstimation::get_estimated;
    boost::python::class_< struct ::statiskit::MultivariateDistributionEstimation, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type, boost::noncopyable > class_43ff7c79dcd15ad9995fd0d0ccc6d440("MultivariateDistributionEstimation", "", boost::python::no_init);
    class_43ff7c79dcd15ad9995fd0d0ccc6d440.def("get_estimated", method_pointer_123ca6ff048a55c3916851be0f12a662, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

}