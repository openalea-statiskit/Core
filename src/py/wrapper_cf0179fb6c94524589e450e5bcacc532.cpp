#include "_core.h"



namespace autowig
{
    class Wrap_cf0179fb6c94524589e450e5bcacc532 : public ::statiskit::CategoricalEvent, public boost::python::wrapper< struct ::statiskit::CategoricalEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_cf0179fb6c94524589e450e5bcacc532 const volatile * get_pointer<autowig::Wrap_cf0179fb6c94524589e450e5bcacc532 const volatile >(autowig::Wrap_cf0179fb6c94524589e450e5bcacc532 const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalEvent const volatile * get_pointer<struct ::statiskit::CategoricalEvent const volatile >(struct ::statiskit::CategoricalEvent const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cf0179fb6c94524589e450e5bcacc532()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::CategoricalEvent::*method_pointer_6be7c81ad3ae5c77a462d7101baa7329)() const = &::statiskit::CategoricalEvent::get_outcome;
    boost::python::class_< autowig::Wrap_cf0179fb6c94524589e450e5bcacc532, autowig::Held< autowig::Wrap_cf0179fb6c94524589e450e5bcacc532 >::Type, boost::python::bases< struct ::statiskit::UnivariateEvent >, boost::noncopyable > class_cf0179fb6c94524589e450e5bcacc532("CategoricalEvent", "", boost::python::no_init);
    class_cf0179fb6c94524589e450e5bcacc532.def("get_outcome", method_pointer_6be7c81ad3ae5c77a462d7101baa7329, "");

    if(autowig::Held< struct ::statiskit::CategoricalEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_cf0179fb6c94524589e450e5bcacc532 >::Type, autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalEvent >::Type, autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalEvent >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalEvent, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalEvent >::Type, struct ::statiskit::CategoricalEvent > > >();
    }

}