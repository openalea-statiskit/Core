#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_833e7c2de4275589a63f3df93e4620d3)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_099f33625b8c56688a7b3e04cbb36b62(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_099f33625b8c56688a7b3e04cbb36b62(module, "_OptimizationEstimationImpl_099f33625b8c56688a7b3e04cbb36b62", "");
    class_099f33625b8c56688a7b3e04cbb36b62.def(pybind11::init<  >());
    class_099f33625b8c56688a7b3e04cbb36b62.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_099f33625b8c56688a7b3e04cbb36b62.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_099f33625b8c56688a7b3e04cbb36b62.def("__len__", method_pointer_833e7c2de4275589a63f3df93e4620d3, "");

}