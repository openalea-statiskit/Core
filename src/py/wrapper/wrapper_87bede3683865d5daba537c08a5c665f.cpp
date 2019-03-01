#include "_core.h"


namespace autowig {
}

void wrapper_87bede3683865d5daba537c08a5c665f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_87bede3683865d5daba537c08a5c665f(module, "_LazyEstimation_87bede3683865d5daba537c08a5c665f", "");
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init<  >());
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistribution const * >());
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());

}