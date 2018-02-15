#include "_core.h"



namespace autowig
{

    void method_decorator_88e8be02818f57b3ac95ed473d53eaab(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > const & instance, const class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9299d4cc901a521abab37352f483e276()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_9299d4cc901a521abab37352f483e276_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > const & unique_ptr_9299d4cc901a521abab37352f483e276)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_9299d4cc901a521abab37352f483e276).release()).ptr());
            std::shared_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator  > shared_ptr_9299d4cc901a521abab37352f483e276(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_9299d4cc901a521abab37352f483e276)));
            return boost::python::incref(boost::python::object(shared_ptr_9299d4cc901a521abab37352f483e276).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::CriterionEstimator > >, unique_ptr_9299d4cc901a521abab37352f483e276_to_python >();
}