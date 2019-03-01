#include "_core.h"


namespace autowig {
}

void wrapper_a887ab230e4b513ab40c258c172f2580(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, autowig::HolderType< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, class ::statiskit::MixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > > > class_a887ab230e4b513ab40c258c172f2580(module, "_MultivariateMixtureDistribution_a887ab230e4b513ab40c258c172f2580", "");
    class_a887ab230e4b513ab40c258c172f2580.def(pybind11::init< class ::std::vector< struct ::statiskit::CategoricalMultivariateDistribution *, class ::std::allocator< struct ::statiskit::CategoricalMultivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_a887ab230e4b513ab40c258c172f2580.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const & >());

}