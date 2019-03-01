#include "_core.h"

void  (::statiskit::VectorSampleSpace::*method_pointer_06b47ef228045a14a15a6565b1762490)(::statiskit::Index const &, struct ::statiskit::UnivariateSampleSpace const &)= &::statiskit::VectorSampleSpace::set;

namespace autowig {
}

void wrapper_98dec83d5b055bb7bd34151081ce3693(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::VectorSampleSpace, autowig::HolderType< class ::statiskit::VectorSampleSpace >::Type, struct ::statiskit::MultivariateSampleSpace > class_98dec83d5b055bb7bd34151081ce3693(module, "VectorSampleSpace", "");
    class_98dec83d5b055bb7bd34151081ce3693.def(pybind11::init< class ::std::vector< struct ::statiskit::UnivariateSampleSpace *, class ::std::allocator< struct ::statiskit::UnivariateSampleSpace * > > const & >());
    class_98dec83d5b055bb7bd34151081ce3693.def(pybind11::init< class ::statiskit::VectorSampleSpace const & >());
    class_98dec83d5b055bb7bd34151081ce3693.def("set", method_pointer_06b47ef228045a14a15a6565b1762490, "");

}