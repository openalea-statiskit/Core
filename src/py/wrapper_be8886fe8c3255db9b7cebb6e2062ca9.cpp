#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateData > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateData > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateData > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_be8886fe8c3255db9b7cebb6e2062ca9()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateData >::*method_pointer_89bbae4cea7650ba9110c07ef3fe8d04)(struct ::statiskit::UnivariateData *) const = &::std::default_delete< struct ::statiskit::UnivariateData >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateData >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateData > >::Type > class_be8886fe8c3255db9b7cebb6e2062ca9("_DefaultDelete_be8886fe8c3255db9b7cebb6e2062ca9", "", boost::python::no_init);
    class_be8886fe8c3255db9b7cebb6e2062ca9.def(boost::python::init<  >(""));
    class_be8886fe8c3255db9b7cebb6e2062ca9.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateData > const & >(""));
    class_be8886fe8c3255db9b7cebb6e2062ca9.def("__call__", method_pointer_89bbae4cea7650ba9110c07ef3fe8d04, "");

}