#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_1d51ad7867ad5c1f85f08478ad66424c)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_27cfd1a8870659e08234770c1938e6df(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_27cfd1a8870659e08234770c1938e6df(module, "_ActiveEstimation_27cfd1a8870659e08234770c1938e6df", "");
    class_27cfd1a8870659e08234770c1938e6df.def(pybind11::init<  >());
    class_27cfd1a8870659e08234770c1938e6df.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_27cfd1a8870659e08234770c1938e6df.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_27cfd1a8870659e08234770c1938e6df.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());
    class_27cfd1a8870659e08234770c1938e6df.def("get_data", method_pointer_1d51ad7867ad5c1f85f08478ad66424c, pybind11::return_value_policy::reference_internal, "");

}