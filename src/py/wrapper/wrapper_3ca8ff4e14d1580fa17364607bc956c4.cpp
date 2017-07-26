#include "_core.h"



namespace autowig
{
    class Wrap_3ca8ff4e14d1580fa17364607bc956c4 : public ::statiskit::Schedule, public boost::python::wrapper< struct ::statiskit::Schedule >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > > (result);
            }
                        
            virtual double  operator()(double const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4 const volatile * get_pointer<autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4 const volatile >(autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4 const volatile *c) { return c; }
    template <> struct ::statiskit::Schedule const volatile * get_pointer<struct ::statiskit::Schedule const volatile >(struct ::statiskit::Schedule const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3ca8ff4e14d1580fa17364607bc956c4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double  (::statiskit::Schedule::*method_pointer_004876688c73571590d218338cd011b5)(double const &) const = &::statiskit::Schedule::operator();
    class ::std::unique_ptr< struct ::statiskit::Schedule, struct ::std::default_delete< struct ::statiskit::Schedule > >  (::statiskit::Schedule::*method_pointer_7b1ce88d04fc5ffb8e9402122cfa4883)() const = &::statiskit::Schedule::copy;
    boost::python::class_< autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4, autowig::Held< autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4 >::Type, boost::noncopyable > class_3ca8ff4e14d1580fa17364607bc956c4("Schedule", "", boost::python::no_init);
    class_3ca8ff4e14d1580fa17364607bc956c4.def("__call__", boost::python::pure_virtual(method_pointer_004876688c73571590d218338cd011b5), "");
    class_3ca8ff4e14d1580fa17364607bc956c4.def("copy", boost::python::pure_virtual(method_pointer_7b1ce88d04fc5ffb8e9402122cfa4883), "");
    if(autowig::Held< struct ::statiskit::Schedule >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3ca8ff4e14d1580fa17364607bc956c4 >::Type, autowig::Held< struct ::statiskit::Schedule >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::Schedule >::Type >();
    }    

}