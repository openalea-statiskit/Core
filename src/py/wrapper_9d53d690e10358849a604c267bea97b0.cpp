#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > & > const volatile * get_pointer<struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > & > const volatile >(struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > & > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_9d53d690e10358849a604c267bea97b0()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::class_< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > & >, autowig::Held< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > & > >::Type > class_9d53d690e10358849a604c267bea97b0("_Iterator_9d53d690e10358849a604c267bea97b0", "", boost::python::no_init);

}