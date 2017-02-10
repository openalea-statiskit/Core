#include "_core.h"


namespace autowig
{
}


void wrapper_cf0179fb6c94524589e450e5bcacc532()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::CategoricalEvent::*method_pointer_6be7c81ad3ae5c77a462d7101baa7329)() const = &::statiskit::CategoricalEvent::get_outcome;
    boost::python::class_< struct ::statiskit::CategoricalEvent, autowig::Held< struct ::statiskit::CategoricalEvent >::Type, boost::python::bases< struct ::statiskit::UnivariateEvent >, boost::noncopyable > class_cf0179fb6c94524589e450e5bcacc532("CategoricalEvent", "", boost::python::no_init);
    class_cf0179fb6c94524589e450e5bcacc532.def("get_outcome", method_pointer_6be7c81ad3ae5c77a462d7101baa7329, "");

    if(autowig::Held< struct ::statiskit::CategoricalEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalEvent >::Type, autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
    }

}