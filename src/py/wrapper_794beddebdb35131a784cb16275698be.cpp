#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_794beddebdb35131a784cb16275698be()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateData::Generator >::*method_pointer_57c1bad0496e554fbb147331161278e9)(struct ::statiskit::UnivariateData::Generator *) const = &::std::default_delete< struct ::statiskit::UnivariateData::Generator >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >::Type > class_794beddebdb35131a784cb16275698be("_DefaultDelete_794beddebdb35131a784cb16275698be", "", boost::python::no_init);
    class_794beddebdb35131a784cb16275698be.def(boost::python::init<  >(""));
    class_794beddebdb35131a784cb16275698be.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > const & >(""));
    class_794beddebdb35131a784cb16275698be.def("__call__", method_pointer_57c1bad0496e554fbb147331161278e9, "");

}