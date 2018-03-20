#include "_core.h"



namespace autowig
{

    void method_decorator_3c033361e8395d97b8c82e69193a8311(class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator & instance, const struct ::statiskit::UnivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile >(class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6690633b82205104834e2688e6549e65()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_64ae6eddce405116ba534ed722881799 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__weighted_data_64ae6eddce405116ba534ed722881799");
    boost::python::object module_64ae6eddce405116ba534ed722881799(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_64ae6eddce405116ba534ed722881799.c_str()))));
    boost::python::scope().attr("__weighted_data_64ae6eddce405116ba534ed722881799") = module_64ae6eddce405116ba534ed722881799;
    boost::python::scope scope_64ae6eddce405116ba534ed722881799 = module_64ae6eddce405116ba534ed722881799;
    bool  (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_bdf0a2507b2c548795ab1967a6b8e596)() const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::is_valid;
    struct ::statiskit::UnivariateData::Generator & (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_3c033361e8395d97b8c82e69193a8311)() = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::operator++;
    struct ::statiskit::UnivariateEvent const * (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_44a0f8b8b1c752519ed3e7e513b0d1ed)() const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::event;
    double  (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_c23c6f7e18b05651ae98d9bd75a41289)() const = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::weight;
    void  (::statiskit::WeightedData< ::statiskit::UnivariateData >::Generator::*method_pointer_846983cd69f05156a63294108734944e)(double const &) = &::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator::weight;
    boost::python::class_< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::Type, boost::python::bases< struct ::statiskit::UnivariateData::Generator > > class_6690633b82205104834e2688e6549e65("Generator", "", boost::python::no_init);
    class_6690633b82205104834e2688e6549e65.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > * >(""));
    class_6690633b82205104834e2688e6549e65.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator const & >(""));
    class_6690633b82205104834e2688e6549e65.def("is_valid", method_pointer_bdf0a2507b2c548795ab1967a6b8e596, "");
    class_6690633b82205104834e2688e6549e65.def("__next__", method_pointer_3c033361e8395d97b8c82e69193a8311, boost::python::return_internal_reference<>(), "");
    class_6690633b82205104834e2688e6549e65.def("__next__", autowig::method_decorator_3c033361e8395d97b8c82e69193a8311);
    class_6690633b82205104834e2688e6549e65.def("event", method_pointer_44a0f8b8b1c752519ed3e7e513b0d1ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6690633b82205104834e2688e6549e65.def("weight", method_pointer_c23c6f7e18b05651ae98d9bd75a41289, "");
    class_6690633b82205104834e2688e6549e65.def("weight", method_pointer_846983cd69f05156a63294108734944e, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::UnivariateData >::Generator >::Type, autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type >();
    }

}