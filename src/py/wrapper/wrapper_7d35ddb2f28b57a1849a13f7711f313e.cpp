#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::GeometricDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_51068c3b6ac05d2c9a851b2de5706c44)()const= &::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_7d35ddb2f28b57a1849a13f7711f313e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_7d35ddb2f28b57a1849a13f7711f313e(module, "_ActiveEstimation_7d35ddb2f28b57a1849a13f7711f313e", "");
    class_7d35ddb2f28b57a1849a13f7711f313e.def(pybind11::init<  >());
    class_7d35ddb2f28b57a1849a13f7711f313e.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_7d35ddb2f28b57a1849a13f7711f313e.def(pybind11::init< class ::statiskit::GeometricDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_7d35ddb2f28b57a1849a13f7711f313e.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::GeometricDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_7d35ddb2f28b57a1849a13f7711f313e.def("get_data", method_pointer_51068c3b6ac05d2c9a851b2de5706c44, pybind11::return_value_policy::reference_internal, "");

}