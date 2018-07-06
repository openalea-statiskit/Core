#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedUnivariateData const volatile * get_pointer<class ::statiskit::WeightedUnivariateData const volatile >(class ::statiskit::WeightedUnivariateData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_34d64090a84e51db9616a4cc540e43b8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::WeightedUnivariateData, autowig::Held< class ::statiskit::WeightedUnivariateData >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > > class_34d64090a84e51db9616a4cc540e43b8("WeightedUnivariateData", "", boost::python::no_init);
    class_34d64090a84e51db9616a4cc540e43b8.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_34d64090a84e51db9616a4cc540e43b8.def(boost::python::init< struct ::statiskit::UnivariateData const *, class ::std::vector< double, class ::std::allocator< double > > const & >(""));
    class_34d64090a84e51db9616a4cc540e43b8.def(boost::python::init< class ::statiskit::WeightedUnivariateData const & >(""));

    if(autowig::Held< class ::statiskit::WeightedUnivariateData >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedUnivariateData >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type >();
    }

}