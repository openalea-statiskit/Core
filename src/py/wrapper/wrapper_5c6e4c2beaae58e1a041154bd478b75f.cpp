#include "_core.h"


namespace autowig {
}

void wrapper_5c6e4c2beaae58e1a041154bd478b75f(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, autowig::HolderType< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::MultivariateDistribution > > > class_5c6e4c2beaae58e1a041154bd478b75f(module, "_MultivariateMixtureDistribution_5c6e4c2beaae58e1a041154bd478b75f", "");
    class_5c6e4c2beaae58e1a041154bd478b75f.def(pybind11::init< class ::std::vector< struct ::statiskit::MultivariateDistribution *, class ::std::allocator< struct ::statiskit::MultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_5c6e4c2beaae58e1a041154bd478b75f.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::MultivariateDistribution > const & >());

}