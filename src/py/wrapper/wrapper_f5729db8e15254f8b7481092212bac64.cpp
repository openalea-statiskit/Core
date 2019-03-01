#include "_core.h"

::statiskit::Index  (::statiskit::SlopeHeuristic::*method_pointer_6acd82e3139651f6bb4fda0c61390fe4)()const= &::statiskit::SlopeHeuristic::size;
double const & (::statiskit::SlopeHeuristic::*method_pointer_2e471d76c8745eb99548f18746240833)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::get_score;
double const & (::statiskit::SlopeHeuristic::*method_pointer_9e3292f2e6485ab6b444782428a714d6)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::get_penshape;
double const & (::statiskit::SlopeHeuristic::*method_pointer_8a551f5f27b45131836ec42e3396c1bf)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::get_intercept;
double const & (::statiskit::SlopeHeuristic::*method_pointer_848c00a01904516e96b52ed99db86e33)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::get_slope;
::statiskit::Index const & (::statiskit::SlopeHeuristic::*method_pointer_21d48bb2676356bba155828d34a968eb)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::get_selected;
double  (::statiskit::SlopeHeuristic::*method_pointer_ca7e50a0ee0055779942168ff8bbb90d)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristic::compute_r_squared;
class ::statiskit::SlopeHeuristicSolver * (::statiskit::SlopeHeuristic::*method_pointer_49570b7e451651c88eb14edb28d35000)()= &::statiskit::SlopeHeuristic::get_solver;
void  (::statiskit::SlopeHeuristic::*method_pointer_54f04505d30f5515a7d5b34f43dc8acb)(class ::statiskit::SlopeHeuristicSolver const &)= &::statiskit::SlopeHeuristic::set_solver;
struct ::statiskit::SlopeHeuristicSelector * (::statiskit::SlopeHeuristic::*method_pointer_e9870cf22bb95d2c9061c6edadaae9b2)()= &::statiskit::SlopeHeuristic::get_selector;
void  (::statiskit::SlopeHeuristic::*method_pointer_198871d5e5275f1f879645381d7071a9)(struct ::statiskit::SlopeHeuristicSelector const &)= &::statiskit::SlopeHeuristic::set_selector;

namespace autowig {
}

void wrapper_f5729db8e15254f8b7481092212bac64(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristic, autowig::HolderType< class ::statiskit::SlopeHeuristic >::Type > class_f5729db8e15254f8b7481092212bac64(module, "SlopeHeuristic", "");
    class_f5729db8e15254f8b7481092212bac64.def(pybind11::init<  >());
    class_f5729db8e15254f8b7481092212bac64.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const & >());
    class_f5729db8e15254f8b7481092212bac64.def(pybind11::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const &, class ::statiskit::SlopeHeuristicSolver const &, struct ::statiskit::SlopeHeuristicSelector const & >());
    class_f5729db8e15254f8b7481092212bac64.def(pybind11::init< class ::statiskit::SlopeHeuristic const & >());
    class_f5729db8e15254f8b7481092212bac64.def("__len__", method_pointer_6acd82e3139651f6bb4fda0c61390fe4, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_score", method_pointer_2e471d76c8745eb99548f18746240833, pybind11::return_value_policy::copy, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_penshape", method_pointer_9e3292f2e6485ab6b444782428a714d6, pybind11::return_value_policy::copy, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_intercept", method_pointer_8a551f5f27b45131836ec42e3396c1bf, pybind11::return_value_policy::copy, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_slope", method_pointer_848c00a01904516e96b52ed99db86e33, pybind11::return_value_policy::copy, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_selected", method_pointer_21d48bb2676356bba155828d34a968eb, pybind11::return_value_policy::copy, "");
    class_f5729db8e15254f8b7481092212bac64.def("compute_r_squared", method_pointer_ca7e50a0ee0055779942168ff8bbb90d, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_solver", method_pointer_49570b7e451651c88eb14edb28d35000, pybind11::return_value_policy::reference_internal, "");
    class_f5729db8e15254f8b7481092212bac64.def("set_solver", method_pointer_54f04505d30f5515a7d5b34f43dc8acb, "");
    class_f5729db8e15254f8b7481092212bac64.def("get_selector", method_pointer_e9870cf22bb95d2c9061c6edadaae9b2, pybind11::return_value_policy::reference_internal, "");
    class_f5729db8e15254f8b7481092212bac64.def("set_selector", method_pointer_198871d5e5275f1f879645381d7071a9, "");

}