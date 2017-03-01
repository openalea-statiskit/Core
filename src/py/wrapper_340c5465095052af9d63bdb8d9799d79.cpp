#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::UnivariateDistributionEstimation const volatile >(struct ::statiskit::UnivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_340c5465095052af9d63bdb8d9799d79()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::UnivariateDistributionEstimation::estimated_type const * (::statiskit::UnivariateDistributionEstimation::*method_pointer_bd794e40246350b583a72b6a11ca75d8)() const = &::statiskit::UnivariateDistributionEstimation::get_estimated;
    boost::python::class_< struct ::statiskit::UnivariateDistributionEstimation, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type, boost::noncopyable > class_340c5465095052af9d63bdb8d9799d79("UnivariateDistributionEstimation", "", boost::python::no_init);
    class_340c5465095052af9d63bdb8d9799d79.def("get_estimated", method_pointer_bd794e40246350b583a72b6a11ca75d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

}