#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::*method_pointer_d4bb3d2afbd95e87b6ad8cf1bb1e4b95)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::size;
struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::*method_pointer_f5bd52ac209654ed9dec95069699c579)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteMultivariateConditionalDistribution, ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::*method_pointer_39f341fd31d750f397b0a8b22356e6de)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_e1e7647ed4235775b6d085dd28a83675(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > > class_e1e7647ed4235775b6d085dd28a83675(module, "_Selection_e1e7647ed4235775b6d085dd28a83675", "");
    class_e1e7647ed4235775b6d085dd28a83675.def(pybind11::init<  >());
    class_e1e7647ed4235775b6d085dd28a83675.def(pybind11::init< class ::statiskit::MultivariateConditionalData const * >());
    class_e1e7647ed4235775b6d085dd28a83675.def(pybind11::init< struct ::statiskit::DiscreteMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >());
    class_e1e7647ed4235775b6d085dd28a83675.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateConditionalDistribution, struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation > const & >());
    class_e1e7647ed4235775b6d085dd28a83675.def("__len__", method_pointer_d4bb3d2afbd95e87b6ad8cf1bb1e4b95, "");
    class_e1e7647ed4235775b6d085dd28a83675.def("get_estimation", method_pointer_f5bd52ac209654ed9dec95069699c579, pybind11::return_value_policy::reference_internal, "");
    class_e1e7647ed4235775b6d085dd28a83675.def("get_score", method_pointer_39f341fd31d750f397b0a8b22356e6de, pybind11::return_value_policy::copy, "");

}