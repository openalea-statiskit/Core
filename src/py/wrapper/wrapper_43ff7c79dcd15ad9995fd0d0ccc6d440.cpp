#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateDistributionEstimation::MultivariateDistributionEstimation;

            typedef ::statiskit::MultivariateDistributionEstimation::estimated_type const * return_type_123ca6ff048a55c3916851be0f12a662;
            virtual return_type_123ca6ff048a55c3916851be0f12a662 get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_123ca6ff048a55c3916851be0f12a662, class_type, get_estimated, ); };
    };
}

::statiskit::MultivariateDistributionEstimation::estimated_type const * (::statiskit::MultivariateDistributionEstimation::*method_pointer_123ca6ff048a55c3916851be0f12a662)()const= &::statiskit::MultivariateDistributionEstimation::get_estimated;

namespace autowig {
}

void wrapper_43ff7c79dcd15ad9995fd0d0ccc6d440(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateDistributionEstimation >::Type > class_43ff7c79dcd15ad9995fd0d0ccc6d440(module, "MultivariateDistributionEstimation", "");
    class_43ff7c79dcd15ad9995fd0d0ccc6d440.def("get_estimated", method_pointer_123ca6ff048a55c3916851be0f12a662, pybind11::return_value_policy::reference_internal, "");

}