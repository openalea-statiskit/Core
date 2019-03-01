#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::NormalDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_e955cd2b8e7c5286a371643be63bcf14)()const= &::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_19ee605677815ce58ebdc169d44e3d8c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_19ee605677815ce58ebdc169d44e3d8c(module, "_ActiveEstimation_19ee605677815ce58ebdc169d44e3d8c", "");
    class_19ee605677815ce58ebdc169d44e3d8c.def(pybind11::init<  >());
    class_19ee605677815ce58ebdc169d44e3d8c.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_19ee605677815ce58ebdc169d44e3d8c.def(pybind11::init< class ::statiskit::NormalDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_19ee605677815ce58ebdc169d44e3d8c.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::NormalDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >());
    class_19ee605677815ce58ebdc169d44e3d8c.def("get_data", method_pointer_e955cd2b8e7c5286a371643be63bcf14, pybind11::return_value_policy::reference_internal, "");

}