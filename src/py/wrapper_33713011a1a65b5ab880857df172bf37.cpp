#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > const volatile * get_pointer<struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > const volatile >(struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_33713011a1a65b5ab880857df172bf37()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    void  (::std::default_delete< ::statiskit::UnivariateConditionalDistribution >::*method_pointer_d836c7652fbb579aa7d9fcd21688b55f)(struct ::statiskit::UnivariateConditionalDistribution *) const = &::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution >::operator();
    boost::python::class_< struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution >, autowig::Held< struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > >::Type > class_33713011a1a65b5ab880857df172bf37("_DefaultDelete_33713011a1a65b5ab880857df172bf37", "", boost::python::no_init);
    class_33713011a1a65b5ab880857df172bf37.def(boost::python::init<  >(""));
    class_33713011a1a65b5ab880857df172bf37.def(boost::python::init< struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistribution > const & >(""));
    class_33713011a1a65b5ab880857df172bf37.def("__call__", method_pointer_d836c7652fbb579aa7d9fcd21688b55f, "");

}