#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325 const volatile * get_pointer<autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325 const volatile >(autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325 const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_39737fb8eb785c29bb3a9eca8ab9e325 : public ::statiskit::UnivariateData::Generator, public boost::python::wrapper< struct ::statiskit::UnivariateData::Generator >
    {
        public:
            
            virtual double  weight() const
            { return this->get_override("weight")(); }
            virtual struct ::statiskit::UnivariateEvent const * event() const
            { return this->get_override("event")(); }
            virtual struct ::statiskit::UnivariateData::Generator & operator++() 
            { return this->get_override("operator++")(); }
            virtual bool  is_valid() const
            { return this->get_override("is_valid")(); }

        protected:
            

        private:
            

    };

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
    bool  (::statiskit::UnivariateData::Generator::*method_pointer_ef9b151802e1543cb7c98d1c40761fbe)() const = &::statiskit::UnivariateData::Generator::is_valid;
    struct ::statiskit::UnivariateData::Generator & (::statiskit::UnivariateData::Generator::*method_pointer_de48c02aa8db50929f6a3f8784c2ec4d)() = &::statiskit::UnivariateData::Generator::operator++;
    struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateData::Generator::*method_pointer_06724bc676b252b98a07b30de6e65bee)() const = &::statiskit::UnivariateData::Generator::event;
    double  (::statiskit::UnivariateData::Generator::*method_pointer_1aba7220d8185b52a1202c2468b95edb)() const = &::statiskit::UnivariateData::Generator::weight;
    boost::python::class_< autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325, autowig::Held< autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325 >::Type, boost::noncopyable > class_39737fb8eb785c29bb3a9eca8ab9e325("Generator", "", boost::python::no_init);
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("is_valid", boost::python::pure_virtual(method_pointer_ef9b151802e1543cb7c98d1c40761fbe), "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", boost::python::pure_virtual(method_pointer_de48c02aa8db50929f6a3f8784c2ec4d), boost::python::return_internal_reference<>(), "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("__next__", autowig::method_decorator_de48c02aa8db50929f6a3f8784c2ec4d);
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("event", boost::python::pure_virtual(method_pointer_06724bc676b252b98a07b30de6e65bee), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_39737fb8eb785c29bb3a9eca8ab9e325.def("weight", boost::python::pure_virtual(method_pointer_1aba7220d8185b52a1202c2468b95edb), "");
    if(autowig::Held< struct ::statiskit::UnivariateData::Generator >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::UnivariateData::Generator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type, struct ::statiskit::UnivariateData::Generator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_39737fb8eb785c29bb3a9eca8ab9e325 >::Type, autowig::Held< struct ::statiskit::UnivariateData::Generator >::Type >();
    }    

}