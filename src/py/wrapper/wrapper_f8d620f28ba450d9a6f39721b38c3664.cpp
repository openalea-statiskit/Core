#include "_core.h"



namespace autowig
{

    void method_decorator_88e3b10171ed5c48bf96a59103d50ed9(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > const & instance, const class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > const volatile >(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f8d620f28ba450d9a6f39721b38c3664()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_f8d620f28ba450d9a6f39721b38c3664_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > const & unique_ptr_f8d620f28ba450d9a6f39721b38c3664)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_f8d620f28ba450d9a6f39721b38c3664).release()).ptr());
            std::shared_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator  > shared_ptr_f8d620f28ba450d9a6f39721b38c3664(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > > & >(unique_ptr_f8d620f28ba450d9a6f39721b38c3664)));
            return boost::python::incref(boost::python::object(shared_ptr_f8d620f28ba450d9a6f39721b38c3664).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, struct ::std::default_delete< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator > >, unique_ptr_f8d620f28ba450d9a6f39721b38c3664_to_python >();
}