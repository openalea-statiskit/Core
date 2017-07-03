#include "_core.h"



namespace autowig
{

    void method_decorator_48e01202d87f567d8e4e0990bfcb13a4(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > const & instance, const class ::statiskit::UnivariateConditionalData & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > const volatile >(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a9d965afc04501291149551eda23354()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_7a9d965afc04501291149551eda23354_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > const & unique_ptr_7a9d965afc04501291149551eda23354)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > & >(unique_ptr_7a9d965afc04501291149551eda23354).release()).ptr());
            std::shared_ptr< class ::statiskit::UnivariateConditionalData  > shared_ptr_7a9d965afc04501291149551eda23354(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > > & >(unique_ptr_7a9d965afc04501291149551eda23354)));
            return boost::python::incref(boost::python::object(shared_ptr_7a9d965afc04501291149551eda23354).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData > >, unique_ptr_7a9d965afc04501291149551eda23354_to_python >();
}