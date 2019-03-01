#include "_core.h"

double const (::statiskit::OptimizationEstimation< double, ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_ec055f06b236594088ffd24cd6d11550)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_15d5beb354475a4b8c2ab5885c0662bd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_15d5beb354475a4b8c2ab5885c0662bd(module, "_OptimizationEstimation_15d5beb354475a4b8c2ab5885c0662bd", "");
    class_15d5beb354475a4b8c2ab5885c0662bd.def(pybind11::init<  >());
    class_15d5beb354475a4b8c2ab5885c0662bd.def(pybind11::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_15d5beb354475a4b8c2ab5885c0662bd.def(pybind11::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_15d5beb354475a4b8c2ab5885c0662bd.def("get_iteration", method_pointer_ec055f06b236594088ffd24cd6d11550, "");

}