#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > > const volatile * get_pointer<class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > > const volatile >(class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_849251edc46950feb4fb7df44eadf285()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > >::size_type  (::std::initializer_list< ::std::shared_ptr< ::statiskit::NegativeBinomialDistribution > >::*method_pointer_e844643ba7d659e3ac18408d21753f9a)() const = &::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > >::size;
    boost::python::class_< class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > >, autowig::Held< class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > > >::Type > class_849251edc46950feb4fb7df44eadf285("_InitializerList_849251edc46950feb4fb7df44eadf285", "", boost::python::no_init);
    class_849251edc46950feb4fb7df44eadf285.def("__len__", method_pointer_e844643ba7d659e3ac18408d21753f9a, "");

}