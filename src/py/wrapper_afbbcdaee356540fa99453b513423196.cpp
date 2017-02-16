#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SlopeHeuristicSolver const volatile * get_pointer<struct ::statiskit::SlopeHeuristicSolver const volatile >(struct ::statiskit::SlopeHeuristicSolver const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_afbbcdaee356540fa99453b513423196()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicSolver::*method_pointer_d3975f18eb9652cea17c1ce078741a5e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicSolver::operator();
    boost::python::class_< struct ::statiskit::SlopeHeuristicSolver, autowig::Held< struct ::statiskit::SlopeHeuristicSolver >::Type, boost::noncopyable > class_afbbcdaee356540fa99453b513423196("SlopeHeuristicSolver", "", boost::python::no_init);
    class_afbbcdaee356540fa99453b513423196.def("__call__", method_pointer_d3975f18eb9652cea17c1ce078741a5e, "");

}