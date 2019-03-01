#include "_core.h"


namespace autowig {
}

void wrapper_cc9b200ad98c51108cfb0b6bf6bf2bd0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeBinomialDistributionMMEstimation, autowig::HolderType< struct ::statiskit::NegativeBinomialDistributionMMEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_cc9b200ad98c51108cfb0b6bf6bf2bd0(module, "NegativeBinomialDistributionMMEstimation", "");
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(pybind11::init<  >());
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_cc9b200ad98c51108cfb0b6bf6bf2bd0.def(pybind11::init< struct ::statiskit::NegativeBinomialDistributionMMEstimation const & >());

}