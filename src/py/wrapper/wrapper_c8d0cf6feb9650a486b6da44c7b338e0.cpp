#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_1c6d0ddac11c5886b934df7deb1830f9)()const= &::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_c8d0cf6feb9650a486b6da44c7b338e0(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_c8d0cf6feb9650a486b6da44c7b338e0(module, "_ActiveEstimation_c8d0cf6feb9650a486b6da44c7b338e0", "");
    class_c8d0cf6feb9650a486b6da44c7b338e0.def(pybind11::init<  >());
    class_c8d0cf6feb9650a486b6da44c7b338e0.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_c8d0cf6feb9650a486b6da44c7b338e0.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_c8d0cf6feb9650a486b6da44c7b338e0.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_c8d0cf6feb9650a486b6da44c7b338e0.def("get_data", method_pointer_1c6d0ddac11c5886b934df7deb1830f9, pybind11::return_value_policy::reference_internal, "");

}