#include "_core.h"


namespace autowig {
}

void wrapper_2eae4ac2dbf259029ee0e81da54c2c15(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, autowig::HolderType< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator, struct ::statiskit::SingularDistributionEstimation::Estimator > > class_2eae4ac2dbf259029ee0e81da54c2c15(module, "Estimator", "");
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(pybind11::init<  >());
    class_2eae4ac2dbf259029ee0e81da54c2c15.def(pybind11::init< struct ::statiskit::MultinomialSingularDistributionEstimation::Estimator const & >());

}