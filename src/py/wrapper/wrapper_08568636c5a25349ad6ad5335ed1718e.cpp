#include "_core.h"


namespace autowig {
}

void wrapper_08568636c5a25349ad6ad5335ed1718e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousMultivariateDistributionEstimation > class_08568636c5a25349ad6ad5335ed1718e(module, "_LazyEstimation_08568636c5a25349ad6ad5335ed1718e", "");
    class_08568636c5a25349ad6ad5335ed1718e.def(pybind11::init<  >());
    class_08568636c5a25349ad6ad5335ed1718e.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const * >());
    class_08568636c5a25349ad6ad5335ed1718e.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >());

}