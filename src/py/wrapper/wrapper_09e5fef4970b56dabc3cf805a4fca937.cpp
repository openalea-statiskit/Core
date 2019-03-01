#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_b6564d8146b55e9ea25653efa134a5c2)()const= &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_09e5fef4970b56dabc3cf805a4fca937(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_09e5fef4970b56dabc3cf805a4fca937(module, "_ActiveEstimation_09e5fef4970b56dabc3cf805a4fca937", "");
    class_09e5fef4970b56dabc3cf805a4fca937.def(pybind11::init<  >());
    class_09e5fef4970b56dabc3cf805a4fca937.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_09e5fef4970b56dabc3cf805a4fca937.def(pybind11::init< struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_09e5fef4970b56dabc3cf805a4fca937.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());
    class_09e5fef4970b56dabc3cf805a4fca937.def("get_data", method_pointer_b6564d8146b55e9ea25653efa134a5c2, pybind11::return_value_policy::reference_internal, "");

}