#include "_core.h"


namespace autowig {
}

void wrapper_c45aea45ed2e564cb24514edfc5e63b0(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > >::Type, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > class_c45aea45ed2e564cb24514edfc5e63b0(module, "_PolymorphicCopy_c45aea45ed2e564cb24514edfc5e63b0", "");
    class_c45aea45ed2e564cb24514edfc5e63b0.def(pybind11::init<  >());
    class_c45aea45ed2e564cb24514edfc5e63b0.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > const & >());

}