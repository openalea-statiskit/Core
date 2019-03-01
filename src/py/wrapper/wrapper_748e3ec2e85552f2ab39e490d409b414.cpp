#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_bda0d58ff17959ed95ba92c4ef5ae7cb)()const= &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::size;

namespace autowig {
}

void wrapper_748e3ec2e85552f2ab39e490d409b414(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_748e3ec2e85552f2ab39e490d409b414(module, "_OptimizationEstimationImpl_748e3ec2e85552f2ab39e490d409b414", "");
    class_748e3ec2e85552f2ab39e490d409b414.def(pybind11::init<  >());
    class_748e3ec2e85552f2ab39e490d409b414.def(pybind11::init< struct ::statiskit::CategoricalUnivariateMixtureDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_748e3ec2e85552f2ab39e490d409b414.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_748e3ec2e85552f2ab39e490d409b414.def("__len__", method_pointer_bda0d58ff17959ed95ba92c4ef5ae7cb, "");

}