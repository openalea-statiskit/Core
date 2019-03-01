#include "_core.h"

bool  (::statiskit::UnivariateConditionalData::Generator::*method_pointer_dbd5d1e6edee5e428a604bd20bd9b331)()const= &::statiskit::UnivariateConditionalData::Generator::is_valid;
class ::statiskit::UnivariateConditionalData::Generator & (::statiskit::UnivariateConditionalData::Generator::*method_pointer_48e3ad08fc4b5eb885552c771f60437c)()= &::statiskit::UnivariateConditionalData::Generator::operator++;
struct ::statiskit::UnivariateEvent const * (::statiskit::UnivariateConditionalData::Generator::*method_pointer_3493ddb18deb5b769d44454484d55164)()const= &::statiskit::UnivariateConditionalData::Generator::response;
struct ::statiskit::MultivariateEvent const * (::statiskit::UnivariateConditionalData::Generator::*method_pointer_0629b3c1d1b15640b93d4865d7fb2e1a)()const= &::statiskit::UnivariateConditionalData::Generator::explanatories;
double  (::statiskit::UnivariateConditionalData::Generator::*method_pointer_cde76156e34b5300ab1ff4b31c270ba4)()const= &::statiskit::UnivariateConditionalData::Generator::weight;

namespace autowig {
    void method_decorator_48e3ad08fc4b5eb885552c771f60437c(class ::statiskit::UnivariateConditionalData::Generator & instance, const class ::statiskit::UnivariateConditionalData::Generator & param_out) { instance.operator++() = param_out; }
}

void wrapper_c37f435056a151f5a398c0a2e86d752a(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::UnivariateConditionalData::Generator, autowig::HolderType< class ::statiskit::UnivariateConditionalData::Generator >::Type > class_c37f435056a151f5a398c0a2e86d752a(module, "Generator", "");
    class_c37f435056a151f5a398c0a2e86d752a.def(pybind11::init< class ::statiskit::UnivariateConditionalData const * >());
    class_c37f435056a151f5a398c0a2e86d752a.def("is_valid", method_pointer_dbd5d1e6edee5e428a604bd20bd9b331, "");
    class_c37f435056a151f5a398c0a2e86d752a.def("__next__", method_pointer_48e3ad08fc4b5eb885552c771f60437c, pybind11::return_value_policy::reference_internal, "");
    class_c37f435056a151f5a398c0a2e86d752a.def("__next__", autowig::method_decorator_48e3ad08fc4b5eb885552c771f60437c);
    class_c37f435056a151f5a398c0a2e86d752a.def("response", method_pointer_3493ddb18deb5b769d44454484d55164, pybind11::return_value_policy::reference_internal, "");
    class_c37f435056a151f5a398c0a2e86d752a.def("explanatories", method_pointer_0629b3c1d1b15640b93d4865d7fb2e1a, pybind11::return_value_policy::reference_internal, "");
    class_c37f435056a151f5a398c0a2e86d752a.def("weight", method_pointer_cde76156e34b5300ab1ff4b31c270ba4, "");

}