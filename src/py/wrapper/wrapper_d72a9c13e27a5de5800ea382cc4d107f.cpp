#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_6bb38d66f7f85c799af8028625dc8b7a)()const= &::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_d72a9c13e27a5de5800ea382cc4d107f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_d72a9c13e27a5de5800ea382cc4d107f(module, "_LazyEstimation_d72a9c13e27a5de5800ea382cc4d107f", "");
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init<  >());
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const * >());
    class_d72a9c13e27a5de5800ea382cc4d107f.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_d72a9c13e27a5de5800ea382cc4d107f.def("copy", method_pointer_6bb38d66f7f85c799af8028625dc8b7a, "");

}