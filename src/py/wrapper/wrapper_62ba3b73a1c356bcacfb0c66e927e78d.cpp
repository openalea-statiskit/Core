#include "_core.h"



namespace autowig
{

    void method_decorator_fb5d95975a3e57a7a8c385713e978fc1(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > const & instance, const struct ::statiskit::MultivariateConditionalDistributionEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_62ba3b73a1c356bcacfb0c66e927e78d()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_62ba3b73a1c356bcacfb0c66e927e78d_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > const & unique_ptr_62ba3b73a1c356bcacfb0c66e927e78d)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > & >(unique_ptr_62ba3b73a1c356bcacfb0c66e927e78d).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation  > shared_ptr_62ba3b73a1c356bcacfb0c66e927e78d(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > & >(unique_ptr_62ba3b73a1c356bcacfb0c66e927e78d)));
            return boost::python::incref(boost::python::object(shared_ptr_62ba3b73a1c356bcacfb0c66e927e78d).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >, unique_ptr_62ba3b73a1c356bcacfb0c66e927e78d_to_python >();
}