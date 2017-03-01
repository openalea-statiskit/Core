#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MultivariateData::Generator const volatile * get_pointer<struct ::statiskit::MultivariateData::Generator const volatile >(struct ::statiskit::MultivariateData::Generator const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_63b969fdfda0571a865b8fd09d42ff6f(struct ::statiskit::MultivariateData::Generator & instance, struct ::statiskit::MultivariateData::Generator & param_out)     { instance.operator++() = param_out; }
}


void wrapper_98e77d2afcc252cba528077bc2cc3103()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_88cb53c05b215504b1f0ee0564765af0 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_data");
    boost::python::object module_88cb53c05b215504b1f0ee0564765af0(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_88cb53c05b215504b1f0ee0564765af0.c_str()))));
    boost::python::scope().attr("_multivariate_data") = module_88cb53c05b215504b1f0ee0564765af0;
    boost::python::scope scope_88cb53c05b215504b1f0ee0564765af0 = module_88cb53c05b215504b1f0ee0564765af0;
    bool  (::statiskit::MultivariateData::Generator::*method_pointer_d3e757b7d5b05c689e6686d4856df74c)() const = &::statiskit::MultivariateData::Generator::is_valid;
    struct ::statiskit::MultivariateData::Generator & (::statiskit::MultivariateData::Generator::*method_pointer_63b969fdfda0571a865b8fd09d42ff6f)() = &::statiskit::MultivariateData::Generator::operator++;
    struct ::statiskit::MultivariateEvent const * (::statiskit::MultivariateData::Generator::*method_pointer_8c2339dd565653b4a935b28162423031)() const = &::statiskit::MultivariateData::Generator::event;
    double  (::statiskit::MultivariateData::Generator::*method_pointer_97dd3ac3ad43541faf4f468d1c840930)() const = &::statiskit::MultivariateData::Generator::weight;
    boost::python::class_< struct ::statiskit::MultivariateData::Generator, autowig::Held< struct ::statiskit::MultivariateData::Generator >::Type, boost::noncopyable > class_98e77d2afcc252cba528077bc2cc3103("Generator", "", boost::python::no_init);
    class_98e77d2afcc252cba528077bc2cc3103.def("is_valid", method_pointer_d3e757b7d5b05c689e6686d4856df74c, "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", method_pointer_63b969fdfda0571a865b8fd09d42ff6f, boost::python::return_internal_reference<>(), "");
    class_98e77d2afcc252cba528077bc2cc3103.def("__next__", autowig::method_decorator_63b969fdfda0571a865b8fd09d42ff6f);
    class_98e77d2afcc252cba528077bc2cc3103.def("event", method_pointer_8c2339dd565653b4a935b28162423031, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_98e77d2afcc252cba528077bc2cc3103.def("weight", method_pointer_97dd3ac3ad43541faf4f468d1c840930, "");

}