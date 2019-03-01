#include "_core.h"

namespace autowig
{
    typedef ::statiskit::DiscreteMultivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::DiscreteMultivariateConditionalDistributionEstimation;

            typedef ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * return_type_84032d21ab6f50bd8e28510f7cd5494f;
            virtual return_type_84032d21ab6f50bd8e28510f7cd5494f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_84032d21ab6f50bd8e28510f7cd5494f, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_9af672b8799e52dda111d00a974022cd(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_9af672b8799e52dda111d00a974022cd(module, "DiscreteMultivariateConditionalDistributionEstimation", "");

}