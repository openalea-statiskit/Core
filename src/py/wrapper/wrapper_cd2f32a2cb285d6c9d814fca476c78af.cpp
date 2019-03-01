#include "_core.h"


namespace autowig {
}

void wrapper_cd2f32a2cb285d6c9d814fca476c78af(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateMixtureDistribution, autowig::HolderType< struct ::statiskit::CategoricalUnivariateMixtureDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::UnivariateMixtureDistribution< struct ::statiskit::CategoricalUnivariateDistribution > > > class_cd2f32a2cb285d6c9d814fca476c78af(module, "CategoricalUnivariateMixtureDistribution", "");
    class_cd2f32a2cb285d6c9d814fca476c78af.def(pybind11::init< class ::std::vector< struct ::statiskit::CategoricalUnivariateDistribution *, class ::std::allocator< struct ::statiskit::CategoricalUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_cd2f32a2cb285d6c9d814fca476c78af.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const & >());

}