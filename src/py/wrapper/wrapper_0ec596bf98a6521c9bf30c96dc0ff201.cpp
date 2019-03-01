#include "_core.h"


namespace autowig {
}

void wrapper_0ec596bf98a6521c9bf30c96dc0ff201(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_0ec596bf98a6521c9bf30c96dc0ff201(module, "_UnivariateFrequencyDistributionEstimation_0ec596bf98a6521c9bf30c96dc0ff201", "");
    class_0ec596bf98a6521c9bf30c96dc0ff201.def(pybind11::init<  >());
    class_0ec596bf98a6521c9bf30c96dc0ff201.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const *, struct ::statiskit::UnivariateData const * >());
    class_0ec596bf98a6521c9bf30c96dc0ff201.def(pybind11::init< struct ::statiskit::UnivariateFrequencyDistributionEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());

}