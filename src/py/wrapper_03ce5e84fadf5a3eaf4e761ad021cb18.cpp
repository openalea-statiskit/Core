#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & > const volatile * get_pointer<struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & > const volatile >(struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_03ce5e84fadf5a3eaf4e761ad021cb18()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::class_< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & >, autowig::Held< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::BinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::BinomialDistribution > const & > >::Type > class_03ce5e84fadf5a3eaf4e761ad021cb18("_Iterator_03ce5e84fadf5a3eaf4e761ad021cb18", "", boost::python::no_init);

}