#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_14fa1794e46f511c8ac5c1847f98124a()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateSampleSpace >::*method_pointer_6d15fde07ac55765a8552df67ec40613)(struct ::statiskit::UnivariateSampleSpace *) const = &::std::default_delete< struct ::statiskit::UnivariateSampleSpace >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >::Type > class_14fa1794e46f511c8ac5c1847f98124a("_DefaultDelete_14fa1794e46f511c8ac5c1847f98124a", "", boost::python::no_init);
    class_14fa1794e46f511c8ac5c1847f98124a.def(boost::python::init<  >(""));
    class_14fa1794e46f511c8ac5c1847f98124a.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > const & >(""));
    class_14fa1794e46f511c8ac5c1847f98124a.def("__call__", method_pointer_6d15fde07ac55765a8552df67ec40613, "");

}