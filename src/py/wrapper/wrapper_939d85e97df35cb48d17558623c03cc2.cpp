#include "_core.h"

double  (::statiskit::ContinuousUnivariateMixtureDistribution::*method_pointer_5a80b4f2d62d5f8eb5a5eab5c8e22df8)()const= &::statiskit::ContinuousUnivariateMixtureDistribution::get_epsilon;
void  (::statiskit::ContinuousUnivariateMixtureDistribution::*method_pointer_7671a0e8c58458eeaf32f52d562575f5)(double const &)= &::statiskit::ContinuousUnivariateMixtureDistribution::set_epsilon;

namespace autowig {
}

void wrapper_939d85e97df35cb48d17558623c03cc2(pybind11::module& module)
{

    pybind11::class_<struct ::statiskit::ContinuousUnivariateMixtureDistribution, autowig::HolderType< struct ::statiskit::ContinuousUnivariateMixtureDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::QuantitativeUnivariateMixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > class_939d85e97df35cb48d17558623c03cc2(module, "ContinuousUnivariateMixtureDistribution", "");
    class_939d85e97df35cb48d17558623c03cc2.def(pybind11::init< class ::std::vector< struct ::statiskit::ContinuousUnivariateDistribution *, class ::std::allocator< struct ::statiskit::ContinuousUnivariateDistribution * > > const, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & >());
    class_939d85e97df35cb48d17558623c03cc2.def(pybind11::init< struct ::statiskit::ContinuousUnivariateMixtureDistribution const & >());
    class_939d85e97df35cb48d17558623c03cc2.def("get_epsilon", method_pointer_5a80b4f2d62d5f8eb5a5eab5c8e22df8, "");
    class_939d85e97df35cb48d17558623c03cc2.def("set_epsilon", method_pointer_7671a0e8c58458eeaf32f52d562575f5, "");

}