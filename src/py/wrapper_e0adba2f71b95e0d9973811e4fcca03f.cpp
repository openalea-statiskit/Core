#include "_core.h"


namespace autowig
{
}


void wrapper_e0adba2f71b95e0d9973811e4fcca03f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::SetCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_07b9bc9c1ac856219eec400d2d8e0e92)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent >::get_event;
    class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & (::statiskit::SetCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_2a225ea13c96584e8891392e8f3dd1c4)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent >::get_values;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::SetCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_31f4760692d35764aed55c9962be77bd)() const = &::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent >::copy;
    boost::python::class_< class ::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_e0adba2f71b95e0d9973811e4fcca03f("_SetCensoredEvent_e0adba2f71b95e0d9973811e4fcca03f", "", boost::python::no_init);
    class_e0adba2f71b95e0d9973811e4fcca03f.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const & >(""));
    class_e0adba2f71b95e0d9973811e4fcca03f.def(boost::python::init< class ::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_e0adba2f71b95e0d9973811e4fcca03f.def("get_event", method_pointer_07b9bc9c1ac856219eec400d2d8e0e92, "");
    class_e0adba2f71b95e0d9973811e4fcca03f.def("get_values", method_pointer_2a225ea13c96584e8891392e8f3dd1c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e0adba2f71b95e0d9973811e4fcca03f.def("copy", method_pointer_31f4760692d35764aed55c9962be77bd, "");

    if(autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SetCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}