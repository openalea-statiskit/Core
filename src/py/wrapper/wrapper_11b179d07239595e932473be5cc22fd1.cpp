#include "_core.h"



namespace autowig
{

    void method_decorator_ff2a9d405dd55fce8c0f431e8ad07076(class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > const & instance, const class ::statiskit::MultinormalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_11b179d07239595e932473be5cc22fd1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_11b179d07239595e932473be5cc22fd1_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > const & unique_ptr_11b179d07239595e932473be5cc22fd1)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > & >(unique_ptr_11b179d07239595e932473be5cc22fd1).release()).ptr());
            std::shared_ptr< class ::statiskit::MultinormalDistribution  > shared_ptr_11b179d07239595e932473be5cc22fd1(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > > & >(unique_ptr_11b179d07239595e932473be5cc22fd1)));
            return boost::python::incref(boost::python::object(shared_ptr_11b179d07239595e932473be5cc22fd1).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::MultinormalDistribution, struct ::std::default_delete< class ::statiskit::MultinormalDistribution > >, unique_ptr_11b179d07239595e932473be5cc22fd1_to_python >();
}