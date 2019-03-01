#include "_core.h"

double const & (::statiskit::GumbelMaxDistribution::*method_pointer_bd3003bf86365b85b7c0736015ae8e0f)()const= &::statiskit::GumbelMaxDistribution::get_mu;
void  (::statiskit::GumbelMaxDistribution::*method_pointer_1f54ac04ac0b5ff9966afabee8fe3031)(double const &)= &::statiskit::GumbelMaxDistribution::set_mu;
double const & (::statiskit::GumbelMaxDistribution::*method_pointer_ce603175d9aa53e4ab7b1b8c0364c7ed)()const= &::statiskit::GumbelMaxDistribution::get_sigma;
void  (::statiskit::GumbelMaxDistribution::*method_pointer_203ef61493455ba6b5f6b85cdeb364a3)(double const &)= &::statiskit::GumbelMaxDistribution::set_sigma;

namespace autowig {
}

void wrapper_524b20b628dd5516a98e9f31da398dbf(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GumbelMaxDistribution, autowig::HolderType< class ::statiskit::GumbelMaxDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelMaxDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_524b20b628dd5516a98e9f31da398dbf(module, "GumbelMaxDistribution", "This class GumbelMaxDistribution represents a `Gumbel\ndistribution <https://en.wikipedia.org/wiki/Gumbel_distribution>`__\n(maximum).\n\nThe Gumbel distribution (maximum) is an univariate continuous\ndistribution. It is also called extreme value type I distribution\n(maximum). The support is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def(pybind11::init<  >());
    class_524b20b628dd5516a98e9f31da398dbf.def(pybind11::init< double const &, double const & >());
    class_524b20b628dd5516a98e9f31da398dbf.def(pybind11::init< class ::statiskit::GumbelMaxDistribution const & >());
    class_524b20b628dd5516a98e9f31da398dbf.def("get_mu", method_pointer_bd3003bf86365b85b7c0736015ae8e0f, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("set_mu", method_pointer_1f54ac04ac0b5ff9966afabee8fe3031, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("get_sigma", method_pointer_ce603175d9aa53e4ab7b1b8c0364c7ed, pybind11::return_value_policy::copy, "Get the value of the scale prameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("set_sigma", method_pointer_203ef61493455ba6b5f6b85cdeb364a3, "Set the value of the scale prameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}