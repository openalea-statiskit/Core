#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_aaa0dfbae2e75008bd244623dab630b4)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::*method_pointer_5b1c78213d9d55bd9dddfb9743888267)(enum ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_c57cf5e1268c5299a5895ad1b219623f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Estimator > > class_c57cf5e1268c5299a5895ad1b219623f(module, "CriterionEstimator", "");
    class_c57cf5e1268c5299a5895ad1b219623f.def(pybind11::init<  >());
    class_c57cf5e1268c5299a5895ad1b219623f.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::CriterionEstimator const & >());
    class_c57cf5e1268c5299a5895ad1b219623f.def("get_criterion", method_pointer_aaa0dfbae2e75008bd244623dab630b4, pybind11::return_value_policy::copy, "");
    class_c57cf5e1268c5299a5895ad1b219623f.def("set_criterion", method_pointer_5b1c78213d9d55bd9dddfb9743888267, "");

}