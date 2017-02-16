#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::DiscreteEvent const volatile * get_pointer<struct ::statiskit::DiscreteEvent const volatile >(struct ::statiskit::DiscreteEvent const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_3ae69567ec205969a9f2da364450fd2e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::DiscreteEvent::*method_pointer_587534d25215580ca64d3f38a0595f62)() const = &::statiskit::DiscreteEvent::get_outcome;
    boost::python::class_< struct ::statiskit::DiscreteEvent, autowig::Held< struct ::statiskit::DiscreteEvent >::Type, boost::python::bases< struct ::statiskit::UnivariateEvent >, boost::noncopyable > class_3ae69567ec205969a9f2da364450fd2e("DiscreteEvent", "", boost::python::no_init);
    class_3ae69567ec205969a9f2da364450fd2e.def("get_outcome", method_pointer_587534d25215580ca64d3f38a0595f62, "");

    if(autowig::Held< struct ::statiskit::DiscreteEvent >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteEvent >::Type, autowig::Held< struct ::statiskit::UnivariateEvent >::Type >();
    }

}