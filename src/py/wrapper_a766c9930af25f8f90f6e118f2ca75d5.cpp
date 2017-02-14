#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile * get_pointer<class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile >(class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_a766c9930af25f8f90f6e118f2ca75d5()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::event_type  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_0d3bac0298ed5fbc98fe72d36e6aa5fc)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_event;
    struct ::std::pair< double, double > const & (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_6ed4da48d02655acbc57f8eb67c518c4)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_bounds;
    double const & (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_9a8b6edb1f21504f9f2680be39fdd1fb)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_lower_bound;
    double const & (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_dbd5603d435f5066a09971ca1c7617a1)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_upper_bound;
    double  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_793dc5df0a22533e88ca8334e32dc15d)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_range;
    double  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_2f4770a16d775822b7250bbff78761f3)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::get_center;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::IntervalCensoredEvent< ::statiskit::ContinuousEvent >::*method_pointer_c5e783e4d00a503495350859c6e83470)() const = &::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >::copy;
    boost::python::class_< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent >, autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, boost::python::bases< struct ::statiskit::ContinuousEvent > > class_a766c9930af25f8f90f6e118f2ca75d5("_IntervalCensoredEvent_a766c9930af25f8f90f6e118f2ca75d5", "", boost::python::no_init);
    class_a766c9930af25f8f90f6e118f2ca75d5.def(boost::python::init< double const &, double const & >(""));
    class_a766c9930af25f8f90f6e118f2ca75d5.def(boost::python::init< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > const & >(""));
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_event", method_pointer_0d3bac0298ed5fbc98fe72d36e6aa5fc, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_bounds", method_pointer_6ed4da48d02655acbc57f8eb67c518c4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_lower_bound", method_pointer_9a8b6edb1f21504f9f2680be39fdd1fb, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_upper_bound", method_pointer_dbd5603d435f5066a09971ca1c7617a1, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_range", method_pointer_793dc5df0a22533e88ca8334e32dc15d, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("get_center", method_pointer_2f4770a16d775822b7250bbff78761f3, "");
    class_a766c9930af25f8f90f6e118f2ca75d5.def("copy", method_pointer_c5e783e4d00a503495350859c6e83470, "");

    if(autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IntervalCensoredEvent< struct ::statiskit::ContinuousEvent > >::Type, autowig::Held< struct ::statiskit::ContinuousEvent >::Type >();
    }

}