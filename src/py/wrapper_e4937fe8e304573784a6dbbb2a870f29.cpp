#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > const volatile * get_pointer<class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > const volatile >(class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_e4937fe8e304573784a6dbbb2a870f29()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > >::size_type  (::std::initializer_list< ::std::shared_ptr< ::statiskit::BinomialDistribution > >::*method_pointer_63ddb502068f52b9a183b5b5ceb9c4d5)() const = &::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > >::size;
    boost::python::class_< class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > >, autowig::Held< class ::std::initializer_list< class ::std::shared_ptr< class ::statiskit::BinomialDistribution > > >::Type > class_e4937fe8e304573784a6dbbb2a870f29("_InitializerList_e4937fe8e304573784a6dbbb2a870f29", "", boost::python::no_init);
    class_e4937fe8e304573784a6dbbb2a870f29.def("__len__", method_pointer_63ddb502068f52b9a183b5b5ceb9c4d5, "");

}