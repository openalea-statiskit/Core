#include "_core.h"

int  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_dcc0ba9246d151cc9165d2874159b32a)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_shift;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_b142f8882bf254159ce8c7249359a677)(int const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_shift;
::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_fe88d16bc27256d59ecbd4d1b3779e7f)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_57565bd7950f54f08d1cd4e75369565e)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::estimator_type const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_estimator;

namespace autowig {
}

void wrapper_b85047a790a65c398d0495802b9a0f04(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator > > class_b85047a790a65c398d0495802b9a0f04(module, "Estimator", "");
    class_b85047a790a65c398d0495802b9a0f04.def(pybind11::init<  >());
    class_b85047a790a65c398d0495802b9a0f04.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const & >());
    class_b85047a790a65c398d0495802b9a0f04.def("get_shift", method_pointer_dcc0ba9246d151cc9165d2874159b32a, "");
    class_b85047a790a65c398d0495802b9a0f04.def("set_shift", method_pointer_b142f8882bf254159ce8c7249359a677, "");
    class_b85047a790a65c398d0495802b9a0f04.def("get_estimator", method_pointer_fe88d16bc27256d59ecbd4d1b3779e7f, pybind11::return_value_policy::reference_internal, "");
    class_b85047a790a65c398d0495802b9a0f04.def("set_estimator", method_pointer_57565bd7950f54f08d1cd4e75369565e, "");

}