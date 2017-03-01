#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    void method_decorator_769a75103aea5cbfad86e8b5c022c015(class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > const & instance, struct ::statiskit::SlopeHeuristicSelector & param_out)     { instance.operator*() = param_out; }
}


void wrapper_b2f3c2f39c61584abb2d15ebc8f7a063()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_b2f3c2f39c61584abb2d15ebc8f7a063_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > const & unique_ptr_b2f3c2f39c61584abb2d15ebc8f7a063)
        {
            std::shared_ptr< struct ::statiskit::SlopeHeuristicSelector  > shared_ptr_b2f3c2f39c61584abb2d15ebc8f7a063(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > & >(unique_ptr_b2f3c2f39c61584abb2d15ebc8f7a063)));
            return boost::python::incref(boost::python::object(shared_ptr_b2f3c2f39c61584abb2d15ebc8f7a063).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >, unique_ptr_b2f3c2f39c61584abb2d15ebc8f7a063_to_python >();
}