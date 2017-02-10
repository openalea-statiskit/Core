#include "_core.h"


namespace autowig
{
}


void wrapper_9981958281625422b3b46cea8ec85a6d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::ElementaryEvent< ::statiskit::ContinuousEvent >::*method_pointer_d673234fcece5f6ea4c7e43bb07ff976)() const = &::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >::get_event;
    double const & (::statiskit::ElementaryEvent< ::statiskit::ContinuousEvent >::*method_pointer_cf3d3c8e459955608a6e0dbb6112752a)() const = &::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >::get_value;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::ElementaryEvent< ::statiskit::ContinuousEvent >::*method_pointer_29d76caa8b605a378dbaa8558390d0b5)() const = &::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >::copy;
    boost::python::class_< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_9981958281625422b3b46cea8ec85a6d("_ElementaryEvent_9981958281625422b3b46cea8ec85a6d", "", boost::python::no_init);
    class_9981958281625422b3b46cea8ec85a6d.def(boost::python::init< double const & >(""));
    class_9981958281625422b3b46cea8ec85a6d.def(boost::python::init< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_9981958281625422b3b46cea8ec85a6d.def("get_event", method_pointer_d673234fcece5f6ea4c7e43bb07ff976, "");
    class_9981958281625422b3b46cea8ec85a6d.def("get_value", method_pointer_cf3d3c8e459955608a6e0dbb6112752a, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9981958281625422b3b46cea8ec85a6d.def("copy", method_pointer_29d76caa8b605a378dbaa8558390d0b5, "");

    if(autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ElementaryEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}