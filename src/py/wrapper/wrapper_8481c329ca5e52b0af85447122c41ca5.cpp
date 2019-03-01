#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::DiscreteMultivariateDistribution >, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_211f4c49c9ef5890a0f088022651527f)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_8481c329ca5e52b0af85447122c41ca5(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_8481c329ca5e52b0af85447122c41ca5(module, "_ActiveEstimation_8481c329ca5e52b0af85447122c41ca5", "");
    class_8481c329ca5e52b0af85447122c41ca5.def(pybind11::init<  >());
    class_8481c329ca5e52b0af85447122c41ca5.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_8481c329ca5e52b0af85447122c41ca5.def(pybind11::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >());
    class_8481c329ca5e52b0af85447122c41ca5.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_8481c329ca5e52b0af85447122c41ca5.def("get_data", method_pointer_211f4c49c9ef5890a0f088022651527f, pybind11::return_value_policy::reference_internal, "");

}