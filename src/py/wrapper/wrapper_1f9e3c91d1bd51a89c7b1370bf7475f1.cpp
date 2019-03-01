#include "_core.h"


namespace autowig {
}

void wrapper_1f9e3c91d1bd51a89c7b1370bf7475f1(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, autowig::HolderType< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator > > class_1f9e3c91d1bd51a89c7b1370bf7475f1(module, "Estimator", "");
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(pybind11::init<  >());
    class_1f9e3c91d1bd51a89c7b1370bf7475f1.def(pybind11::init< struct ::statiskit::DirichletMultinomialSingularDistributionEstimation::Estimator const & >());

}