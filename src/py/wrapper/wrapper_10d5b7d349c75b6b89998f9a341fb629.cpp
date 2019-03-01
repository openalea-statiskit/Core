#include "_core.h"

namespace autowig
{
    typedef ::statiskit::ContinuousUnivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::ContinuousUnivariateConditionalDistributionEstimation;

            typedef ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * return_type_c18e0a4c85e9560fa63a48b370681cca;
            virtual return_type_c18e0a4c85e9560fa63a48b370681cca get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_c18e0a4c85e9560fa63a48b370681cca, class_type, get_estimated, ); };
    };
}


namespace autowig {
}

void wrapper_10d5b7d349c75b6b89998f9a341fb629(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::UnivariateConditionalDistributionEstimation > class_10d5b7d349c75b6b89998f9a341fb629(module, "ContinuousUnivariateConditionalDistributionEstimation", "");

}