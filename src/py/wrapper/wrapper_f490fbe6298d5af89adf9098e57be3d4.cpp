#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::PoissonDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_bc4837462b8350e8a5aeb210cd6e7fc4)()const= &::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_f490fbe6298d5af89adf9098e57be3d4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_f490fbe6298d5af89adf9098e57be3d4(module, "_ActiveEstimation_f490fbe6298d5af89adf9098e57be3d4", "");
    class_f490fbe6298d5af89adf9098e57be3d4.def(pybind11::init<  >());
    class_f490fbe6298d5af89adf9098e57be3d4.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_f490fbe6298d5af89adf9098e57be3d4.def(pybind11::init< class ::statiskit::PoissonDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_f490fbe6298d5af89adf9098e57be3d4.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_f490fbe6298d5af89adf9098e57be3d4.def("get_data", method_pointer_bc4837462b8350e8a5aeb210cd6e7fc4, pybind11::return_value_policy::reference_internal, "");

}