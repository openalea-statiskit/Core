#include "_core.h"


namespace autowig
{
}


void wrapper_d5c0906184075a469643a8454f5d983a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::SetCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_4092fde004ae5f3586c7dd256d752043)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent >::get_event;
    class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & (::statiskit::SetCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_335260f819c4560093e38a1294efeda8)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent >::get_values;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::SetCensoredEvent< ::statiskit::DiscreteEvent >::*method_pointer_702b1cc4176f5a18859645c6987ab551)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent >::copy;
    boost::python::class_< class ::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent >, autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, boost::python::bases< struct ::statiskit::DiscreteEvent > > class_d5c0906184075a469643a8454f5d983a("_SetCensoredEvent_d5c0906184075a469643a8454f5d983a", "", boost::python::no_init);
    class_d5c0906184075a469643a8454f5d983a.def(boost::python::init< class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & >(""));
    class_d5c0906184075a469643a8454f5d983a.def(boost::python::init< class ::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent > const & >(""));
    class_d5c0906184075a469643a8454f5d983a.def("get_event", method_pointer_4092fde004ae5f3586c7dd256d752043, "");
    class_d5c0906184075a469643a8454f5d983a.def("get_values", method_pointer_335260f819c4560093e38a1294efeda8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_d5c0906184075a469643a8454f5d983a.def("copy", method_pointer_702b1cc4176f5a18859645c6987ab551, "");

    if(autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::DiscreteEvent > >::Type, autowig::Held< struct ::statiskit::DiscreteEvent >::Type >();
    }

}