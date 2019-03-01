#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteUnivariateMixtureDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_44fc68f5bbf8569f90746af49cb3675e)()const= &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_eddfddadfccc5e56b9e809e952641f6b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_eddfddadfccc5e56b9e809e952641f6b(module, "_ActiveEstimation_eddfddadfccc5e56b9e809e952641f6b", "");
    class_eddfddadfccc5e56b9e809e952641f6b.def(pybind11::init<  >());
    class_eddfddadfccc5e56b9e809e952641f6b.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_eddfddadfccc5e56b9e809e952641f6b.def(pybind11::init< struct ::statiskit::DiscreteUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_eddfddadfccc5e56b9e809e952641f6b.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateMixtureDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_eddfddadfccc5e56b9e809e952641f6b.def("get_data", method_pointer_44fc68f5bbf8569f90746af49cb3675e, pybind11::return_value_policy::reference_internal, "");

}