#include "_core.h"


namespace autowig {
}

void wrapper_5750371755a95c10b9259748c7b5e21b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, autowig::HolderType< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > > > class_5750371755a95c10b9259748c7b5e21b(module, "_MultivariateMixtureDistribution_5750371755a95c10b9259748c7b5e21b", "");
    class_5750371755a95c10b9259748c7b5e21b.def(pybind11::init< class ::std::vector< struct ::statiskit::DiscreteMultivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_5750371755a95c10b9259748c7b5e21b.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const & >());

}