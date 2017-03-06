#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicSolver const volatile * get_pointer<class ::statiskit::SlopeHeuristicSolver const volatile >(class ::statiskit::SlopeHeuristicSolver const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_5186497276525dcc88f6e6e8b313d2af()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicSolver::*method_pointer_d3975f18eb9652cea17c1ce078741a5e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicSolver::operator();
    enum ::statiskit::linalg::solver_type  (::statiskit::SlopeHeuristicSolver::*method_pointer_e2027001cec65258ab1966e1325b44c2)() const = &::statiskit::SlopeHeuristicSolver::get_solver;
    void  (::statiskit::SlopeHeuristicSolver::*method_pointer_c07c88e004175e6dba65e49fe6738a69)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::SlopeHeuristicSolver::set_solver;
    boost::python::class_< class ::statiskit::SlopeHeuristicSolver, autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type, boost::noncopyable > class_5186497276525dcc88f6e6e8b313d2af("SlopeHeuristicSolver", "", boost::python::no_init);
    class_5186497276525dcc88f6e6e8b313d2af.def("__call__", method_pointer_d3975f18eb9652cea17c1ce078741a5e, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("get_solver", method_pointer_e2027001cec65258ab1966e1325b44c2, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("set_solver", method_pointer_c07c88e004175e6dba65e49fe6738a69, "");

}