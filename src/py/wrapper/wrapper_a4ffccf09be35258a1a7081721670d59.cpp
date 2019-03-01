#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::LogarithmicDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_2a71e46d3e03587fb12087b6e541cb05)()const= &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_a4ffccf09be35258a1a7081721670d59(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_a4ffccf09be35258a1a7081721670d59(module, "_OptimizationEstimationImpl_a4ffccf09be35258a1a7081721670d59", "");
    class_a4ffccf09be35258a1a7081721670d59.def(pybind11::init<  >());
    class_a4ffccf09be35258a1a7081721670d59.def(pybind11::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_a4ffccf09be35258a1a7081721670d59.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_a4ffccf09be35258a1a7081721670d59.def("__len__", method_pointer_2a71e46d3e03587fb12087b6e541cb05, "");

}