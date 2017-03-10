#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile * get_pointer<class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile >(class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ec5dee4e7cb5437b83047021c0ca63f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::RightCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_3c4eb46f95695d5baa7b11efefc9139a)() const = &::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >::get_event;
    int const & (::statiskit::RightCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_5bcc777112bb51c6833c3818579eae45)() const = &::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >::get_lower_bound;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::RightCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_ed31041bc1e0582e9a4370a6dd156044)() const = &::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >::copy;
    boost::python::class_< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_1ec5dee4e7cb5437b83047021c0ca63f("_RightCensoredEvent_1ec5dee4e7cb5437b83047021c0ca63f", "", boost::python::no_init);
    class_1ec5dee4e7cb5437b83047021c0ca63f.def(boost::python::init< int const & >(""));
    class_1ec5dee4e7cb5437b83047021c0ca63f.def(boost::python::init< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_1ec5dee4e7cb5437b83047021c0ca63f.def("get_event", method_pointer_3c4eb46f95695d5baa7b11efefc9139a, "");
    class_1ec5dee4e7cb5437b83047021c0ca63f.def("get_lower_bound", method_pointer_5bcc777112bb51c6833c3818579eae45, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_1ec5dee4e7cb5437b83047021c0ca63f.def("copy", method_pointer_ed31041bc1e0582e9a4370a6dd156044, "");

    if(autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, class ::statiskit::RightCensoredEvent< struct ::statiskit::DiscreteEvent > > > >();
    }

}