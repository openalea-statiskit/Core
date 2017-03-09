#include "_core.h"



namespace autowig
{
    class Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 : public ::statiskit::DiscreteSampleSpace, public boost::python::wrapper< struct ::statiskit::DiscreteSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile * get_pointer<autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile >(autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6588548f29e15f0ea6e9ef29ce68dfd8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::DiscreteSampleSpace::*method_pointer_ef088c60e12c52ca84b4af897e2a354b)() const = &::statiskit::DiscreteSampleSpace::get_outcome;
    enum ::statiskit::ordering_type  (::statiskit::DiscreteSampleSpace::*method_pointer_1c79f8878a485dcf8ba547f4277ceac9)() const = &::statiskit::DiscreteSampleSpace::get_ordering;
    boost::python::class_< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8, autowig::Held< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 >::Type, boost::python::bases< struct ::statiskit::UnivariateSampleSpace >, boost::noncopyable > class_6588548f29e15f0ea6e9ef29ce68dfd8("DiscreteSampleSpace", "", boost::python::no_init);
    class_6588548f29e15f0ea6e9ef29ce68dfd8.def("get_outcome", method_pointer_ef088c60e12c52ca84b4af897e2a354b, "");
    class_6588548f29e15f0ea6e9ef29ce68dfd8.def("get_ordering", method_pointer_1c79f8878a485dcf8ba547f4277ceac9, "");

    if(autowig::Held< struct ::statiskit::DiscreteSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteSampleSpace, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type, struct ::statiskit::DiscreteSampleSpace > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6588548f29e15f0ea6e9ef29ce68dfd8 >::Type, autowig::Held< struct ::statiskit::DiscreteSampleSpace >::Type >();
    }

}