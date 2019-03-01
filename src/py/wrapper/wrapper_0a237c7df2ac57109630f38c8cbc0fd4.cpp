#include "_core.h"

double  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_0d19b3f1a3eb5614a55fcd98c87c6faf)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_shift;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_6e09cc1fd0405e7695b296daad35091d)(double const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_shift;
::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_ad1b63904c1a5888a496173925aade21)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_estimator;
void  (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_46b7be6effd8588195dd2ed7b673dfe3)(::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::estimator_type const &)= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_estimator;

namespace autowig {
}

void wrapper_0a237c7df2ac57109630f38c8cbc0fd4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistributionEstimation::Estimator, class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_0a237c7df2ac57109630f38c8cbc0fd4(module, "Estimator", "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def(pybind11::init<  >());
    class_0a237c7df2ac57109630f38c8cbc0fd4.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const & >());
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("get_shift", method_pointer_0d19b3f1a3eb5614a55fcd98c87c6faf, "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("set_shift", method_pointer_6e09cc1fd0405e7695b296daad35091d, "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("get_estimator", method_pointer_ad1b63904c1a5888a496173925aade21, pybind11::return_value_policy::reference_internal, "");
    class_0a237c7df2ac57109630f38c8cbc0fd4.def("set_estimator", method_pointer_46b7be6effd8588195dd2ed7b673dfe3, "");

}