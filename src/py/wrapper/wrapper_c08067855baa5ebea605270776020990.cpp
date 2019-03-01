#include "_core.h"


namespace autowig {
}

void wrapper_c08067855baa5ebea605270776020990(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator, autowig::HolderType< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::UnivariateDistributionEstimation::Estimator > class_c08067855baa5ebea605270776020990(module, "Estimator", "");
    class_c08067855baa5ebea605270776020990.def(pybind11::init<  >());
    class_c08067855baa5ebea605270776020990.def(pybind11::init< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator const & >());

}