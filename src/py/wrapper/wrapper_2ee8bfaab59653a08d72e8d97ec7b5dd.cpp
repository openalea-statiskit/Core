#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_a9bf223f29c1590b90e0963f774b6cd8)()const= &::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_2ee8bfaab59653a08d72e8d97ec7b5dd(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_2ee8bfaab59653a08d72e8d97ec7b5dd(module, "_LazyEstimation_2ee8bfaab59653a08d72e8d97ec7b5dd", "");
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init<  >());
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init< struct ::statiskit::DiscreteUnivariateDistribution const * >());
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def("copy", method_pointer_a9bf223f29c1590b90e0963f774b6cd8, "");

}