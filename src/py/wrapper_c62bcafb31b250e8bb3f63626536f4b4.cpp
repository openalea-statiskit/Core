#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::fpos< __mbstate_t > const volatile * get_pointer<class ::std::fpos< __mbstate_t > const volatile >(class ::std::fpos< __mbstate_t > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_c62bcafb31b250e8bb3f63626536f4b4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    class ::std::fpos< __mbstate_t > & (::std::fpos< __mbstate_t >::*method_pointer_69807f66301958b58ec8e566dad5f44d)(::std::streamoff ) = &::std::fpos< __mbstate_t >::operator+=;
    class ::std::fpos< __mbstate_t > & (::std::fpos< __mbstate_t >::*method_pointer_3471b660ad1c5296a25f584dba14f6bb)(::std::streamoff ) = &::std::fpos< __mbstate_t >::operator-=;
    class ::std::fpos< __mbstate_t >  (::std::fpos< __mbstate_t >::*method_pointer_b29ae265339b58199401cf5c0e640389)(::std::streamoff ) const = &::std::fpos< __mbstate_t >::operator+;
    class ::std::fpos< __mbstate_t >  (::std::fpos< __mbstate_t >::*method_pointer_7e4f5995bdef5462836c01679a689968)(::std::streamoff ) const = &::std::fpos< __mbstate_t >::operator-;
    ::std::streamoff  (::std::fpos< __mbstate_t >::*method_pointer_42ef4f3e4a4e5160863a2b0ab2bd01ac)(class ::std::fpos< __mbstate_t > const &) const = &::std::fpos< __mbstate_t >::operator-;
    boost::python::class_< class ::std::fpos< __mbstate_t >, autowig::Held< class ::std::fpos< __mbstate_t > >::Type > class_c62bcafb31b250e8bb3f63626536f4b4("_Fpos_c62bcafb31b250e8bb3f63626536f4b4", "", boost::python::no_init);
    class_c62bcafb31b250e8bb3f63626536f4b4.def("__iadd__", method_pointer_69807f66301958b58ec8e566dad5f44d, boost::python::return_internal_reference<>(), "");
    class_c62bcafb31b250e8bb3f63626536f4b4.def("__isub__", method_pointer_3471b660ad1c5296a25f584dba14f6bb, boost::python::return_internal_reference<>(), "");
    class_c62bcafb31b250e8bb3f63626536f4b4.def("__add__", method_pointer_b29ae265339b58199401cf5c0e640389, "");
    class_c62bcafb31b250e8bb3f63626536f4b4.def("__sub__", method_pointer_7e4f5995bdef5462836c01679a689968, "");
    class_c62bcafb31b250e8bb3f63626536f4b4.def("__sub__", method_pointer_42ef4f3e4a4e5160863a2b0ab2bd01ac, "");

}