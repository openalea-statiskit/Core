#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristic const volatile * get_pointer<class ::statiskit::SlopeHeuristic const volatile >(class ::statiskit::SlopeHeuristic const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_f5729db8e15254f8b7481092212bac64()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::SlopeHeuristic::*method_pointer_6acd82e3139651f6bb4fda0c61390fe4)() const = &::statiskit::SlopeHeuristic::size;
    double const & (::statiskit::SlopeHeuristic::*method_pointer_2e471d76c8745eb99548f18746240833)(::std::size_t const &) const = &::statiskit::SlopeHeuristic::get_score;
    double const & (::statiskit::SlopeHeuristic::*method_pointer_9e3292f2e6485ab6b444782428a714d6)(::std::size_t const &) const = &::statiskit::SlopeHeuristic::get_penshape;
    double const & (::statiskit::SlopeHeuristic::*method_pointer_8a551f5f27b45131836ec42e3396c1bf)(::std::size_t const &) const = &::statiskit::SlopeHeuristic::get_intercept;
    double const & (::statiskit::SlopeHeuristic::*method_pointer_848c00a01904516e96b52ed99db86e33)(::std::size_t const &) const = &::statiskit::SlopeHeuristic::get_slope;
    ::std::size_t const & (::statiskit::SlopeHeuristic::*method_pointer_21d48bb2676356bba155828d34a968eb)(::std::size_t const &) const = &::statiskit::SlopeHeuristic::get_selected;
    boost::python::class_< class ::statiskit::SlopeHeuristic, autowig::Held< class ::statiskit::SlopeHeuristic >::Type > class_f5729db8e15254f8b7481092212bac64("SlopeHeuristic", "", boost::python::no_init);
    class_f5729db8e15254f8b7481092212bac64.def(boost::python::init<  >(""));
    class_f5729db8e15254f8b7481092212bac64.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const & >(""));
    class_f5729db8e15254f8b7481092212bac64.def(boost::python::init< class ::statiskit::SlopeHeuristic const & >(""));
    class_f5729db8e15254f8b7481092212bac64.def("__len__", method_pointer_6acd82e3139651f6bb4fda0c61390fe4, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_score", method_pointer_2e471d76c8745eb99548f18746240833, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5729db8e15254f8b7481092212bac64.def("get_penshape", method_pointer_9e3292f2e6485ab6b444782428a714d6, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5729db8e15254f8b7481092212bac64.def("get_intercept", method_pointer_8a551f5f27b45131836ec42e3396c1bf, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5729db8e15254f8b7481092212bac64.def("get_slope", method_pointer_848c00a01904516e96b52ed99db86e33, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f5729db8e15254f8b7481092212bac64.def("get_selected", method_pointer_21d48bb2676356bba155828d34a968eb, boost::python::return_value_policy< boost::python::return_by_value >(), "");

}