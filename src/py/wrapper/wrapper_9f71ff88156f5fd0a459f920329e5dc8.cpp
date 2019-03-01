#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousMultivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::ContinuousMultivariateConditionalDistributionEstimation;

            typedef ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * return_type_84032d21ab6f50bd8e28510f7cd5494f;
            virtual return_type_84032d21ab6f50bd8e28510f7cd5494f get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_84032d21ab6f50bd8e28510f7cd5494f, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_9f71ff88156f5fd0a459f920329e5dc8(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type, struct ::statiskit::MultivariateConditionalDistributionEstimation > class_9f71ff88156f5fd0a459f920329e5dc8(module, "ContinuousMultivariateConditionalDistributionEstimation", "");

}