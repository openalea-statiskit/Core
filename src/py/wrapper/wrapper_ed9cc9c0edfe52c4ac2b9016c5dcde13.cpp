#include "_core.h"



namespace autowig
{

    void method_decorator_3e44547ca88d53e1912d4498ff47a228(class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > const & instance, const class ::statiskit::PoissonDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ed9cc9c0edfe52c4ac2b9016c5dcde13()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > const & unique_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > & >(unique_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13).release()).ptr());
            std::shared_ptr< class ::statiskit::PoissonDistribution  > shared_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > > & >(unique_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13)));
            return boost::python::incref(boost::python::object(shared_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::PoissonDistribution, struct ::std::default_delete< class ::statiskit::PoissonDistribution > >, unique_ptr_ed9cc9c0edfe52c4ac2b9016c5dcde13_to_python >();
}