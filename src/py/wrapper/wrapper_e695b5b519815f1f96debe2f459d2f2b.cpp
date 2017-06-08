#include "_core.h"



namespace autowig
{
    class Wrap_e695b5b519815f1f96debe2f459d2f2b : public ::statiskit::UnivariateEvent, public boost::python::wrapper< struct ::statiskit::UnivariateEvent >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        
            virtual enum ::statiskit::event_type  get_event() const
            { return this->get_override("get_event")(); }
                        
            virtual enum ::statiskit::outcome_type  get_outcome() const
            { return this->get_override("get_outcome")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b const volatile * get_pointer<autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b const volatile >(autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateEvent const volatile * get_pointer<struct ::statiskit::UnivariateEvent const volatile >(struct ::statiskit::UnivariateEvent const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e695b5b519815f1f96debe2f459d2f2b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::UnivariateEvent::*method_pointer_68e98310906f5b1a8f388fded81a6acd)() const = &::statiskit::UnivariateEvent::get_outcome;
    enum ::statiskit::event_type  (::statiskit::UnivariateEvent::*method_pointer_3544ff3ce8685011b1261f19fcf546be)() const = &::statiskit::UnivariateEvent::get_event;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateEvent::*method_pointer_963689b729ca55bb9ee4a8fbb5e871c0)() const = &::statiskit::UnivariateEvent::copy;
    boost::python::class_< autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b, autowig::Held< autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b >::Type, boost::noncopyable > class_e695b5b519815f1f96debe2f459d2f2b("UnivariateEvent", "", boost::python::no_init);
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_outcome", boost::python::pure_virtual(method_pointer_68e98310906f5b1a8f388fded81a6acd), "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_event", boost::python::pure_virtual(method_pointer_3544ff3ce8685011b1261f19fcf546be), "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("copy", boost::python::pure_virtual(method_pointer_963689b729ca55bb9ee4a8fbb5e871c0), "");
    if(autowig::Held< struct ::statiskit::UnivariateEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e695b5b519815f1f96debe2f459d2f2b >::Type, autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
    }    

}