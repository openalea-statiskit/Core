#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_df6e05148b285e6ab2b10205047450bc)()const= &::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_caa96dc8906e541dbda0563fb9f042bc(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, struct ::statiskit::SingularDistributionEstimation > class_caa96dc8906e541dbda0563fb9f042bc(module, "_LazyEstimation_caa96dc8906e541dbda0563fb9f042bc", "");
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init<  >());
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init< class ::statiskit::DirichletMultinomialSingularDistribution const * >());
    class_caa96dc8906e541dbda0563fb9f042bc.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_caa96dc8906e541dbda0563fb9f042bc.def("copy", method_pointer_df6e05148b285e6ab2b10205047450bc, "");

}