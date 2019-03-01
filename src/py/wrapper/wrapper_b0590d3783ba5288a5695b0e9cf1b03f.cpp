#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_c5ac1ee7064d5664ab40314c3a0d023b)()const= &::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_b0590d3783ba5288a5695b0e9cf1b03f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_b0590d3783ba5288a5695b0e9cf1b03f(module, "_ActiveEstimation_b0590d3783ba5288a5695b0e9cf1b03f", "");
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(pybind11::init<  >());
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_b0590d3783ba5288a5695b0e9cf1b03f.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_b0590d3783ba5288a5695b0e9cf1b03f.def("get_data", method_pointer_c5ac1ee7064d5664ab40314c3a0d023b, pybind11::return_value_policy::reference_internal, "");

}