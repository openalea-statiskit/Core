#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::UnivariateHistogramDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_ee7ffbd54c2a5cae8e84388fb1d836e9)()const= &::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_36c99cd43c5c5fb8abeb0fd1ca103ac8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_36c99cd43c5c5fb8abeb0fd1ca103ac8(module, "_ActiveEstimation_36c99cd43c5c5fb8abeb0fd1ca103ac8", "");
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(pybind11::init<  >());
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(pybind11::init< class ::statiskit::UnivariateHistogramDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::UnivariateHistogramDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_36c99cd43c5c5fb8abeb0fd1ca103ac8.def("get_data", method_pointer_ee7ffbd54c2a5cae8e84388fb1d836e9, pybind11::return_value_policy::reference_internal, "");

}