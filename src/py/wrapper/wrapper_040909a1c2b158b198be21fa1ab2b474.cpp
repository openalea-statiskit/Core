#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_44f5162301605416ae592feb4790262a)()const= &::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_040909a1c2b158b198be21fa1ab2b474(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_040909a1c2b158b198be21fa1ab2b474(module, "_LazyEstimation_040909a1c2b158b198be21fa1ab2b474", "");
    class_040909a1c2b158b198be21fa1ab2b474.def(pybind11::init<  >());
    class_040909a1c2b158b198be21fa1ab2b474.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const * >());
    class_040909a1c2b158b198be21fa1ab2b474.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_040909a1c2b158b198be21fa1ab2b474.def("copy", method_pointer_44f5162301605416ae592feb4790262a, "");

}