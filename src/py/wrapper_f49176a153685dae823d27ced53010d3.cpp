#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > & > const volatile * get_pointer<struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > & > const volatile >(struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > & > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_f49176a153685dae823d27ced53010d3()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::class_< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > & >, autowig::Held< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > & > >::Type > class_f49176a153685dae823d27ced53010d3("_Iterator_f49176a153685dae823d27ced53010d3", "", boost::python::no_init);

}