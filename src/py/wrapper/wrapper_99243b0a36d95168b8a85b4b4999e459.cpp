#include "_core.h"



namespace autowig
{

    void method_decorator_2aa7a34c635a59ef9528f5b57459e7f6(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > const & instance, const class ::statiskit::UnivariateConditionalData::Generator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > const volatile >(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_99243b0a36d95168b8a85b4b4999e459()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_99243b0a36d95168b8a85b4b4999e459_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > const & unique_ptr_99243b0a36d95168b8a85b4b4999e459)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > & >(unique_ptr_99243b0a36d95168b8a85b4b4999e459).release()).ptr());
            std::shared_ptr< class ::statiskit::UnivariateConditionalData::Generator  > shared_ptr_99243b0a36d95168b8a85b4b4999e459(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > > & >(unique_ptr_99243b0a36d95168b8a85b4b4999e459)));
            return boost::python::incref(boost::python::object(shared_ptr_99243b0a36d95168b8a85b4b4999e459).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UnivariateConditionalData::Generator, struct ::std::default_delete< class ::statiskit::UnivariateConditionalData::Generator > >, unique_ptr_99243b0a36d95168b8a85b4b4999e459_to_python >();
}