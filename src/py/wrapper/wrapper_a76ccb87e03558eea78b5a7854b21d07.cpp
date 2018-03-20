#include "_core.h"



namespace autowig
{

    void method_decorator_ce6a04320daf5be7a38f336caab2d8b7(class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > const & instance, const class ::statiskit::OrdinalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a76ccb87e03558eea78b5a7854b21d07()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a76ccb87e03558eea78b5a7854b21d07_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > const & unique_ptr_a76ccb87e03558eea78b5a7854b21d07)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > & >(unique_ptr_a76ccb87e03558eea78b5a7854b21d07).release()).ptr());
            std::shared_ptr< class ::statiskit::OrdinalDistribution  > shared_ptr_a76ccb87e03558eea78b5a7854b21d07(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > > & >(unique_ptr_a76ccb87e03558eea78b5a7854b21d07)));
            return boost::python::incref(boost::python::object(shared_ptr_a76ccb87e03558eea78b5a7854b21d07).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::OrdinalDistribution, struct ::std::default_delete< class ::statiskit::OrdinalDistribution > >, unique_ptr_a76ccb87e03558eea78b5a7854b21d07_to_python >();
}