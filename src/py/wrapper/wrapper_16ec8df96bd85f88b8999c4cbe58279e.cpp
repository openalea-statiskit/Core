#include "_core.h"

::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_59c4db2afe595068b519ae8d33f49ab5)()const= &::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::size;

namespace autowig {
}

void wrapper_16ec8df96bd85f88b8999c4cbe58279e(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_16ec8df96bd85f88b8999c4cbe58279e(module, "_OptimizationEstimationImpl_16ec8df96bd85f88b8999c4cbe58279e", "");
    class_16ec8df96bd85f88b8999c4cbe58279e.def(pybind11::init<  >());
    class_16ec8df96bd85f88b8999c4cbe58279e.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_16ec8df96bd85f88b8999c4cbe58279e.def(pybind11::init< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_16ec8df96bd85f88b8999c4cbe58279e.def("__len__", method_pointer_59c4db2afe595068b519ae8d33f49ab5, "");

}