#include "_core.h"

class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::*method_pointer_0aaf13ac5d0754b2bbb6101c6a0847ba)()const= &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_3201f3b07b0254eb8ef2d0c42eff2557(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > > class_3201f3b07b0254eb8ef2d0c42eff2557(module, "_ActiveEstimation_3201f3b07b0254eb8ef2d0c42eff2557", "");
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(pybind11::init<  >());
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(pybind11::init< struct ::statiskit::ContinuousUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_3201f3b07b0254eb8ef2d0c42eff2557.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const & >());
    class_3201f3b07b0254eb8ef2d0c42eff2557.def("get_data", method_pointer_0aaf13ac5d0754b2bbb6101c6a0847ba, pybind11::return_value_policy::reference_internal, "");

}