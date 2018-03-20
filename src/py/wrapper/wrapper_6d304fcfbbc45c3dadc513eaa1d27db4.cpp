#include "_core.h"



namespace autowig
{

    void method_decorator_e9814c3af8435c65aedbc82d16226dea(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > const & instance, const class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6d304fcfbbc45c3dadc513eaa1d27db4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_6d304fcfbbc45c3dadc513eaa1d27db4_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > const & unique_ptr_6d304fcfbbc45c3dadc513eaa1d27db4)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_6d304fcfbbc45c3dadc513eaa1d27db4).release()).ptr());
            std::shared_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator  > shared_ptr_6d304fcfbbc45c3dadc513eaa1d27db4(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_6d304fcfbbc45c3dadc513eaa1d27db4)));
            return boost::python::incref(boost::python::object(shared_ptr_6d304fcfbbc45c3dadc513eaa1d27db4).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator > >, unique_ptr_6d304fcfbbc45c3dadc513eaa1d27db4_to_python >();
}