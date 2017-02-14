#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::MultivariateEvent > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::MultivariateEvent > const volatile >(struct ::std::default_delete< struct ::statiskit::MultivariateEvent > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_c54e45eaa95f59d0a03e8b6be9170640()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::MultivariateEvent >::*method_pointer_341f9f3eaff95797b21cea2d03a5f5cc)(struct ::statiskit::MultivariateEvent *) const = &::std::default_delete< struct ::statiskit::MultivariateEvent >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::MultivariateEvent >, autowig::Held< struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >::Type > class_c54e45eaa95f59d0a03e8b6be9170640("_DefaultDelete_c54e45eaa95f59d0a03e8b6be9170640", "", boost::python::no_init);
    class_c54e45eaa95f59d0a03e8b6be9170640.def(boost::python::init<  >(""));
    class_c54e45eaa95f59d0a03e8b6be9170640.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::MultivariateEvent > const & >(""));
    class_c54e45eaa95f59d0a03e8b6be9170640.def("__call__", method_pointer_341f9f3eaff95797b21cea2d03a5f5cc, "");

}