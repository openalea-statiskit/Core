#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateData const volatile * get_pointer<struct ::statiskit::UnivariateData const volatile >(struct ::statiskit::UnivariateData const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_2513f8d88792503e97d2b3f6b8c31e6f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData::Generator, struct ::std::default_delete< struct ::statiskit::UnivariateData::Generator > >  (::statiskit::UnivariateData::*method_pointer_a33919ff84f759e6b649d1aea1a76e87)() const = &::statiskit::UnivariateData::generator;
    struct ::statiskit::UnivariateSampleSpace const * (::statiskit::UnivariateData::*method_pointer_21507917363a580db5491fa57b8df73d)() const = &::statiskit::UnivariateData::get_sample_space;
    void  (::statiskit::UnivariateData::*method_pointer_ead8fa7fbbe95407ad4908007c362c9b)() = &::statiskit::UnivariateData::lock;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::UnivariateData::*method_pointer_f924b25c6e335944a81f6073e12504ff)() const = &::statiskit::UnivariateData::copy;
    double  (::statiskit::UnivariateData::*method_pointer_e7311f0bb01b535d99e8bc70f058ae81)() const = &::statiskit::UnivariateData::compute_total;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateData::*method_pointer_cbae3054f1635d5ab0645054f8bbd45b)() const = &::statiskit::UnivariateData::compute_minimum;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateData::*method_pointer_6114a404726e5acdafff1da68ca6210d)() const = &::statiskit::UnivariateData::compute_maximum;
    boost::python::class_< struct ::statiskit::UnivariateData, autowig::Held< struct ::statiskit::UnivariateData >::Type, boost::noncopyable > class_2513f8d88792503e97d2b3f6b8c31e6f("UnivariateData", "", boost::python::no_init);
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("__iter__", method_pointer_a33919ff84f759e6b649d1aea1a76e87, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("get_sample_space", method_pointer_21507917363a580db5491fa57b8df73d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("lock", method_pointer_ead8fa7fbbe95407ad4908007c362c9b, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("copy", method_pointer_f924b25c6e335944a81f6073e12504ff, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_total", method_pointer_e7311f0bb01b535d99e8bc70f058ae81, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_minimum", method_pointer_cbae3054f1635d5ab0645054f8bbd45b, "");
    class_2513f8d88792503e97d2b3f6b8c31e6f.def("compute_maximum", method_pointer_6114a404726e5acdafff1da68ca6210d, "");

}