#include "_core.h"

class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_fd3e3bd73a4859948fe4c8cd15ebee06)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimation;

namespace autowig {
}

void wrapper_df69c16128ca5c609f45a63866a1af2f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_df69c16128ca5c609f45a63866a1af2f(module, "_ShiftedDistributionEstimation_df69c16128ca5c609f45a63866a1af2f", "");
    class_df69c16128ca5c609f45a63866a1af2f.def(pybind11::init<  >());
    class_df69c16128ca5c609f45a63866a1af2f.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > *, class ::statiskit::UnivariateDataFrame const *, int const & >());
    class_df69c16128ca5c609f45a63866a1af2f.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_df69c16128ca5c609f45a63866a1af2f.def("get_estimation", method_pointer_fd3e3bd73a4859948fe4c8cd15ebee06, pybind11::return_value_policy::reference_internal, "");

}