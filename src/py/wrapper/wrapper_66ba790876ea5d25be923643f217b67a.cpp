#include "_core.h"

double const (::statiskit::OptimizationEstimation< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_81a91b836c8556b08e07aba60cd6194c)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_66ba790876ea5d25be923643f217b67a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_66ba790876ea5d25be923643f217b67a(module, "_OptimizationEstimation_66ba790876ea5d25be923643f217b67a", "");
    class_66ba790876ea5d25be923643f217b67a.def(pybind11::init<  >());
    class_66ba790876ea5d25be923643f217b67a.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_66ba790876ea5d25be923643f217b67a.def(pybind11::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_66ba790876ea5d25be923643f217b67a.def("get_iteration", method_pointer_81a91b836c8556b08e07aba60cd6194c, "");

}