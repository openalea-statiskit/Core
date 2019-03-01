#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_6a6b64f1ab6e58e68c2b39e2a8eddd9e)()const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::size;
struct ::statiskit::DiscreteMultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_015152c98db65c5aab620258a708a5ea)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::DiscreteMultivariateDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_55ec20d0857a5920bf96f101e2a5ab99)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_d9f7731b9dbc5740add8fc7749d9283d(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_d9f7731b9dbc5740add8fc7749d9283d(module, "_Selection_d9f7731b9dbc5740add8fc7749d9283d", "");
    class_d9f7731b9dbc5740add8fc7749d9283d.def(pybind11::init<  >());
    class_d9f7731b9dbc5740add8fc7749d9283d.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_d9f7731b9dbc5740add8fc7749d9283d.def(pybind11::init< struct ::statiskit::DiscreteMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >());
    class_d9f7731b9dbc5740add8fc7749d9283d.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::DiscreteMultivariateDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >());
    class_d9f7731b9dbc5740add8fc7749d9283d.def("__len__", method_pointer_6a6b64f1ab6e58e68c2b39e2a8eddd9e, "");
    class_d9f7731b9dbc5740add8fc7749d9283d.def("get_estimation", method_pointer_015152c98db65c5aab620258a708a5ea, pybind11::return_value_policy::reference_internal, "");
    class_d9f7731b9dbc5740add8fc7749d9283d.def("get_score", method_pointer_55ec20d0857a5920bf96f101e2a5ab99, pybind11::return_value_policy::copy, "");

}