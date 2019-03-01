#include "_core.h"


namespace autowig {
}

void wrapper_fe5c14ebd9715db583a8fcea54e1d965(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::WeightedMultivariateData, autowig::HolderType< class ::statiskit::WeightedMultivariateData >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateData, class ::statiskit::WeightedMultivariateData, class ::statiskit::WeightedData< struct ::statiskit::MultivariateData > > > class_fe5c14ebd9715db583a8fcea54e1d965(module, "WeightedMultivariateData", "");
    class_fe5c14ebd9715db583a8fcea54e1d965.def(pybind11::init< struct ::statiskit::MultivariateData const * >());
    class_fe5c14ebd9715db583a8fcea54e1d965.def(pybind11::init< struct ::statiskit::MultivariateData const *, class ::std::vector< double, class ::std::allocator< double > > const & >());
    class_fe5c14ebd9715db583a8fcea54e1d965.def(pybind11::init< class ::statiskit::WeightedMultivariateData const & >());

}