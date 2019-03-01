#include "_core.h"


namespace autowig {
}

void wrapper_36823ab42b0c57b48d903606aa743329(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PoissonDistributionMLEstimation, autowig::HolderType< struct ::statiskit::PoissonDistributionMLEstimation >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::PoissonDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_36823ab42b0c57b48d903606aa743329(module, "PoissonDistributionMLEstimation", "");
    class_36823ab42b0c57b48d903606aa743329.def(pybind11::init<  >());
    class_36823ab42b0c57b48d903606aa743329.def(pybind11::init< class ::statiskit::PoissonDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_36823ab42b0c57b48d903606aa743329.def(pybind11::init< struct ::statiskit::PoissonDistributionMLEstimation const & >());

}