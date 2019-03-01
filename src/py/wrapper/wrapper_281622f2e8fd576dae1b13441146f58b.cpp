#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_bec9566eb66f52b88c9504961ea4177c)()const= &::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_281622f2e8fd576dae1b13441146f58b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_281622f2e8fd576dae1b13441146f58b(module, "_ActiveEstimation_281622f2e8fd576dae1b13441146f58b", "");
    class_281622f2e8fd576dae1b13441146f58b.def(pybind11::init<  >());
    class_281622f2e8fd576dae1b13441146f58b.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_281622f2e8fd576dae1b13441146f58b.def(pybind11::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_281622f2e8fd576dae1b13441146f58b.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >());
    class_281622f2e8fd576dae1b13441146f58b.def("get_data", method_pointer_bec9566eb66f52b88c9504961ea4177c, pybind11::return_value_policy::reference_internal, "");

}