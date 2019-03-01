#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_56c987f32ac25aee8c4b408112cb0847)()const= &::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_87bede3683865d5daba537c08a5c665f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_87bede3683865d5daba537c08a5c665f(module, "_LazyEstimation_87bede3683865d5daba537c08a5c665f", "");
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init<  >());
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init< struct ::statiskit::ContinuousUnivariateDistribution const * >());
    class_87bede3683865d5daba537c08a5c665f.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_87bede3683865d5daba537c08a5c665f.def("copy", method_pointer_56c987f32ac25aee8c4b408112cb0847, "");

}