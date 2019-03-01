#include "_core.h"

class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const (::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_5430c8554ba2590d92c1b39616f3aceb)(::statiskit::Index const &)const= &::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_iteration;

namespace autowig {
}

void wrapper_68170427b0885d37a676e4274699fa05(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_68170427b0885d37a676e4274699fa05(module, "_OptimizationEstimation_68170427b0885d37a676e4274699fa05", "");
    class_68170427b0885d37a676e4274699fa05.def(pybind11::init<  >());
    class_68170427b0885d37a676e4274699fa05.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_68170427b0885d37a676e4274699fa05.def(pybind11::init< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_68170427b0885d37a676e4274699fa05.def("get_iteration", method_pointer_5430c8554ba2590d92c1b39616f3aceb, "");

}