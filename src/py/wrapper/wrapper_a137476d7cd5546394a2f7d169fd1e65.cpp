#include "_core.h"



namespace autowig
{

    void method_decorator_eca28f50075c5e36a7b31ea996278623(class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > const & instance, const struct ::statiskit::NominalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a137476d7cd5546394a2f7d169fd1e65()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a137476d7cd5546394a2f7d169fd1e65_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > const & unique_ptr_a137476d7cd5546394a2f7d169fd1e65)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > & >(unique_ptr_a137476d7cd5546394a2f7d169fd1e65).release()).ptr());
            std::shared_ptr< struct ::statiskit::NominalDistribution  > shared_ptr_a137476d7cd5546394a2f7d169fd1e65(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > > & >(unique_ptr_a137476d7cd5546394a2f7d169fd1e65)));
            return boost::python::incref(boost::python::object(shared_ptr_a137476d7cd5546394a2f7d169fd1e65).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::NominalDistribution, struct ::std::default_delete< struct ::statiskit::NominalDistribution > >, unique_ptr_a137476d7cd5546394a2f7d169fd1e65_to_python >();
}