#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::UnivariateEvent const volatile * get_pointer<struct ::statiskit::UnivariateEvent const volatile >(struct ::statiskit::UnivariateEvent const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_e695b5b519815f1f96debe2f459d2f2b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::UnivariateEvent::*method_pointer_68e98310906f5b1a8f388fded81a6acd)() const = &::statiskit::UnivariateEvent::get_outcome;
    enum ::statiskit::event_type  (::statiskit::UnivariateEvent::*method_pointer_3544ff3ce8685011b1261f19fcf546be)() const = &::statiskit::UnivariateEvent::get_event;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateEvent::*method_pointer_963689b729ca55bb9ee4a8fbb5e871c0)() const = &::statiskit::UnivariateEvent::copy;
    boost::python::class_< struct ::statiskit::UnivariateEvent, autowig::Held< struct ::statiskit::UnivariateEvent >::Type, boost::noncopyable > class_e695b5b519815f1f96debe2f459d2f2b("UnivariateEvent", "", boost::python::no_init);
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_outcome", method_pointer_68e98310906f5b1a8f388fded81a6acd, "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("get_event", method_pointer_3544ff3ce8685011b1261f19fcf546be, "");
    class_e695b5b519815f1f96debe2f459d2f2b.def("copy", method_pointer_963689b729ca55bb9ee4a8fbb5e871c0, "");

}