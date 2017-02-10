#include "_core.h"


namespace autowig
{
}


void wrapper_516b367be53955de9eab0d3bad339667()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::SetCensoredEvent< ::statiskit::CategoricalEvent >::*method_pointer_7068fd794ab85e76a6145c5f17a2a7bc)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent >::get_event;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::SetCensoredEvent< ::statiskit::CategoricalEvent >::*method_pointer_265430bbe3f15530bcdbed735c5e6082)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent >::get_values;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::SetCensoredEvent< ::statiskit::CategoricalEvent >::*method_pointer_944d141c945155dab419502e5944b537)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent >::copy;
    boost::python::class_< class ::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent >, autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent > >::Type, boost::python::bases< struct ::statiskit::CategoricalEvent > > class_516b367be53955de9eab0d3bad339667("_SetCensoredEvent_516b367be53955de9eab0d3bad339667", "", boost::python::no_init);
    class_516b367be53955de9eab0d3bad339667.def(boost::python::init< class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & >(""));
    class_516b367be53955de9eab0d3bad339667.def(boost::python::init< class ::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent > const & >(""));
    class_516b367be53955de9eab0d3bad339667.def("get_event", method_pointer_7068fd794ab85e76a6145c5f17a2a7bc, "");
    class_516b367be53955de9eab0d3bad339667.def("get_values", method_pointer_265430bbe3f15530bcdbed735c5e6082, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_516b367be53955de9eab0d3bad339667.def("copy", method_pointer_944d141c945155dab419502e5944b537, "");

    if(autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::CategoricalEvent > >::Type, autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
    }

}