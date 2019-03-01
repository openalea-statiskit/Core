#include "_core.h"


namespace autowig {
}

void wrapper_caa96dc8906e541dbda0563fb9f042bc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_caa96dc8906e541dbda0563fb9f042bc(module, "_LazyEstimation_caa96dc8906e541dbda0563fb9f042bc", "");
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init<  >());
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const * >());
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());

}