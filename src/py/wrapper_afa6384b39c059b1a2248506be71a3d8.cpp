#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateEvent > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateEvent > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateEvent > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_afa6384b39c059b1a2248506be71a3d8()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateEvent >::*method_pointer_6e18ede2b79e5541b33e750da5183d78)(struct ::statiskit::UnivariateEvent *) const = &::std::default_delete< struct ::statiskit::UnivariateEvent >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateEvent >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >::Type > class_afa6384b39c059b1a2248506be71a3d8("_DefaultDelete_afa6384b39c059b1a2248506be71a3d8", "", boost::python::no_init);
    class_afa6384b39c059b1a2248506be71a3d8.def(boost::python::init<  >(""));
    class_afa6384b39c059b1a2248506be71a3d8.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateEvent > const & >(""));
    class_afa6384b39c059b1a2248506be71a3d8.def("__call__", method_pointer_6e18ede2b79e5541b33e750da5183d78, "");

}