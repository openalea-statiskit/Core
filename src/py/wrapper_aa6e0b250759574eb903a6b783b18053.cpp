#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa6e0b250759574eb903a6b783b18053()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::LeftCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_26f278f5e7fc5fb7acd2b935064c9906)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >::get_event;
    double const & (::statiskit::LeftCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_13a2fa63820b597ab14a608d2f621651)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >::get_upper_bound;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::LeftCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_a2b2f644cee3588a8d8eb02556a829c1)() const = &::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >::copy;
    boost::python::class_< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_aa6e0b250759574eb903a6b783b18053("_LeftCensoredEvent_aa6e0b250759574eb903a6b783b18053", "", boost::python::no_init);
    class_aa6e0b250759574eb903a6b783b18053.def(boost::python::init< double const & >(""));
    class_aa6e0b250759574eb903a6b783b18053.def(boost::python::init< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_aa6e0b250759574eb903a6b783b18053.def("get_event", method_pointer_26f278f5e7fc5fb7acd2b935064c9906, "");
    class_aa6e0b250759574eb903a6b783b18053.def("get_upper_bound", method_pointer_13a2fa63820b597ab14a608d2f621651, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_aa6e0b250759574eb903a6b783b18053.def("copy", method_pointer_a2b2f644cee3588a8d8eb02556a829c1, "");

    if(autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, class ::statiskit::LeftCensoredEvent< struct ::statiskit::ContinuousEvent > > > >();
    }

}