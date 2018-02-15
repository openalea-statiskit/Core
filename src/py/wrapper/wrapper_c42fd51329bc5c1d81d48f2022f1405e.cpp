#include "_core.h"



namespace autowig
{

    void method_decorator_681ea57836e55e0692da63adc2fd1aa0(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > const & instance, const class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c42fd51329bc5c1d81d48f2022f1405e()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_c42fd51329bc5c1d81d48f2022f1405e_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > const & unique_ptr_c42fd51329bc5c1d81d48f2022f1405e)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_c42fd51329bc5c1d81d48f2022f1405e).release()).ptr());
            std::shared_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator  > shared_ptr_c42fd51329bc5c1d81d48f2022f1405e(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_c42fd51329bc5c1d81d48f2022f1405e)));
            return boost::python::incref(boost::python::object(shared_ptr_c42fd51329bc5c1d81d48f2022f1405e).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::CriterionEstimator > >, unique_ptr_c42fd51329bc5c1d81d48f2022f1405e_to_python >();
}