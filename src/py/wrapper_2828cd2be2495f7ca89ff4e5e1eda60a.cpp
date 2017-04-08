#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2828cd2be2495f7ca89ff4e5e1eda60a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::PolymorphicCopy< ::statiskit::UnivariateData, ::statiskit::WeightedUnivariateData, ::statiskit::WeightedData< ::statiskit::UnivariateData > >::*method_pointer_043a3a34c177516e8b6d97d9e67f6536)() const = &::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::copy;
    boost::python::class_< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, boost::python::bases< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > class_2828cd2be2495f7ca89ff4e5e1eda60a("_PolymorphicCopy_2828cd2be2495f7ca89ff4e5e1eda60a", "", boost::python::no_init);
    class_2828cd2be2495f7ca89ff4e5e1eda60a.def(boost::python::init<  >(""));
    class_2828cd2be2495f7ca89ff4e5e1eda60a.def("copy", method_pointer_043a3a34c177516e8b6d97d9e67f6536, "");

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, struct ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > > > >();
    }

}