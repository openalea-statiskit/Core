#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_2ee4774fe9fd58ada670111ef6de3951)()const= &::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_db760ff53e0e5dca8e558b09ed12163c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > class_db760ff53e0e5dca8e558b09ed12163c(module, "_LazyEstimation_db760ff53e0e5dca8e558b09ed12163c", "");
    class_db760ff53e0e5dca8e558b09ed12163c.def(pybind11::init<  >());
    class_db760ff53e0e5dca8e558b09ed12163c.def(pybind11::init< class ::statiskit::NegativeBinomialDistribution const * >());
    class_db760ff53e0e5dca8e558b09ed12163c.def(pybind11::init< class ::statiskit::LazyEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_db760ff53e0e5dca8e558b09ed12163c.def("copy", method_pointer_2ee4774fe9fd58ada670111ef6de3951, "");

}