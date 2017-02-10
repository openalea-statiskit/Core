#include "_core.h"


namespace autowig
{
}


void wrapper_a40e46e6e0ca59f7a440e68cd5fd7072()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::size_t  (::statiskit::MultivariateEvent::*method_pointer_b16ba67d442357de95884c2b80cd9413)() const = &::statiskit::MultivariateEvent::size;
    struct ::statiskit::UnivariateEvent const * (::statiskit::MultivariateEvent::*method_pointer_10a704d5992d559888ef502fa18a5a47)(::size_t const &) const = &::statiskit::MultivariateEvent::get;
    void  (::statiskit::MultivariateEvent::*method_pointer_c20270d688a1564fa4f3606b835b8265)(::size_t const &, struct ::statiskit::UnivariateEvent const *) = &::statiskit::MultivariateEvent::set;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateEvent::*method_pointer_ee0381fa29a75d5782f895a637e2a8d5)() const = &::statiskit::MultivariateEvent::copy;
    boost::python::class_< struct ::statiskit::MultivariateEvent, autowig::Held< struct ::statiskit::MultivariateEvent >::Type, boost::noncopyable > class_a40e46e6e0ca59f7a440e68cd5fd7072("MultivariateEvent", "", boost::python::no_init);
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("__len__", method_pointer_b16ba67d442357de95884c2b80cd9413, "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("get", method_pointer_10a704d5992d559888ef502fa18a5a47, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("set", method_pointer_c20270d688a1564fa4f3606b835b8265, "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("copy", method_pointer_ee0381fa29a75d5782f895a637e2a8d5, "");

}