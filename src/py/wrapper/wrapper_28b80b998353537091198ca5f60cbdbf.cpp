#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_7c4a9e3f373159e8813d4d4fd7fd895f)()const= &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_28b80b998353537091198ca5f60cbdbf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_28b80b998353537091198ca5f60cbdbf(module, "_OptimizationEstimationImpl_28b80b998353537091198ca5f60cbdbf", "");
    class_28b80b998353537091198ca5f60cbdbf.def(pybind11::init<  >());
    class_28b80b998353537091198ca5f60cbdbf.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_28b80b998353537091198ca5f60cbdbf.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_28b80b998353537091198ca5f60cbdbf.def("__len__", method_pointer_7c4a9e3f373159e8813d4d4fd7fd895f, "");

}