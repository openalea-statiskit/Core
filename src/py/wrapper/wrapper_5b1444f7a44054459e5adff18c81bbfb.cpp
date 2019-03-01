#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_dc50791e84d858309ea9d18d7a6a8593)()const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::size;
struct ::statiskit::CategoricalMultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_c466036c7d4c5997977c58ba3df72e52)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalMultivariateDistribution, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_c70a2a8ff99657d09028c289a32546a8)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_5b1444f7a44054459e5adff18c81bbfb(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_5b1444f7a44054459e5adff18c81bbfb(module, "_Selection_5b1444f7a44054459e5adff18c81bbfb", "");
    class_5b1444f7a44054459e5adff18c81bbfb.def(pybind11::init<  >());
    class_5b1444f7a44054459e5adff18c81bbfb.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_5b1444f7a44054459e5adff18c81bbfb.def(pybind11::init< struct ::statiskit::CategoricalMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_5b1444f7a44054459e5adff18c81bbfb.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalMultivariateDistribution, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >());
    class_5b1444f7a44054459e5adff18c81bbfb.def("__len__", method_pointer_dc50791e84d858309ea9d18d7a6a8593, "");
    class_5b1444f7a44054459e5adff18c81bbfb.def("get_estimation", method_pointer_c466036c7d4c5997977c58ba3df72e52, pybind11::return_value_policy::reference_internal, "");
    class_5b1444f7a44054459e5adff18c81bbfb.def("get_score", method_pointer_c70a2a8ff99657d09028c289a32546a8, pybind11::return_value_policy::copy, "");

}