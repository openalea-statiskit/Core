#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_60d56b9770965ab7a0f550f69a5d516e)()const= &::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_48bb93ba41cb566d971639633c42258d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_48bb93ba41cb566d971639633c42258d(module, "_OptimizationEstimationImpl_48bb93ba41cb566d971639633c42258d", "");
    class_48bb93ba41cb566d971639633c42258d.def(pybind11::init<  >());
    class_48bb93ba41cb566d971639633c42258d.def(pybind11::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_48bb93ba41cb566d971639633c42258d.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_48bb93ba41cb566d971639633c42258d.def("__len__", method_pointer_60d56b9770965ab7a0f550f69a5d516e, "");

}