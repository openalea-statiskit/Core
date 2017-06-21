#include "_core.h"



namespace autowig
{

    void method_decorator_0f7c30ba060752d18b4c9cf79178bc8f(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > const & instance, struct ::statiskit::UnivariateConditionalDistributionEstimation & param_out)     { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ceecfdda95b55b7c9ffa26c45ca90aef()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ceecfdda95b55b7c9ffa26c45ca90aef_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > const & unique_ptr_ceecfdda95b55b7c9ffa26c45ca90aef)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > & >(unique_ptr_ceecfdda95b55b7c9ffa26c45ca90aef).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation  > shared_ptr_ceecfdda95b55b7c9ffa26c45ca90aef(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > & >(unique_ptr_ceecfdda95b55b7c9ffa26c45ca90aef)));
            return boost::python::incref(boost::python::object(shared_ptr_ceecfdda95b55b7c9ffa26c45ca90aef).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >, unique_ptr_ceecfdda95b55b7c9ffa26c45ca90aef_to_python >();
}