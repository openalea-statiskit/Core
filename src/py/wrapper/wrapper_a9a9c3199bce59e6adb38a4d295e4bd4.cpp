#include "_core.h"



namespace autowig
{

    void method_decorator_57d744987cae50abaa24d11686bac7e1(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > const & instance, const struct ::statiskit::MultivariateConditionalDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a9a9c3199bce59e6adb38a4d295e4bd4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a9a9c3199bce59e6adb38a4d295e4bd4_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > const & unique_ptr_a9a9c3199bce59e6adb38a4d295e4bd4)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > & >(unique_ptr_a9a9c3199bce59e6adb38a4d295e4bd4).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateConditionalDistribution  > shared_ptr_a9a9c3199bce59e6adb38a4d295e4bd4(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > > & >(unique_ptr_a9a9c3199bce59e6adb38a4d295e4bd4)));
            return boost::python::incref(boost::python::object(shared_ptr_a9a9c3199bce59e6adb38a4d295e4bd4).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistribution > >, unique_ptr_a9a9c3199bce59e6adb38a4d295e4bd4_to_python >();
}