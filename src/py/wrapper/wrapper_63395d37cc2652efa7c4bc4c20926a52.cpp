#include "_core.h"



namespace autowig
{

    void method_decorator_c8b2e69c7a885d798245b75a49653456(class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > const & instance, const class ::statiskit::LogarithmicDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_63395d37cc2652efa7c4bc4c20926a52()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_63395d37cc2652efa7c4bc4c20926a52_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > const & unique_ptr_63395d37cc2652efa7c4bc4c20926a52)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > & >(unique_ptr_63395d37cc2652efa7c4bc4c20926a52).release()).ptr());
            std::shared_ptr< class ::statiskit::LogarithmicDistribution  > shared_ptr_63395d37cc2652efa7c4bc4c20926a52(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > > & >(unique_ptr_63395d37cc2652efa7c4bc4c20926a52)));
            return boost::python::incref(boost::python::object(shared_ptr_63395d37cc2652efa7c4bc4c20926a52).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::LogarithmicDistribution, struct ::std::default_delete< class ::statiskit::LogarithmicDistribution > >, unique_ptr_63395d37cc2652efa7c4bc4c20926a52_to_python >();
}