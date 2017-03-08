#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

    void method_decorator_5630666578c95100b0818cf932a302c8(class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > const & instance, struct ::statiskit::UnivariateDistribution & param_out)     { instance.operator*() = param_out; }
}


void wrapper_4ddb01be8d3a54e7a69007c077bb86fb()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_4ddb01be8d3a54e7a69007c077bb86fb_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > const & unique_ptr_4ddb01be8d3a54e7a69007c077bb86fb)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > & >(unique_ptr_4ddb01be8d3a54e7a69007c077bb86fb).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateDistribution  > shared_ptr_4ddb01be8d3a54e7a69007c077bb86fb(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > & >(unique_ptr_4ddb01be8d3a54e7a69007c077bb86fb)));
            return boost::python::incref(boost::python::object(shared_ptr_4ddb01be8d3a54e7a69007c077bb86fb).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >, unique_ptr_4ddb01be8d3a54e7a69007c077bb86fb_to_python >();
}