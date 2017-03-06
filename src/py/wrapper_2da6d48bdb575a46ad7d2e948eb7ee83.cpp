#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::SlopeHeuristicOLSSolver const volatile * get_pointer<struct ::statiskit::SlopeHeuristicOLSSolver const volatile >(struct ::statiskit::SlopeHeuristicOLSSolver const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_2da6d48bdb575a46ad7d2e948eb7ee83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicOLSSolver::*method_pointer_1646b2acf85e5f39b0e3647efbab3662)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicOLSSolver::operator();
    class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  (::statiskit::SlopeHeuristicOLSSolver::*method_pointer_28a732f92bde5f6e9923a325f1005906)() const = &::statiskit::SlopeHeuristicOLSSolver::copy;
    boost::python::class_< struct ::statiskit::SlopeHeuristicOLSSolver, autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicSolver > > class_2da6d48bdb575a46ad7d2e948eb7ee83("SlopeHeuristicOLSSolver", "", boost::python::no_init);
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def("__call__", method_pointer_1646b2acf85e5f39b0e3647efbab3662, "");
    class_2da6d48bdb575a46ad7d2e948eb7ee83.def("copy", method_pointer_28a732f92bde5f6e9923a325f1005906, "");

    if(autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SlopeHeuristicOLSSolver >::Type, autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type >();
    }

}