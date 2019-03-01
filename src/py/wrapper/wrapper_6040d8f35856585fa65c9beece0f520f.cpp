#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::*method_pointer_c4452a685c93519d84faf1d018af10c2)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::size;
struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::*method_pointer_a4b41585ac0f505c9d35be0c14dba4b0)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateConditionalDistribution, ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::*method_pointer_6943841278ac5396a2e1eb7782e38078)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_6040d8f35856585fa65c9beece0f520f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > > class_6040d8f35856585fa65c9beece0f520f(module, "_Selection_6040d8f35856585fa65c9beece0f520f", "");
    class_6040d8f35856585fa65c9beece0f520f.def(pybind11::init<  >());
    class_6040d8f35856585fa65c9beece0f520f.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_6040d8f35856585fa65c9beece0f520f.def(pybind11::init< struct ::statiskit::CategoricalMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_6040d8f35856585fa65c9beece0f520f.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateConditionalDistribution, struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation > const & >());
    class_6040d8f35856585fa65c9beece0f520f.def("__len__", method_pointer_c4452a685c93519d84faf1d018af10c2, "");
    class_6040d8f35856585fa65c9beece0f520f.def("get_estimation", method_pointer_a4b41585ac0f505c9d35be0c14dba4b0, pybind11::return_value_policy::reference_internal, "");
    class_6040d8f35856585fa65c9beece0f520f.def("get_score", method_pointer_6943841278ac5396a2e1eb7782e38078, pybind11::return_value_policy::copy, "");

}