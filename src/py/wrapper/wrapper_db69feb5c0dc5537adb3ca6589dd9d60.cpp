#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_be66a9c328805ea6b5368064c9eb78fa)()const= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_dad9d5d1af4f59579ee1387af6b249eb)(enum ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_db69feb5c0dc5537adb3ca6589dd9d60(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Estimator > > class_db69feb5c0dc5537adb3ca6589dd9d60(module, "CriterionEstimator", "");
    class_db69feb5c0dc5537adb3ca6589dd9d60.def(pybind11::init<  >());
    class_db69feb5c0dc5537adb3ca6589dd9d60.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_db69feb5c0dc5537adb3ca6589dd9d60.def("get_criterion", method_pointer_be66a9c328805ea6b5368064c9eb78fa, pybind11::return_value_policy::copy, "");
    class_db69feb5c0dc5537adb3ca6589dd9d60.def("set_criterion", method_pointer_dad9d5d1af4f59579ee1387af6b249eb, "");

}