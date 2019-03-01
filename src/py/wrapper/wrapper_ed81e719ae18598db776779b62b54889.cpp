#include "_core.h"

enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::CriterionEstimator::*method_pointer_64a07b1218e65bf889a88e3dea8391d9)()const= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::get_criterion;
void  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::CriterionEstimator::*method_pointer_e55378b404f25c74b20799ab98e0b99d)(enum ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::criterion_type const &)= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator::set_criterion;

namespace autowig {
}

void wrapper_ed81e719ae18598db776779b62b54889(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > > class_ed81e719ae18598db776779b62b54889(module, "CriterionEstimator", "");
    class_ed81e719ae18598db776779b62b54889.def(pybind11::init<  >());
    class_ed81e719ae18598db776779b62b54889.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::CriterionEstimator const & >());
    class_ed81e719ae18598db776779b62b54889.def("get_criterion", method_pointer_64a07b1218e65bf889a88e3dea8391d9, pybind11::return_value_policy::copy, "");
    class_ed81e719ae18598db776779b62b54889.def("set_criterion", method_pointer_e55378b404f25c74b20799ab98e0b99d, "");

}