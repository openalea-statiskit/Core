#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_4a0ac3d0e8ba5acab01bb16df19c819d)()const= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9dc7d3334bd75dbdaeca6ea3bd0d7f94)(enum ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_ba10383a23ff54399f92db2e929ec564(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > class_ba10383a23ff54399f92db2e929ec564(module, "CriterionEstimator", "");
    class_ba10383a23ff54399f92db2e929ec564.def(pybind11::init<  >());
    class_ba10383a23ff54399f92db2e929ec564.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_ba10383a23ff54399f92db2e929ec564.def("get_criterion", method_pointer_4a0ac3d0e8ba5acab01bb16df19c819d, pybind11::return_value_policy::copy, "");
    class_ba10383a23ff54399f92db2e929ec564.def("set_criterion", method_pointer_9dc7d3334bd75dbdaeca6ea3bd0d7f94, "");

}