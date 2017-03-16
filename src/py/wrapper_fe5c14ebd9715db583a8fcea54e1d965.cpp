#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedMultivariateData const volatile * get_pointer<class ::statiskit::WeightedMultivariateData const volatile >(class ::statiskit::WeightedMultivariateData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fe5c14ebd9715db583a8fcea54e1d965()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::WeightedMultivariateData::*method_pointer_ecd4b9cfc90c5afb9956da624c039e6f)(::statiskit::Index const &) const = &::statiskit::WeightedMultivariateData::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::WeightedMultivariateData::*method_pointer_821db0f89134517cbf08f50969c41dc8)(class ::std::set< unsigned long int, struct ::std::less< unsigned long int >, class ::std::allocator< unsigned long int > > const &) const = &::statiskit::WeightedMultivariateData::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::WeightedMultivariateData::*method_pointer_4330e08675f9510d872f35107628afa5)() const = &::statiskit::WeightedMultivariateData::copy;
    boost::python::class_< class ::statiskit::WeightedMultivariateData, autowig::Held< class ::statiskit::WeightedMultivariateData >::Type > class_fe5c14ebd9715db583a8fcea54e1d965("WeightedMultivariateData", "", boost::python::no_init);
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< class ::statiskit::WeightedMultivariateData const & >(""));
    class_fe5c14ebd9715db583a8fcea54e1d965.def("extract", method_pointer_ecd4b9cfc90c5afb9956da624c039e6f, "");
    class_fe5c14ebd9715db583a8fcea54e1d965.def("extract", method_pointer_821db0f89134517cbf08f50969c41dc8, "");
    class_fe5c14ebd9715db583a8fcea54e1d965.def("copy", method_pointer_4330e08675f9510d872f35107628afa5, "");

}