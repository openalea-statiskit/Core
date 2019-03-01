#include "_core.h"

struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_0047c5e9a77a5d6f8bec09c40a32def5)()const= &::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_9cf0f707397c5385baa38f245ba80437(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_9cf0f707397c5385baa38f245ba80437(module, "_ActiveEstimation_9cf0f707397c5385baa38f245ba80437", "");
    class_9cf0f707397c5385baa38f245ba80437.def(pybind11::init<  >());
    class_9cf0f707397c5385baa38f245ba80437.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_9cf0f707397c5385baa38f245ba80437.def(pybind11::init< class ::statiskit::MultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_9cf0f707397c5385baa38f245ba80437.def(pybind11::init< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_9cf0f707397c5385baa38f245ba80437.def("get_data", method_pointer_0047c5e9a77a5d6f8bec09c40a32def5, pybind11::return_value_policy::reference_internal, "");

}