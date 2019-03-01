#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_0036ec1baef95392ab6f6d467b642ea6)()const= &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_7595c6bb437c59a9bc93a1f66c37eddf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_7595c6bb437c59a9bc93a1f66c37eddf(module, "_OptimizationEstimationImpl_7595c6bb437c59a9bc93a1f66c37eddf", "");
    class_7595c6bb437c59a9bc93a1f66c37eddf.def(pybind11::init<  >());
    class_7595c6bb437c59a9bc93a1f66c37eddf.def(pybind11::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_7595c6bb437c59a9bc93a1f66c37eddf.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_7595c6bb437c59a9bc93a1f66c37eddf.def("__len__", method_pointer_0036ec1baef95392ab6f6d467b642ea6, "");

}