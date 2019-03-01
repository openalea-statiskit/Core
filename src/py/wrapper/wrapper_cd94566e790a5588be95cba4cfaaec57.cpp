#include "_core.h"

::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::*method_pointer_66fd11e805a352baa812e0b7cef8f008)()const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::size;
struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::*method_pointer_e561b539b17f5d158286878b6886d342)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::get_estimation;
double const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateConditionalDistribution, ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::*method_pointer_4a3ad2c36b0a53ecbf842b6a176cd953)(::statiskit::Index const &)const= &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::get_score;

namespace autowig {
}

void wrapper_cd94566e790a5588be95cba4cfaaec57(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >, autowig::HolderType< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > > class_cd94566e790a5588be95cba4cfaaec57(module, "_Selection_cd94566e790a5588be95cba4cfaaec57", "");
    class_cd94566e790a5588be95cba4cfaaec57.def(pybind11::init<  >());
    class_cd94566e790a5588be95cba4cfaaec57.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_cd94566e790a5588be95cba4cfaaec57.def(pybind11::init< struct ::statiskit::ContinuousUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >());
    class_cd94566e790a5588be95cba4cfaaec57.def(pybind11::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateConditionalDistribution, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > const & >());
    class_cd94566e790a5588be95cba4cfaaec57.def("__len__", method_pointer_66fd11e805a352baa812e0b7cef8f008, "");
    class_cd94566e790a5588be95cba4cfaaec57.def("get_estimation", method_pointer_e561b539b17f5d158286878b6886d342, pybind11::return_value_policy::reference_internal, "");
    class_cd94566e790a5588be95cba4cfaaec57.def("get_score", method_pointer_4a3ad2c36b0a53ecbf842b6a176cd953, pybind11::return_value_policy::copy, "");

}