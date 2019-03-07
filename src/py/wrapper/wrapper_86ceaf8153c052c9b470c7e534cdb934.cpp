#include "_core.h"


namespace autowig {
}

void wrapper_86ceaf8153c052c9b470c7e534cdb934(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > >, autowig::HolderType< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > >::Type, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > class_86ceaf8153c052c9b470c7e534cdb934(module, "_PolymorphicCopy_86ceaf8153c052c9b470c7e534cdb934", "");
    class_86ceaf8153c052c9b470c7e534cdb934.def(pybind11::init<  >());
    class_86ceaf8153c052c9b470c7e534cdb934.def(pybind11::init< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateData, class ::statiskit::WeightedUnivariateData, class ::statiskit::WeightedData< struct ::statiskit::UnivariateData > > const & >());

}