#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_662f72b348805d2c918ae364d40dee45)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::size;
struct ::statiskit::CategoricalUnivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_cb515482fb0d5ddb8e177b432fc259da)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_2705142a6017542faf737e3a9be93439)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_1c16077fc2b0519d806e8d900500edde(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_1c16077fc2b0519d806e8d900500edde(module, "_Selection_1c16077fc2b0519d806e8d900500edde", "");
    class_1c16077fc2b0519d806e8d900500edde.def(pybind11::init<  >());
    class_1c16077fc2b0519d806e8d900500edde.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_1c16077fc2b0519d806e8d900500edde.def(pybind11::init< struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_1c16077fc2b0519d806e8d900500edde.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_1c16077fc2b0519d806e8d900500edde.def("__len__", method_pointer_662f72b348805d2c918ae364d40dee45, "");
    class_1c16077fc2b0519d806e8d900500edde.def("get_estimation", method_pointer_cb515482fb0d5ddb8e177b432fc259da, pybind11::return_value_policy::reference_internal, "");
    class_1c16077fc2b0519d806e8d900500edde.def("get_score", method_pointer_2705142a6017542faf737e3a9be93439, pybind11::return_value_policy::copy, "");

}