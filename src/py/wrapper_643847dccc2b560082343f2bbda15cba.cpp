#include "_core.h"


namespace autowig
{
}


void wrapper_643847dccc2b560082343f2bbda15cba()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_c817adc5fda95841b7424a9157dc057f)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicIWLSSolver::operator();
    double const & (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_fcfe6c59133d5c86b8335573f0d3ef43)() const = &::statiskit::SlopeHeuristicIWLSSolver::get_epsilon;
    void  (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_6e6f1365e441528193f7f948e6b69516)(double const &) = &::statiskit::SlopeHeuristicIWLSSolver::set_epsilon;
    unsigned int const & (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_9c57653b340c572ebca4d6870b9a5929)() const = &::statiskit::SlopeHeuristicIWLSSolver::get_maxits;
    void  (::statiskit::SlopeHeuristicIWLSSolver::*method_pointer_608f3fb772695ef394c55dd88cdfa408)(unsigned int const &) = &::statiskit::SlopeHeuristicIWLSSolver::set_maxits;
    boost::python::class_< class ::statiskit::SlopeHeuristicIWLSSolver, autowig::Held< class ::statiskit::SlopeHeuristicIWLSSolver >::Type, boost::python::bases< struct ::statiskit::SlopeHeuristicSolver >, boost::noncopyable > class_643847dccc2b560082343f2bbda15cba("SlopeHeuristicIWLSSolver", "", boost::python::no_init);
    class_643847dccc2b560082343f2bbda15cba.def("__call__", method_pointer_c817adc5fda95841b7424a9157dc057f, "");
    class_643847dccc2b560082343f2bbda15cba.def("get_epsilon", method_pointer_fcfe6c59133d5c86b8335573f0d3ef43, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_643847dccc2b560082343f2bbda15cba.def("set_epsilon", method_pointer_6e6f1365e441528193f7f948e6b69516, "");
    class_643847dccc2b560082343f2bbda15cba.def("get_maxits", method_pointer_9c57653b340c572ebca4d6870b9a5929, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_643847dccc2b560082343f2bbda15cba.def("set_maxits", method_pointer_608f3fb772695ef394c55dd88cdfa408, "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicIWLSSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicIWLSSolver >::Type, autowig::Held< struct ::statiskit::SlopeHeuristicSolver >::Type >();
    }

}