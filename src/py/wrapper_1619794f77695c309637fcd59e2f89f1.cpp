#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::WeightedUnivariateData const volatile * get_pointer<struct ::statiskit::WeightedUnivariateData const volatile >(struct ::statiskit::WeightedUnivariateData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1619794f77695c309637fcd59e2f89f1()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::WeightedUnivariateData, autowig::Held< struct ::statiskit::WeightedUnivariateData >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > > class_1619794f77695c309637fcd59e2f89f1("WeightedUnivariateData", "", boost::python::no_init);
    class_1619794f77695c309637fcd59e2f89f1.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_1619794f77695c309637fcd59e2f89f1.def(boost::python::init< struct ::statiskit::WeightedUnivariateData const & >(""));

    if(autowig::Held< struct ::statiskit::WeightedUnivariateData >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::WeightedUnivariateData >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::WeightedUnivariateData >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::WeightedUnivariateData, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::WeightedUnivariateData >::Type, struct ::statiskit::WeightedUnivariateData > > >();
    }

}