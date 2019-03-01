#include "_core.h"

class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::LazyEstimation< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_58cf0b13ace755bf959ade66df5d35d0)()const= &::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::copy;

namespace autowig {
}

void wrapper_3312cf49434759ee93e09764ddc76065(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::HolderType< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation > class_3312cf49434759ee93e09764ddc76065(module, "_LazyEstimation_3312cf49434759ee93e09764ddc76065", "");
    class_3312cf49434759ee93e09764ddc76065.def(pybind11::init<  >());
    class_3312cf49434759ee93e09764ddc76065.def(pybind11::init< struct ::statiskit::CategoricalUnivariateDistribution const * >());
    class_3312cf49434759ee93e09764ddc76065.def(pybind11::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >());
    class_3312cf49434759ee93e09764ddc76065.def("copy", method_pointer_58cf0b13ace755bf959ade66df5d35d0, "");

}