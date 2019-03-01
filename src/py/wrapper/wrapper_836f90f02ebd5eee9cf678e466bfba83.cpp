#include "_core.h"

double const & (::statiskit::GumbelMinDistribution::*method_pointer_cdf29aaffbbe510897dab33d10e8b014)()const= &::statiskit::GumbelMinDistribution::get_mu;
void  (::statiskit::GumbelMinDistribution::*method_pointer_1f83644fe4ea54158b61ff4a154ebb0e)(double const &)= &::statiskit::GumbelMinDistribution::set_mu;
double const & (::statiskit::GumbelMinDistribution::*method_pointer_8c5638b106ca528c9517dd2f55df1032)()const= &::statiskit::GumbelMinDistribution::get_sigma;
void  (::statiskit::GumbelMinDistribution::*method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d)(double const &)= &::statiskit::GumbelMinDistribution::set_sigma;

namespace autowig {
}

void wrapper_836f90f02ebd5eee9cf678e466bfba83(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GumbelMinDistribution, autowig::HolderType< class ::statiskit::GumbelMinDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GumbelMinDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_836f90f02ebd5eee9cf678e466bfba83(module, "GumbelMinDistribution", "This class GumbelMinDistribution represents a Gumbel distribution\n(minimum).\n\nA random component :math:`X` is said to folloow a Gumbel distribution\n(minimum) if :math:`Y=-X` follows a Gumbel distribution (maximum). The\nGumbel distribution (minimum) is an univariate continuous distribution.\nIt is also called extreme value type I distribution (minimum). The\nsupport is the set of real values :math:`\\mathbb{R}`. @see\nstatiskit::GumbelMaxDistribution\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def(pybind11::init<  >());
    class_836f90f02ebd5eee9cf678e466bfba83.def(pybind11::init< double const &, double const & >());
    class_836f90f02ebd5eee9cf678e466bfba83.def(pybind11::init< class ::statiskit::GumbelMinDistribution const & >());
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_mu", method_pointer_cdf29aaffbbe510897dab33d10e8b014, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_mu", method_pointer_1f83644fe4ea54158b61ff4a154ebb0e, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_sigma", method_pointer_8c5638b106ca528c9517dd2f55df1032, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_sigma", method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}