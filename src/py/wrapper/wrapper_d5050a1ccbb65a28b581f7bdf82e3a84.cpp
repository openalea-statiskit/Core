#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_53438cdbafc85f2b829000b93718c0da)()const= &::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_d5050a1ccbb65a28b581f7bdf82e3a84(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_d5050a1ccbb65a28b581f7bdf82e3a84(module, "_ActiveEstimation_d5050a1ccbb65a28b581f7bdf82e3a84", "");
    class_d5050a1ccbb65a28b581f7bdf82e3a84.def(pybind11::init<  >());
    class_d5050a1ccbb65a28b581f7bdf82e3a84.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_d5050a1ccbb65a28b581f7bdf82e3a84.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_d5050a1ccbb65a28b581f7bdf82e3a84.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_d5050a1ccbb65a28b581f7bdf82e3a84.def("get_data", method_pointer_53438cdbafc85f2b829000b93718c0da, pybind11::return_value_policy::reference_internal, "");

}