#include "_core.h"


namespace autowig
{
    void method_decorator_de48c02aa8db50929f6a3f8784c2ec4d(struct ::statiskit::UnivariateData::Generator & instance, struct ::statiskit::UnivariateData::Generator & param_out)     { instance.operator++() = param_out; }
}


void wrapper_39737fb8eb785c29bb3a9eca8ab9e325()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_2513f8d88792503e97d2b3f6b8c31e6f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_data");
    boost::python::object module_2513f8d88792503e97d2b3f6b8c31e6f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_2513f8d88792503e97d2b3f6b8c31e6f.c_str()))));
    boost::python::scope().attr("_univariate_data") = module_2513f8d88792503e97d2b3f6b8c31e6f;
    boost::python::scope scope_2513f8d88792503e97d2b3f6b8c31e6f = module_2513f8d88792503e97d2b3f6b8c31e6f;
    struct ::statiskit::UnivariateData::Generator & (::statiskit::UnivariateData::Generator::*method_pointer_de48c02aa8db50929f6a3f8784c2ec4d)() = &::statiskit::UnivariateData::Generator::operator++;
    struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateData::Generator::*method_pointer_06724bc676b252b98a07b30de6e65bee)() const = &::statiskit::UnivariateData::Generator::event;
    double  (::statiskit::UnivariateData::Generator::*method_pointer_1aba7220d8185b52a1202c2468b95edb)() const = &::statiskit::UnivariateData::Generator::weight;
    boost::python::class_< struct ::statiskit::UnivariateData::Generator, autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type, boost::noncopyable > class_39737fb8eb785c29bb3a9eca8ab9e325("Generator", "", boost::python::no_init);
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", method_pointer_de48c02aa8db50929f6a3f8784c2ec4d, boost::python::return_internal_reference<>(), "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", autowig::method_decorator_de48c02aa8db50929f6a3f8784c2ec4d);
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("event", method_pointer_06724bc676b252b98a07b30de6e65bee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("weight", method_pointer_1aba7220d8185b52a1202c2468b95edb, "");

}