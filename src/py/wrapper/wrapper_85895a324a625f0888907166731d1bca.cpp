#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_d074f81d124c593a9483366686044479)()const= &::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_85895a324a625f0888907166731d1bca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > class_85895a324a625f0888907166731d1bca(module, "_ActiveEstimation_85895a324a625f0888907166731d1bca", "");
    class_85895a324a625f0888907166731d1bca.def(pybind11::init<  >());
    class_85895a324a625f0888907166731d1bca.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_85895a324a625f0888907166731d1bca.def(pybind11::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_85895a324a625f0888907166731d1bca.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >());
    class_85895a324a625f0888907166731d1bca.def("get_data", method_pointer_d074f81d124c593a9483366686044479, pybind11::return_value_policy::reference_internal, "");

}