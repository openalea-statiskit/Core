#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_71f5e339e3a65e4f8fd12e1b4f2e128d)()const= &::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_66ea0b28087057f5abc6f26dadfb4c15(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_66ea0b28087057f5abc6f26dadfb4c15(module, "_ActiveEstimation_66ea0b28087057f5abc6f26dadfb4c15", "");
    class_66ea0b28087057f5abc6f26dadfb4c15.def(pybind11::init<  >());
    class_66ea0b28087057f5abc6f26dadfb4c15.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_66ea0b28087057f5abc6f26dadfb4c15.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_66ea0b28087057f5abc6f26dadfb4c15.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_66ea0b28087057f5abc6f26dadfb4c15.def("get_data", method_pointer_71f5e339e3a65e4f8fd12e1b4f2e128d, pybind11::return_value_policy::reference_internal, "");

}