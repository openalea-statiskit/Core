#include "_core.h"


namespace autowig {
}

void wrapper_0a36039624465699ab0fb3ebba56695a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::Estimator, autowig::HolderType< class ::statiskit::Estimator >::Type > class_0a36039624465699ab0fb3ebba56695a(module, "Estimator", "");
    class_0a36039624465699ab0fb3ebba56695a.def(pybind11::init< class ::statiskit::Estimator const & >());
    class_0a36039624465699ab0fb3ebba56695a.def(pybind11::init<  >());

}