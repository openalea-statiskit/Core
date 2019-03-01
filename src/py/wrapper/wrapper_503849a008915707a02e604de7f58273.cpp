#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_0de45a973ac950faaca5e355509387a5)()const= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::size;
struct ::statiskit::SingularDistributionEstimation const * (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_12557a639d545aa0ab998aafb61048dd)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::SingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_d1c0f88f0cc75e1eacc8a731732f12ed)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_503849a008915707a02e604de7f58273(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > > class_503849a008915707a02e604de7f58273(module, "_Selection_503849a008915707a02e604de7f58273", "");
    class_503849a008915707a02e604de7f58273.def(pybind11::init<  >());
    class_503849a008915707a02e604de7f58273.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_503849a008915707a02e604de7f58273.def(pybind11::init< struct ::statiskit::SingularDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_503849a008915707a02e604de7f58273.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::SingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >());
    class_503849a008915707a02e604de7f58273.def("__len__", method_pointer_0de45a973ac950faaca5e355509387a5, "");
    class_503849a008915707a02e604de7f58273.def("get_estimation", method_pointer_12557a639d545aa0ab998aafb61048dd, pybind11::return_value_policy::reference_internal, "");
    class_503849a008915707a02e604de7f58273.def("get_score", method_pointer_d1c0f88f0cc75e1eacc8a731732f12ed, pybind11::return_value_policy::copy, "");

}