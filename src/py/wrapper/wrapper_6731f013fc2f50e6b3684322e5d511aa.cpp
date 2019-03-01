#include "_core.h"


namespace autowig {
}

void wrapper_6731f013fc2f50e6b3684322e5d511aa(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, autowig::HolderType< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > > class_6731f013fc2f50e6b3684322e5d511aa(module, "_MultivariateMixtureDistribution_6731f013fc2f50e6b3684322e5d511aa", "");
    class_6731f013fc2f50e6b3684322e5d511aa.def(pybind11::init< class ::std::vector< struct ::statiskit::ContinuousMultivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_6731f013fc2f50e6b3684322e5d511aa.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const & >());

}