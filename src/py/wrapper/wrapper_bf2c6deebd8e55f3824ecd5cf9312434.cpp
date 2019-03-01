#include "_core.h"

namespace autowig
{
    typedef ::statiskit::UnivariateConditionalDistributionEstimation class_type;

    class Trampoline : public class_type
    {
        public:
            using ::statiskit::UnivariateConditionalDistributionEstimation::UnivariateConditionalDistributionEstimation;

            typedef ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * return_type_c18e0a4c85e9560fa63a48b370681cca;
            virtual return_type_c18e0a4c85e9560fa63a48b370681cca get_estimated() const override { PYBIND11_OVERLOAD_PURE(return_type_c18e0a4c85e9560fa63a48b370681cca, class_type, get_estimated, ); };
    };
}

::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * (::statiskit::UnivariateConditionalDistributionEstimation::*method_pointer_c18e0a4c85e9560fa63a48b370681cca)()const= &::statiskit::UnivariateConditionalDistributionEstimation::get_estimated;

namespace autowig {
}

void wrapper_bf2c6deebd8e55f3824ecd5cf9312434(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::UnivariateConditionalDistributionEstimation, autowig::Trampoline, autowig::HolderType< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type > class_bf2c6deebd8e55f3824ecd5cf9312434(module, "UnivariateConditionalDistributionEstimation", "");
    class_bf2c6deebd8e55f3824ecd5cf9312434.def("get_estimated", method_pointer_c18e0a4c85e9560fa63a48b370681cca, pybind11::return_value_policy::reference_internal, "");

}