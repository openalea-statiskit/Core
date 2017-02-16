#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > const volatile >(struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_5823920881055a939d930ab07cdaa35f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::MultivariateSampleSpace >::*method_pointer_3c34e219ab295d1295538c26093f6027)(struct ::statiskit::MultivariateSampleSpace *) const = &::std::default_delete< struct ::statiskit::MultivariateSampleSpace >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace >, autowig::Held< struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >::Type > class_5823920881055a939d930ab07cdaa35f("_DefaultDelete_5823920881055a939d930ab07cdaa35f", "", boost::python::no_init);
    class_5823920881055a939d930ab07cdaa35f.def("__call__", method_pointer_3c34e219ab295d1295538c26093f6027, "");

}