#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & > const volatile * get_pointer<struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & > const volatile >(struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_9e5b6ebe79185a7ab764d301e9c4eb4e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::class_< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & >, autowig::Held< struct ::std::iterator< struct ::std::random_access_iterator_tag, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, long int, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const *, class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > const & > >::Type > class_9e5b6ebe79185a7ab764d301e9c4eb4e("_Iterator_9e5b6ebe79185a7ab764d301e9c4eb4e", "", boost::python::no_init);

}