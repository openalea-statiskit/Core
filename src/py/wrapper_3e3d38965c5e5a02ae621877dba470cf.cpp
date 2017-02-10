#include "_core.h"


namespace autowig
{
}


void wrapper_3e3d38965c5e5a02ae621877dba470cf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::SlopeHeuristicSelector::*method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e)(class ::statiskit::SlopeHeuristic const &) const = &::statiskit::SlopeHeuristicSelector::operator();
    boost::python::class_< struct ::statiskit::SlopeHeuristicSelector, autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::Type, boost::noncopyable > class_3e3d38965c5e5a02ae621877dba470cf("SlopeHeuristicSelector", "", boost::python::no_init);
    class_3e3d38965c5e5a02ae621877dba470cf.def("__call__", method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e, "");

}