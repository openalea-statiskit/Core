#include "_core.h"

class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const * (::statiskit::ShiftedDistributionEstimation< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_bebe30cc49d553888a62e65572123cd4)()const= &::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimation;

namespace autowig {
}

void wrapper_c4fa66fd13165a0abce0c43742e69748(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_c4fa66fd13165a0abce0c43742e69748(module, "_ShiftedDistributionEstimation_c4fa66fd13165a0abce0c43742e69748", "");
    class_c4fa66fd13165a0abce0c43742e69748.def(pybind11::init<  >());
    class_c4fa66fd13165a0abce0c43742e69748.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > *, class ::statiskit::UnivariateDataFrame const *, double const & >());
    class_c4fa66fd13165a0abce0c43742e69748.def(pybind11::init< class ::statiskit::ShiftedDistributionEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_c4fa66fd13165a0abce0c43742e69748.def("get_estimation", method_pointer_bebe30cc49d553888a62e65572123cd4, pybind11::return_value_policy::reference_internal, "");

}