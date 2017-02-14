#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::pair< int, int > const volatile * get_pointer<struct ::std::pair< int, int > const volatile >(struct ::std::pair< int, int > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_fe84f5cda13059bab40ebafe20ef8748()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::pair< int, int >::*method_pointer_41a3860618bd547c8a4b2fe9f1eedbe4)(struct ::std::pair< int, int > &) = &::std::pair< int, int >::swap;
    boost::python::class_< struct ::std::pair< int, int >, autowig::Held< struct ::std::pair< int, int > >::Type > class_fe84f5cda13059bab40ebafe20ef8748("_Pair_fe84f5cda13059bab40ebafe20ef8748", "", boost::python::no_init);
    class_fe84f5cda13059bab40ebafe20ef8748.def(boost::python::init<  >(""));
    class_fe84f5cda13059bab40ebafe20ef8748.def(boost::python::init< int const &, int const & >(""));
    class_fe84f5cda13059bab40ebafe20ef8748.def(boost::python::init< struct ::std::pair< int, int > const & >(""));
    class_fe84f5cda13059bab40ebafe20ef8748.def("swap", method_pointer_41a3860618bd547c8a4b2fe9f1eedbe4, "");
    class_fe84f5cda13059bab40ebafe20ef8748.def_readwrite("first", &::std::pair< int, int >::first, "");
    class_fe84f5cda13059bab40ebafe20ef8748.def_readwrite("second", &::std::pair< int, int >::second, "");

}