#include "_core.h"

void  (::statiskit::VectorEvent::*method_pointer_546c2692954654889471d670fa584d26)(::statiskit::Index const &, struct ::statiskit::UnivariateEvent const &)= &::statiskit::VectorEvent::set;

namespace autowig {
}

void wrapper_334941caf3de5e3ab25e41d07fa1d9ca(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::VectorEvent, autowig::HolderType< class ::statiskit::VectorEvent >::Type, struct ::statiskit::MultivariateEvent > class_334941caf3de5e3ab25e41d07fa1d9ca(module, "VectorEvent", "");
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< ::statiskit::Index const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< class ::statiskit::VectorEvent const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def(pybind11::init< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_334941caf3de5e3ab25e41d07fa1d9ca.def("set", method_pointer_546c2692954654889471d670fa584d26, "");

}