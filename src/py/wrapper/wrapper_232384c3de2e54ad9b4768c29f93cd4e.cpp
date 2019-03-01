#include "_core.h"

double const (::statiskit::OptimizationEstimation< double, ::statiskit::LogarithmicDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_e73df763905c5f829ed533665c93c78b)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_232384c3de2e54ad9b4768c29f93cd4e(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_232384c3de2e54ad9b4768c29f93cd4e(module, "_OptimizationEstimation_232384c3de2e54ad9b4768c29f93cd4e", "");
    class_232384c3de2e54ad9b4768c29f93cd4e.def(pybind11::init<  >());
    class_232384c3de2e54ad9b4768c29f93cd4e.def(pybind11::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_232384c3de2e54ad9b4768c29f93cd4e.def(pybind11::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_232384c3de2e54ad9b4768c29f93cd4e.def("get_iteration", method_pointer_e73df763905c5f829ed533665c93c78b, "");

}