#include "_core.h"


namespace autowig {
}

void wrapper_ea23650412285dd89c33e1ed29a91cb7(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > class_ea23650412285dd89c33e1ed29a91cb7(module, "_LazyEstimation_ea23650412285dd89c33e1ed29a91cb7", "");
    class_ea23650412285dd89c33e1ed29a91cb7.def(pybind11::init<  >());
    class_ea23650412285dd89c33e1ed29a91cb7.def(pybind11::init< struct ::statiskit::ContinuousUnivariateConditionalDistribution const * >());
    class_ea23650412285dd89c33e1ed29a91cb7.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const & >());

}