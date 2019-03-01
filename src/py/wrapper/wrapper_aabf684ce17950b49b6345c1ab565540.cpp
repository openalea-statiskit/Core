#include "_core.h"


namespace autowig {
}

void wrapper_aabf684ce17950b49b6345c1ab565540(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::NormalDistributionMLEstimation, autowig::HolderType< struct ::statiskit::NormalDistributionMLEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_aabf684ce17950b49b6345c1ab565540(module, "NormalDistributionMLEstimation", "");
    class_aabf684ce17950b49b6345c1ab565540.def(pybind11::init<  >());
    class_aabf684ce17950b49b6345c1ab565540.def(pybind11::init< class ::statiskit::NormalDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_aabf684ce17950b49b6345c1ab565540.def(pybind11::init< struct ::statiskit::NormalDistributionMLEstimation const & >());

}