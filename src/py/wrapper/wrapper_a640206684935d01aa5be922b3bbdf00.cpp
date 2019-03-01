#include "_core.h"


namespace autowig {
}

void wrapper_a640206684935d01aa5be922b3bbdf00(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::BinomialDistributionMLEstimation, autowig::HolderType< struct ::statiskit::BinomialDistributionMLEstimation >::Type, struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_a640206684935d01aa5be922b3bbdf00(module, "BinomialDistributionMLEstimation", "");
    class_a640206684935d01aa5be922b3bbdf00.def(pybind11::init<  >());
    class_a640206684935d01aa5be922b3bbdf00.def(pybind11::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_a640206684935d01aa5be922b3bbdf00.def(pybind11::init< struct ::statiskit::BinomialDistributionMLEstimation const & >());

}