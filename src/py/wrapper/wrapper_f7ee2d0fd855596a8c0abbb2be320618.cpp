#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::QuantitativeUnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_46cacaa6692e55539ea011cf24607456)()const= &::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_f7ee2d0fd855596a8c0abbb2be320618(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_f7ee2d0fd855596a8c0abbb2be320618(module, "_ActiveEstimation_f7ee2d0fd855596a8c0abbb2be320618", "");
    class_f7ee2d0fd855596a8c0abbb2be320618.def(pybind11::init<  >());
    class_f7ee2d0fd855596a8c0abbb2be320618.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_f7ee2d0fd855596a8c0abbb2be320618.def(pybind11::init< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > const *, struct ::statiskit::UnivariateData const * >());
    class_f7ee2d0fd855596a8c0abbb2be320618.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::QuantitativeUnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_f7ee2d0fd855596a8c0abbb2be320618.def("get_data", method_pointer_46cacaa6692e55539ea011cf24607456, pybind11::return_value_policy::reference_internal, "");

}