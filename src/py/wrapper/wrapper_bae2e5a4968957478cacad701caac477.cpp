#include "_core.h"

struct ::statiskit::CategoricalUnivariateMixtureDistribution const * (::statiskit::OptimizationEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_f83077f8c224588f93d7bcc6f29f1557)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_bae2e5a4968957478cacad701caac477(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_bae2e5a4968957478cacad701caac477(module, "_OptimizationEstimation_bae2e5a4968957478cacad701caac477", "");
    class_bae2e5a4968957478cacad701caac477.def(pybind11::init<  >());
    class_bae2e5a4968957478cacad701caac477.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_bae2e5a4968957478cacad701caac477.def(pybind11::init< struct ::statiskit::OptimizationEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_bae2e5a4968957478cacad701caac477.def("get_iteration", method_pointer_f83077f8c224588f93d7bcc6f29f1557, pybind11::return_value_policy::reference_internal, "");

}