#include "_core.h"

struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_b124bfab756f50df8050560ecaa94248)()const= &::statiskit::SplittingDistributionEstimation::Estimator::get_sum;
void  (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_275c030a2f8c5f20bdeeec13254c88bc)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &)= &::statiskit::SplittingDistributionEstimation::Estimator::set_sum;
struct ::statiskit::SingularDistributionEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_14f11f804e3150fb80f8d42cc2474e9b)()const= &::statiskit::SplittingDistributionEstimation::Estimator::get_singular;
void  (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_a2eb3e7692de580c9820f8fa9bc5849a)(struct ::statiskit::SingularDistributionEstimation::Estimator const &)= &::statiskit::SplittingDistributionEstimation::Estimator::set_singular;

namespace autowig {
}

void wrapper_1dee5220708e5da08c33a1d4fa45151b(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::SplittingDistributionEstimation::Estimator, autowig::HolderType< class ::statiskit::SplittingDistributionEstimation::Estimator >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > class_1dee5220708e5da08c33a1d4fa45151b(module, "Estimator", "");
    class_1dee5220708e5da08c33a1d4fa45151b.def(pybind11::init<  >());
    class_1dee5220708e5da08c33a1d4fa45151b.def(pybind11::init< class ::statiskit::SplittingDistributionEstimation::Estimator const & >());
    class_1dee5220708e5da08c33a1d4fa45151b.def("get_sum", method_pointer_b124bfab756f50df8050560ecaa94248, pybind11::return_value_policy::reference_internal, "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("set_sum", method_pointer_275c030a2f8c5f20bdeeec13254c88bc, "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("get_singular", method_pointer_14f11f804e3150fb80f8d42cc2474e9b, pybind11::return_value_policy::reference_internal, "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("set_singular", method_pointer_a2eb3e7692de580c9820f8fa9bc5849a, "");

}