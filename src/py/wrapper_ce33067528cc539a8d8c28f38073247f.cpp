#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::iterator< struct ::std::random_access_iterator_tag, char, long int, char *, char & > const volatile * get_pointer<struct ::std::iterator< struct ::std::random_access_iterator_tag, char, long int, char *, char & > const volatile >(struct ::std::iterator< struct ::std::random_access_iterator_tag, char, long int, char *, char & > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_ce33067528cc539a8d8c28f38073247f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::class_< struct ::std::iterator< struct ::std::random_access_iterator_tag, char, long int, char *, char & >, autowig::Held< struct ::std::iterator< struct ::std::random_access_iterator_tag, char, long int, char *, char & > >::Type > class_ce33067528cc539a8d8c28f38073247f("_Iterator_ce33067528cc539a8d8c28f38073247f", "", boost::python::no_init);

}