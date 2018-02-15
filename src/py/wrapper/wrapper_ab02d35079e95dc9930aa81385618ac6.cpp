#include "_core.h"



namespace autowig
{

    void method_decorator_e10505f81a915335ac692ef08ce28e10(class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > const & instance, const class ::statiskit::NormalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ab02d35079e95dc9930aa81385618ac6()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ab02d35079e95dc9930aa81385618ac6_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > const & unique_ptr_ab02d35079e95dc9930aa81385618ac6)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > & >(unique_ptr_ab02d35079e95dc9930aa81385618ac6).release()).ptr());
            std::shared_ptr< class ::statiskit::NormalDistribution  > shared_ptr_ab02d35079e95dc9930aa81385618ac6(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > > & >(unique_ptr_ab02d35079e95dc9930aa81385618ac6)));
            return boost::python::incref(boost::python::object(shared_ptr_ab02d35079e95dc9930aa81385618ac6).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::NormalDistribution, struct ::std::default_delete< class ::statiskit::NormalDistribution > >, unique_ptr_ab02d35079e95dc9930aa81385618ac6_to_python >();
}