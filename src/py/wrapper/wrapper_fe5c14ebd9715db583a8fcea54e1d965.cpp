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
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::WeightedMultivariateData::*method_pointer_821db0f89134517cbf08f50969c41dc8)(::statiskit::Indices const &) const = &::statiskit::WeightedMultivariateData::extract;
    boost::python::class_< class ::statiskit::WeightedMultivariateData, autowig::Held< class ::statiskit::WeightedMultivariateData >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > > > class_fe5c14ebd9715db583a8fcea54e1d965("WeightedMultivariateData", "", boost::python::no_init);
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_fe5c14ebd9715db583a8fcea54e1d965.def(boost::python::init< class ::statiskit::WeightedMultivariateData const & >(""));
    class_fe5c14ebd9715db583a8fcea54e1d965.def("extract", method_pointer_ecd4b9cfc90c5afb9956da624c039e6f, "");
    class_fe5c14ebd9715db583a8fcea54e1d965.def("extract", method_pointer_821db0f89134517cbf08f50969c41dc8, "");

    if(autowig::Held< class ::statiskit::WeightedMultivariateData >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedMultivariateData >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > >::Type >();
    }

}