#include "_core.h"


namespace autowig {
}

void wrapper_e5e03034302f5c6ca9d068a205353d2a(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NegativeBinomialDistributionMLEstimation, autowig::HolderType< struct ::statiskit::NegativeBinomialDistributionMLEstimation >::Type, struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_e5e03034302f5c6ca9d068a205353d2a(module, "NegativeBinomialDistributionMLEstimation", "");
    class_e5e03034302f5c6ca9d068a205353d2a.def(pybind11::init<  >());
    class_e5e03034302f5c6ca9d068a205353d2a.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_e5e03034302f5c6ca9d068a205353d2a.def(pybind11::init< struct ::statiskit::NegativeBinomialDistributionMLEstimation const & >());

}