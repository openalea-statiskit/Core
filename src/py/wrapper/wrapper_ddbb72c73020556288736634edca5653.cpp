#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::MixtureSingularDistribution *, ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_78ba47b3dfbd553daf0036eb012448ed)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::size;

namespace autowig {
}

void wrapper_ddbb72c73020556288736634edca5653(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_ddbb72c73020556288736634edca5653(module, "_OptimizationEstimationImpl_ddbb72c73020556288736634edca5653", "");
    class_ddbb72c73020556288736634edca5653.def(pybind11::init<  >());
    class_ddbb72c73020556288736634edca5653.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_ddbb72c73020556288736634edca5653.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_ddbb72c73020556288736634edca5653.def("__len__", method_pointer_78ba47b3dfbd553daf0036eb012448ed, "");

}