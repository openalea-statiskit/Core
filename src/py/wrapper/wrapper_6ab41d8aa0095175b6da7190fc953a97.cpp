#include "_core.h"

unsigned int const (::statiskit::OptimizationEstimation< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_c6831150ae4f5c9d9cd5995090b09d79)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_6ab41d8aa0095175b6da7190fc953a97(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_6ab41d8aa0095175b6da7190fc953a97(module, "_OptimizationEstimation_6ab41d8aa0095175b6da7190fc953a97", "");
    class_6ab41d8aa0095175b6da7190fc953a97.def(pybind11::init<  >());
    class_6ab41d8aa0095175b6da7190fc953a97.def(pybind11::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_6ab41d8aa0095175b6da7190fc953a97.def(pybind11::init< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_6ab41d8aa0095175b6da7190fc953a97.def("get_iteration", method_pointer_c6831150ae4f5c9d9cd5995090b09d79, "");

}