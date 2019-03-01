#include "_core.h"

struct ::statiskit::UnivariateData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_bf88b46abf975c5ab71ed23250a7b63b)()const= &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_data;

namespace autowig {
}

void wrapper_20f43f33e75f5ed8baf3e95be100740a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_20f43f33e75f5ed8baf3e95be100740a(module, "_ActiveEstimation_20f43f33e75f5ed8baf3e95be100740a", "");
    class_20f43f33e75f5ed8baf3e95be100740a.def(pybind11::init<  >());
    class_20f43f33e75f5ed8baf3e95be100740a.def(pybind11::init< struct ::statiskit::UnivariateData const * >());
    class_20f43f33e75f5ed8baf3e95be100740a.def(pybind11::init< struct ::statiskit::CategoricalUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >());
    class_20f43f33e75f5ed8baf3e95be100740a.def(pybind11::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_20f43f33e75f5ed8baf3e95be100740a.def("get_data", method_pointer_bf88b46abf975c5ab71ed23250a7b63b, pybind11::return_value_policy::reference_internal, "");

}