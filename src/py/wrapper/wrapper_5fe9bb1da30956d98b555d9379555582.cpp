#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_c40628942fb65816a488c355773b6b47)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_87556a2e1d985060b356eefe9782a87c)(enum ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_5fe9bb1da30956d98b555d9379555582(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > class_5fe9bb1da30956d98b555d9379555582(module, "CriterionEstimator", "");
    class_5fe9bb1da30956d98b555d9379555582.def(pybind11::init<  >());
    class_5fe9bb1da30956d98b555d9379555582.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const & >());
    class_5fe9bb1da30956d98b555d9379555582.def("get_criterion", method_pointer_c40628942fb65816a488c355773b6b47, pybind11::return_value_policy::copy, "");
    class_5fe9bb1da30956d98b555d9379555582.def("set_criterion", method_pointer_87556a2e1d985060b356eefe9782a87c, "");

}