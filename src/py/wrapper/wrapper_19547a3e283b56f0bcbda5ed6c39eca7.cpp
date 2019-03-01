#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::DiscreteUnivariateMixtureDistribution *, ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_2f248004e27f55c38979297b356031e0)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_19547a3e283b56f0bcbda5ed6c39eca7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_19547a3e283b56f0bcbda5ed6c39eca7(module, "_OptimizationEstimationImpl_19547a3e283b56f0bcbda5ed6c39eca7", "");
    class_19547a3e283b56f0bcbda5ed6c39eca7.def(pybind11::init<  >());
    class_19547a3e283b56f0bcbda5ed6c39eca7.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_19547a3e283b56f0bcbda5ed6c39eca7.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_19547a3e283b56f0bcbda5ed6c39eca7.def("__len__", method_pointer_2f248004e27f55c38979297b356031e0, "");

}