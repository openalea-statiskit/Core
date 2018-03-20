#include "_core.h"



namespace autowig
{

    void method_decorator_2069f86d823154fbaecad4e7f624ac7f(class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > const & instance, const class ::statiskit::UnivariateHistogramDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a0dd8c6ea4815ccfa90b3f7471fcc3fc()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > const & unique_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > & >(unique_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc).release()).ptr());
            std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution  > shared_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > > & >(unique_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc)));
            return boost::python::incref(boost::python::object(shared_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::UnivariateHistogramDistribution, struct ::std::default_delete< class ::statiskit::UnivariateHistogramDistribution > >, unique_ptr_a0dd8c6ea4815ccfa90b3f7471fcc3fc_to_python >();
}