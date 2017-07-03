#include "_core.h"



namespace autowig
{

    void method_decorator_d940dfc3527a5e7ea30b7c7f815c15ad(class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > const & instance, const struct ::statiskit::UnivariateDistributionEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_117864e1dfe65915bf10502e182e5502()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_117864e1dfe65915bf10502e182e5502_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > const & unique_ptr_117864e1dfe65915bf10502e182e5502)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > & >(unique_ptr_117864e1dfe65915bf10502e182e5502).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator  > shared_ptr_117864e1dfe65915bf10502e182e5502(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > & >(unique_ptr_117864e1dfe65915bf10502e182e5502)));
            return boost::python::incref(boost::python::object(shared_ptr_117864e1dfe65915bf10502e182e5502).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >, unique_ptr_117864e1dfe65915bf10502e182e5502_to_python >();
}