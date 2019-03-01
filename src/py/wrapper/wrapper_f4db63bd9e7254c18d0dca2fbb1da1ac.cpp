#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_4a41721640ab5460a2028aa3f7cf728a)()const= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_cfc705019a735eb3bc4c78d246acc7d2)(enum ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_f4db63bd9e7254c18d0dca2fbb1da1ac(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::Estimator > > class_f4db63bd9e7254c18d0dca2fbb1da1ac(module, "CriterionEstimator", "");
    class_f4db63bd9e7254c18d0dca2fbb1da1ac.def(pybind11::init<  >());
    class_f4db63bd9e7254c18d0dca2fbb1da1ac.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_f4db63bd9e7254c18d0dca2fbb1da1ac.def("get_criterion", method_pointer_4a41721640ab5460a2028aa3f7cf728a, pybind11::return_value_policy::copy, "");
    class_f4db63bd9e7254c18d0dca2fbb1da1ac.def("set_criterion", method_pointer_cfc705019a735eb3bc4c78d246acc7d2, "");

}