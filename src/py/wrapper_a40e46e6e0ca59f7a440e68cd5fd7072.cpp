#include "_core.h"



namespace autowig
{
    class Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 : public ::statiskit::MultivariateEvent, public boost::python::wrapper< struct ::statiskit::MultivariateEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual struct ::statiskit::UnivariateEvent const * get(::std::size_t const & param_0) const
            { return this->get_override("get")(param_0); }
            virtual ::std::size_t  size() const
            { return this->get_override("size")(); }

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 const volatile * get_pointer<autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 const volatile >(autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a40e46e6e0ca59f7a440e68cd5fd7072()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::MultivariateEvent::*method_pointer_b16ba67d442357de95884c2b80cd9413)() const = &::statiskit::MultivariateEvent::size;
    struct ::statiskit::UnivariateEvent const * (::statiskit::MultivariateEvent::*method_pointer_10a704d5992d559888ef502fa18a5a47)(::std::size_t const &) const = &::statiskit::MultivariateEvent::get;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateEvent::*method_pointer_ee0381fa29a75d5782f895a637e2a8d5)() const = &::statiskit::MultivariateEvent::copy;
    boost::python::class_< autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072, autowig::Held< autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 >::Type, boost::noncopyable > class_a40e46e6e0ca59f7a440e68cd5fd7072("MultivariateEvent", "", boost::python::no_init);
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("__len__", boost::python::pure_virtual(method_pointer_b16ba67d442357de95884c2b80cd9413), "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("get", boost::python::pure_virtual(method_pointer_10a704d5992d559888ef502fa18a5a47), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a40e46e6e0ca59f7a440e68cd5fd7072.def("copy", boost::python::pure_virtual(method_pointer_ee0381fa29a75d5782f895a637e2a8d5), "");
    if(autowig::Held< struct ::statiskit::MultivariateEvent >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateEvent >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateEvent, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateEvent >::Type, struct ::statiskit::MultivariateEvent > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a40e46e6e0ca59f7a440e68cd5fd7072 >::Type, autowig::Held< struct ::statiskit::MultivariateEvent >::Type >();
    }    

}