#include "_core.h"

struct ::statiskit::DiscreteUnivariateMixtureDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution *, ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_f0f5078b51cb54cca1fd0eeb7d7c893d)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_ee3148dbf8425c8f8a5c5a280fb4586c(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_ee3148dbf8425c8f8a5c5a280fb4586c(module, "_OptimizationEstimation_ee3148dbf8425c8f8a5c5a280fb4586c", "");
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(pybind11::init<  >());
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution *, struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_ee3148dbf8425c8f8a5c5a280fb4586c.def("get_iteration", method_pointer_f0f5078b51cb54cca1fd0eeb7d7c893d, pybind11::return_value_policy::reference_internal, "");

}