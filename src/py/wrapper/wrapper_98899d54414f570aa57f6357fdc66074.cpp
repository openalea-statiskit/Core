#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_180321696f555b70b46c79f809e1d58b)()const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::size;
struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_6df08aa67d2a56b7bdf32ed30b0bf1d0)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_6a54b42ab3d65292a338e9e8102df431)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_98899d54414f570aa57f6357fdc66074(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > class_98899d54414f570aa57f6357fdc66074(module, "_Selection_98899d54414f570aa57f6357fdc66074", "");
    class_98899d54414f570aa57f6357fdc66074.def(pybind11::init<  >());
    class_98899d54414f570aa57f6357fdc66074.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_98899d54414f570aa57f6357fdc66074.def(pybind11::init< struct ::statiskit::CategoricalUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_98899d54414f570aa57f6357fdc66074.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >());
    class_98899d54414f570aa57f6357fdc66074.def("__len__", method_pointer_180321696f555b70b46c79f809e1d58b, "");
    class_98899d54414f570aa57f6357fdc66074.def("get_estimation", method_pointer_6df08aa67d2a56b7bdf32ed30b0bf1d0, pybind11::return_value_policy::reference_internal, "");
    class_98899d54414f570aa57f6357fdc66074.def("get_score", method_pointer_6a54b42ab3d65292a338e9e8102df431, pybind11::return_value_policy::copy, "");

}