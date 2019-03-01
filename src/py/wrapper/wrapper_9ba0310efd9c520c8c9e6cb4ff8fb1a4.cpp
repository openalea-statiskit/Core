#include "_core.h"

struct ::statiskit::UnivariateDistribution const * (::statiskit::SlopeHeuristicSelection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_8204f20a4c0f58e1adcc7dacf271e202)(::statiskit::Index const &)const= &::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_proposal;
struct ::statiskit::UnivariateData const * (::statiskit::SlopeHeuristicSelection< ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_2ccd9b83f3265937aabf1b8641fbbba0)()const= &::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_9ba0310efd9c520c8c9e6cb4ff8fb1a4(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::SlopeHeuristic, struct ::statiskit::ContinuousUnivariateDistributionEstimation > class_9ba0310efd9c520c8c9e6cb4ff8fb1a4(module, "_SlopeHeuristicSelection_9ba0310efd9c520c8c9e6cb4ff8fb1a4", "");
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def(pybind11::init< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def("get_proposal", method_pointer_8204f20a4c0f58e1adcc7dacf271e202, pybind11::return_value_policy::reference_internal, "");
    class_9ba0310efd9c520c8c9e6cb4ff8fb1a4.def("get_data", method_pointer_2ccd9b83f3265937aabf1b8641fbbba0, pybind11::return_value_policy::reference_internal, "");

}