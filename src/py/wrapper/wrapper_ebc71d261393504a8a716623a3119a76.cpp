#include "_core.h"


namespace autowig {
}

void wrapper_ebc71d261393504a8a716623a3119a76(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MixtureSingularDistribution, autowig::HolderType< struct ::statiskit::MixtureSingularDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistribution, struct ::statiskit::MixtureSingularDistribution, class ::statiskit::MixtureDistribution< struct ::statiskit::SingularDistribution > > > class_ebc71d261393504a8a716623a3119a76(module, "MixtureSingularDistribution", "");
    class_ebc71d261393504a8a716623a3119a76.def(pybind11::init< class ::std::vector< struct ::statiskit::SingularDistribution *, class ::std::allocator< struct ::statiskit::SingularDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_ebc71d261393504a8a716623a3119a76.def(pybind11::init< struct ::statiskit::MixtureSingularDistribution const & >());

}