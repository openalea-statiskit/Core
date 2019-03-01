#include "_core.h"


namespace autowig {
}

void wrapper_886998686eca518d858abef756189174(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteUnivariateMixtureDistribution, autowig::HolderType< struct ::statiskit::DiscreteUnivariateMixtureDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > class_886998686eca518d858abef756189174(module, "DiscreteUnivariateMixtureDistribution", "");
    class_886998686eca518d858abef756189174.def(pybind11::init< class ::std::vector< struct ::statiskit::DiscreteUnivariateDistribution *, class ::std::allocator< struct ::statiskit::DiscreteUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_886998686eca518d858abef756189174.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const & >());

}