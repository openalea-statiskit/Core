#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::ContinuousEvent const volatile * get_pointer<struct ::statiskit::ContinuousEvent const volatile >(struct ::statiskit::ContinuousEvent const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_69ca358c24cd5cabb1a6b9e1358519e4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::ContinuousEvent::*method_pointer_e273d319eb365120b28ccc9993bd199b)() const = &::statiskit::ContinuousEvent::get_outcome;
    boost::python::class_< struct ::statiskit::ContinuousEvent, autowig::Held< struct ::statiskit::ContinuousEvent >::Type, boost::python::bases< struct ::statiskit::UnivariateEvent >, boost::noncopyable > class_69ca358c24cd5cabb1a6b9e1358519e4("ContinuousEvent", "", boost::python::no_init);
    class_69ca358c24cd5cabb1a6b9e1358519e4.def("get_outcome", method_pointer_e273d319eb365120b28ccc9993bd199b, "");

    if(autowig::Held< struct ::statiskit::ContinuousEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousEvent >::Type, autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
    }

}