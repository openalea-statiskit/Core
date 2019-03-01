#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_0704b07ace4850ad8b0a02121dea38c5)()const= &::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_e8c4cdf7ac4e5ead83bcc0877ffddd76(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation > class_e8c4cdf7ac4e5ead83bcc0877ffddd76(module, "_LazyEstimation_e8c4cdf7ac4e5ead83bcc0877ffddd76", "");
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(pybind11::init<  >());
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const * >());
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_e8c4cdf7ac4e5ead83bcc0877ffddd76.def("copy", method_pointer_0704b07ace4850ad8b0a02121dea38c5, "");

}