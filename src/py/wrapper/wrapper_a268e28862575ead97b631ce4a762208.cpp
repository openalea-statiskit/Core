#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_5fe10725a5f05435ac605dbdccf876fe)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_b0fc2e39afb85dbeb2c552f377831292)(enum ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_a268e28862575ead97b631ce4a762208(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > > class_a268e28862575ead97b631ce4a762208(module, "CriterionEstimator", "");
    class_a268e28862575ead97b631ce4a762208.def(pybind11::init<  >());
    class_a268e28862575ead97b631ce4a762208.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_a268e28862575ead97b631ce4a762208.def("get_criterion", method_pointer_5fe10725a5f05435ac605dbdccf876fe, pybind11::return_value_policy::copy, "");
    class_a268e28862575ead97b631ce4a762208.def("set_criterion", method_pointer_b0fc2e39afb85dbeb2c552f377831292, "");

}