#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_60f487755fba538d966690492e3043d2)()const= &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_a1dbe32ad4be556a97d08416f9bb668d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_a1dbe32ad4be556a97d08416f9bb668d(module, "_ActiveEstimation_a1dbe32ad4be556a97d08416f9bb668d", "");
    class_a1dbe32ad4be556a97d08416f9bb668d.def(pybind11::init<  >());
    class_a1dbe32ad4be556a97d08416f9bb668d.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_a1dbe32ad4be556a97d08416f9bb668d.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_a1dbe32ad4be556a97d08416f9bb668d.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_a1dbe32ad4be556a97d08416f9bb668d.def("get_data", method_pointer_60f487755fba538d966690492e3043d2, pybind11::return_value_policy::reference_internal, "");

}