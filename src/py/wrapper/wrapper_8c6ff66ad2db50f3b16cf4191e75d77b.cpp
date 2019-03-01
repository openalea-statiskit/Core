#include "_core.h"

struct ::statiskit::ContinuousUnivariateMixtureDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_d4f2a767b0cd5fc18f4f1f6ec9b3f6ce)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_8c6ff66ad2db50f3b16cf4191e75d77b(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_8c6ff66ad2db50f3b16cf4191e75d77b(module, "_OptimizationEstimation_8c6ff66ad2db50f3b16cf4191e75d77b", "");
    class_8c6ff66ad2db50f3b16cf4191e75d77b.def(pybind11::init<  >());
    class_8c6ff66ad2db50f3b16cf4191e75d77b.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_8c6ff66ad2db50f3b16cf4191e75d77b.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_8c6ff66ad2db50f3b16cf4191e75d77b.def("get_iteration", method_pointer_d4f2a767b0cd5fc18f4f1f6ec9b3f6ce, pybind11::return_value_policy::reference_internal, "");

}