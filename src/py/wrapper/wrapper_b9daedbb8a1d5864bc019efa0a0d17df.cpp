#include "_core.h"

namespace autowig
{
    typedef ::statiskit::MultivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::MultivariateConditionalDistributionEstimation::MultivariateConditionalDistributionEstimation;

            typedef ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * return_type_84032d21ab6f50bd8e28510f7cd5494f;
            virtual return_type_84032d21ab6f50bd8e28510f7cd5494f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_84032d21ab6f50bd8e28510f7cd5494f, class_type, get_estimated, ); };
    };
}

::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * (::statiskit::MultivariateConditionalDistributionEstimation::*method_pointer_84032d21ab6f50bd8e28510f7cd5494f)()const= &::statiskit::MultivariateConditionalDistributionEstimation::get_estimated;

namespace autowig {
}

void wrapper_b9daedbb8a1d5864bc019efa0a0d17df(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::MultivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type > class_b9daedbb8a1d5864bc019efa0a0d17df(module, "MultivariateConditionalDistributionEstimation", "");
    class_b9daedbb8a1d5864bc019efa0a0d17df.def("get_estimated", method_pointer_84032d21ab6f50bd8e28510f7cd5494f, pybind11::return_value_policy::reference_internal, "");

}