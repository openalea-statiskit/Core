#include "_core.h"



namespace autowig
{

    void method_decorator_e8c517aa833657d49cb62e20746e78cb(class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > const & instance, const class ::statiskit::GeometricDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ab68dc00081f5c399f10159334192ad1()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ab68dc00081f5c399f10159334192ad1_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > const & unique_ptr_ab68dc00081f5c399f10159334192ad1)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > & >(unique_ptr_ab68dc00081f5c399f10159334192ad1).release()).ptr());
            std::shared_ptr< class ::statiskit::GeometricDistribution  > shared_ptr_ab68dc00081f5c399f10159334192ad1(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > > & >(unique_ptr_ab68dc00081f5c399f10159334192ad1)));
            return boost::python::incref(boost::python::object(shared_ptr_ab68dc00081f5c399f10159334192ad1).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::GeometricDistribution, struct ::std::default_delete< class ::statiskit::GeometricDistribution > >, unique_ptr_ab68dc00081f5c399f10159334192ad1_to_python >();
}