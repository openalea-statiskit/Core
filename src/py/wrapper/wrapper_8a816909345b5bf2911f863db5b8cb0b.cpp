#include "_core.h"



namespace autowig
{

    void method_decorator_e67ce4efa9f9522486ec19db7c4512b6(class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator & instance, const struct ::statiskit::MultivariateData::Generator & param_out) { instance.operator++() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile * get_pointer<class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile >(class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8a816909345b5bf2911f863db5b8cb0b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5b5f1c1f4aa852eab398cea6df20fee2 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__weighted_data_5b5f1c1f4aa852eab398cea6df20fee2");
    boost::python::object module_5b5f1c1f4aa852eab398cea6df20fee2(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5b5f1c1f4aa852eab398cea6df20fee2.c_str()))));
    boost::python::scope().attr("__weighted_data_5b5f1c1f4aa852eab398cea6df20fee2") = module_5b5f1c1f4aa852eab398cea6df20fee2;
    boost::python::scope scope_5b5f1c1f4aa852eab398cea6df20fee2 = module_5b5f1c1f4aa852eab398cea6df20fee2;
    bool  (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_c80ad89af9635b4fa900aa95489f4e59)() const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::is_valid;
    struct ::statiskit::MultivariateData::Generator & (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_e67ce4efa9f9522486ec19db7c4512b6)() = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::operator++;
    struct ::statiskit::MultivariateEvent const * (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_3434f42774e5550db359167e21df4011)() const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::event;
    double  (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_ff76fe92f0af53ab9c383028c098cdad)() const = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::weight;
    void  (::statiskit::WeightedData< ::statiskit::MultivariateData >::Generator::*method_pointer_29ca89a65c145b51b49d5ff023beda12)(double const &) = &::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator::weight;
    boost::python::class_< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator, autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::Type, boost::python::bases< struct ::statiskit::MultivariateData::Generator > > class_8a816909345b5bf2911f863db5b8cb0b("Generator", "", boost::python::no_init);
    class_8a816909345b5bf2911f863db5b8cb0b.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > * >(""));
    class_8a816909345b5bf2911f863db5b8cb0b.def(boost::python::init< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator const & >(""));
    class_8a816909345b5bf2911f863db5b8cb0b.def("is_valid", method_pointer_c80ad89af9635b4fa900aa95489f4e59, "");
    class_8a816909345b5bf2911f863db5b8cb0b.def("__next__", method_pointer_e67ce4efa9f9522486ec19db7c4512b6, boost::python::return_internal_reference<>(), "");
    class_8a816909345b5bf2911f863db5b8cb0b.def("__next__", autowig::method_decorator_e67ce4efa9f9522486ec19db7c4512b6);
    class_8a816909345b5bf2911f863db5b8cb0b.def("event", method_pointer_3434f42774e5550db359167e21df4011, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8a816909345b5bf2911f863db5b8cb0b.def("weight", method_pointer_ff76fe92f0af53ab9c383028c098cdad, "");
    class_8a816909345b5bf2911f863db5b8cb0b.def("weight", method_pointer_29ca89a65c145b51b49d5ff023beda12, "");

    if(autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::WeightedData< struct ::statiskit::MultivariateData >::Generator >::Type, autowig::Held< struct ::statiskit::MultivariateData::Generator >::Type >();
    }

}