#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_32fd5c986dd05136b1dbf042854691b4)()const= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9583a7943180584188d9656e9cb2212a)(enum ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_7622b202aa8c5c10af59ca8b1ec3c7e0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::Estimator > > class_7622b202aa8c5c10af59ca8b1ec3c7e0(module, "CriterionEstimator", "");
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def(pybind11::init<  >());
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::CriterionEstimator const & >());
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def("get_criterion", method_pointer_32fd5c986dd05136b1dbf042854691b4, pybind11::return_value_policy::copy, "");
    class_7622b202aa8c5c10af59ca8b1ec3c7e0.def("set_criterion", method_pointer_9583a7943180584188d9656e9cb2212a, "");

}