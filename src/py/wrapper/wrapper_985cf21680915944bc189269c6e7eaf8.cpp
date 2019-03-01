#include "_core.h"

double const & (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_d3ccedb55b8d5b6ca53ec7de0d9a0edc)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_mindiff;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_943d6f125002594588773db745c20a0e)(double const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_mindiff;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_93507ddbedc4537da09b64ff5c506d66)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_minits;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_a5ad8543bef75abe82c8068ed14680b0)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_minits;
unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_f6284a65c2bb5871951583a96f2f4150)()const= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::get_maxits;
void  (::statiskit::Optimization< ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::*method_pointer_28f5d6e7fa1552b2a937cffd4bed119d)(unsigned int const &)= &::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::set_maxits;

namespace autowig {
}

void wrapper_985cf21680915944bc189269c6e7eaf8(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >, autowig::HolderType< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > class_985cf21680915944bc189269c6e7eaf8(module, "_Optimization_985cf21680915944bc189269c6e7eaf8", "");
    class_985cf21680915944bc189269c6e7eaf8.def(pybind11::init<  >());
    class_985cf21680915944bc189269c6e7eaf8.def(pybind11::init< class ::statiskit::Optimization< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > const & >());
    class_985cf21680915944bc189269c6e7eaf8.def("get_mindiff", method_pointer_d3ccedb55b8d5b6ca53ec7de0d9a0edc, pybind11::return_value_policy::copy, "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_mindiff", method_pointer_943d6f125002594588773db745c20a0e, "");
    class_985cf21680915944bc189269c6e7eaf8.def("get_minits", method_pointer_93507ddbedc4537da09b64ff5c506d66, "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_minits", method_pointer_a5ad8543bef75abe82c8068ed14680b0, "");
    class_985cf21680915944bc189269c6e7eaf8.def("get_maxits", method_pointer_f6284a65c2bb5871951583a96f2f4150, "");
    class_985cf21680915944bc189269c6e7eaf8.def("set_maxits", method_pointer_28f5d6e7fa1552b2a937cffd4bed119d, "");

}