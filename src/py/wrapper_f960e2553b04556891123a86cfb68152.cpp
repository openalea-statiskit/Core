#include "_core.h"



namespace autowig
{

    void method_decorator_098aef898fd2538e8aaeb9bc5bef7eb7(class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > const & instance, class ::statiskit::SlopeHeuristicSolver & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > const volatile >(class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f960e2553b04556891123a86cfb68152()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f960e2553b04556891123a86cfb68152_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > const & unique_ptr_f960e2553b04556891123a86cfb68152)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > & >(unique_ptr_f960e2553b04556891123a86cfb68152).release()).ptr());
            std::shared_ptr< class ::statiskit::SlopeHeuristicSolver  > shared_ptr_f960e2553b04556891123a86cfb68152(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > & >(unique_ptr_f960e2553b04556891123a86cfb68152)));
            return boost::python::incref(boost::python::object(shared_ptr_f960e2553b04556891123a86cfb68152).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >, unique_ptr_f960e2553b04556891123a86cfb68152_to_python >();
}