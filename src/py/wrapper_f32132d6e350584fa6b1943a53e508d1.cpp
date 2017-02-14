#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::pair< double, double > const volatile * get_pointer<struct ::std::pair< double, double > const volatile >(struct ::std::pair< double, double > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_f32132d6e350584fa6b1943a53e508d1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::pair< double, double >::*method_pointer_a2a660bdc7985f9cb03a6a6472bb8d45)(struct ::std::pair< double, double > &) = &::std::pair< double, double >::swap;
    boost::python::class_< struct ::std::pair< double, double >, autowig::Held< struct ::std::pair< double, double > >::Type > class_f32132d6e350584fa6b1943a53e508d1("_Pair_f32132d6e350584fa6b1943a53e508d1", "", boost::python::no_init);
    class_f32132d6e350584fa6b1943a53e508d1.def(boost::python::init<  >(""));
    class_f32132d6e350584fa6b1943a53e508d1.def(boost::python::init< double const &, double const & >(""));
    class_f32132d6e350584fa6b1943a53e508d1.def(boost::python::init< struct ::std::pair< double, double > const & >(""));
    class_f32132d6e350584fa6b1943a53e508d1.def("swap", method_pointer_a2a660bdc7985f9cb03a6a6472bb8d45, "");
    class_f32132d6e350584fa6b1943a53e508d1.def_readwrite("first", &::std::pair< double, double >::first, "");
    class_f32132d6e350584fa6b1943a53e508d1.def_readwrite("second", &::std::pair< double, double >::second, "");

}