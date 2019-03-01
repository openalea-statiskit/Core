#include "_core.h"

double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b)()const= &::statiskit::NonStandardStudentDistribution::get_mu;
void  (::statiskit::NonStandardStudentDistribution::*method_pointer_34426514b3da565fbd076b2679558cec)(double const &)= &::statiskit::NonStandardStudentDistribution::set_mu;
double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8)()const= &::statiskit::NonStandardStudentDistribution::get_sigma;
void  (::statiskit::NonStandardStudentDistribution::*method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3)(double const &)= &::statiskit::NonStandardStudentDistribution::set_sigma;
double const & (::statiskit::NonStandardStudentDistribution::*method_pointer_538b03682869588fb286161905474998)()const= &::statiskit::NonStandardStudentDistribution::get_nu;
void  (::statiskit::NonStandardStudentDistribution::*method_pointer_9dfb534c3b10540ea1417317d4aca3b8)(double const &)= &::statiskit::NonStandardStudentDistribution::set_nu;

namespace autowig {
}

void wrapper_90255c732933534b957e042c1796455c(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::NonStandardStudentDistribution, autowig::HolderType< class ::statiskit::NonStandardStudentDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::NonStandardStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_90255c732933534b957e042c1796455c(module, "NonStandardStudentDistribution", "This class NonStandardStudentDistribution represents a non standardized\nStudent distribution.\n\nThe non-standardized Student distribution is an univariate continuous\ndistribution. The support is the set of real values :math:`\\mathbb{R}`.\n\n");
    class_90255c732933534b957e042c1796455c.def(pybind11::init<  >());
    class_90255c732933534b957e042c1796455c.def(pybind11::init< double const &, double const &, double const & >());
    class_90255c732933534b957e042c1796455c.def(pybind11::init< class ::statiskit::NonStandardStudentDistribution const & >());
    class_90255c732933534b957e042c1796455c.def("get_mu", method_pointer_b49bbe5d23ef531097f5fc8aeed6ce8b, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_mu", method_pointer_34426514b3da565fbd076b2679558cec, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_sigma", method_pointer_4755b2a0d2f9554a8ee3fdc2b97ecaa8, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_sigma", method_pointer_c6997f2e033852d59d9fb70b5ec2d2c3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_90255c732933534b957e042c1796455c.def("get_nu", method_pointer_538b03682869588fb286161905474998, pybind11::return_value_policy::copy, "Get the value of the shape parameter nu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_90255c732933534b957e042c1796455c.def("set_nu", method_pointer_9dfb534c3b10540ea1417317d4aca3b8, "Set the value of the shape parameter nu.\n\n:Parameter:\n    `nu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}