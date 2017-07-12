#include "_core.h"



namespace autowig
{

    void method_decorator_ddab4138863850aeac674399882ccad5(class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > const & instance, const class ::statiskit::MultivariateConditionalData::Generator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > const volatile >(class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9c9b0b8265215a57b48807e0fc9938ba()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_9c9b0b8265215a57b48807e0fc9938ba_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > const & unique_ptr_9c9b0b8265215a57b48807e0fc9938ba)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > & >(unique_ptr_9c9b0b8265215a57b48807e0fc9938ba).release()).ptr());
            std::shared_ptr< class ::statiskit::MultivariateConditionalData::Generator  > shared_ptr_9c9b0b8265215a57b48807e0fc9938ba(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > > & >(unique_ptr_9c9b0b8265215a57b48807e0fc9938ba)));
            return boost::python::incref(boost::python::object(shared_ptr_9c9b0b8265215a57b48807e0fc9938ba).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::MultivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::MultivariateConditionalData::Generator > >, unique_ptr_9c9b0b8265215a57b48807e0fc9938ba_to_python >();
}