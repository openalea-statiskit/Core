#include "_core.h"


namespace autowig
{
}


void wrapper_2f72e6e6db9a5498beee75dbafdc6393()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::ElementaryEvent< ::statiskit::CategoricalEvent >::*method_pointer_4e26718eccac501b8df486fa1f3acdfd)() const = &::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >::get_event;
    class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & (::statiskit::ElementaryEvent< ::statiskit::CategoricalEvent >::*method_pointer_7c7013198c995f5ebdd44973c327754f)() const = &::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >::get_value;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::ElementaryEvent< ::statiskit::CategoricalEvent >::*method_pointer_4dff64acce1b53f19212a1a618408503)() const = &::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >::copy;
    boost::python::class_< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent >, autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::Type, boost::python::bases< struct ::statiskit::CategoricalEvent > > class_2f72e6e6db9a5498beee75dbafdc6393("_ElementaryEvent_2f72e6e6db9a5498beee75dbafdc6393", "", boost::python::no_init);
    class_2f72e6e6db9a5498beee75dbafdc6393.def(boost::python::init< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const & >(""));
    class_2f72e6e6db9a5498beee75dbafdc6393.def(boost::python::init< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > const & >(""));
    class_2f72e6e6db9a5498beee75dbafdc6393.def("get_event", method_pointer_4e26718eccac501b8df486fa1f3acdfd, "");
    class_2f72e6e6db9a5498beee75dbafdc6393.def("get_value", method_pointer_7c7013198c995f5ebdd44973c327754f, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2f72e6e6db9a5498beee75dbafdc6393.def("copy", method_pointer_4dff64acce1b53f19212a1a618408503, "");

    if(autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::CategoricalEvent > >::Type, autowig::Held< struct ::statiskit::CategoricalEvent >::Type >();
    }

}