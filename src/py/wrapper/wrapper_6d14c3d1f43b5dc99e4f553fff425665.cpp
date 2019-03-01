#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9777360a2c0455c4b85ae4d0d6a919e4)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_7d45ca930cbc55f69c2f4f1f5826136b)(enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_6d14c3d1f43b5dc99e4f553fff425665(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > class_6d14c3d1f43b5dc99e4f553fff425665(module, "CriterionEstimator", "");
    class_6d14c3d1f43b5dc99e4f553fff425665.def(pybind11::init<  >());
    class_6d14c3d1f43b5dc99e4f553fff425665.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::CriterionEstimator const & >());
    class_6d14c3d1f43b5dc99e4f553fff425665.def("get_criterion", method_pointer_9777360a2c0455c4b85ae4d0d6a919e4, pybind11::return_value_policy::copy, "");
    class_6d14c3d1f43b5dc99e4f553fff425665.def("set_criterion", method_pointer_7d45ca930cbc55f69c2f4f1f5826136b, "");

}