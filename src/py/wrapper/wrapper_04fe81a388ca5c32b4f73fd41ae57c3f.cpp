#include "_core.h"

double const & (::statiskit::GeneralizedStudentDistribution::*method_pointer_4ff040a6e2f356f9a5db0723b5094bd9)()const= &::statiskit::GeneralizedStudentDistribution::get_mu;
void  (::statiskit::GeneralizedStudentDistribution::*method_pointer_feeaf2ab063c5015b58521d4cfb5f66d)(double const &)= &::statiskit::GeneralizedStudentDistribution::set_mu;
double const & (::statiskit::GeneralizedStudentDistribution::*method_pointer_c6421e0545bc57d3b191fb4f76ab7802)()const= &::statiskit::GeneralizedStudentDistribution::get_sigma;
void  (::statiskit::GeneralizedStudentDistribution::*method_pointer_30a93d7aada658fab8adbceb8dfba048)(double const &)= &::statiskit::GeneralizedStudentDistribution::set_sigma;
double const & (::statiskit::GeneralizedStudentDistribution::*method_pointer_468312cb3f5a5ec294ee2441d406363d)()const= &::statiskit::GeneralizedStudentDistribution::get_nu;
void  (::statiskit::GeneralizedStudentDistribution::*method_pointer_fd6835a98dc8563380e04c09f2b012d0)(double const &)= &::statiskit::GeneralizedStudentDistribution::set_nu;
double const & (::statiskit::GeneralizedStudentDistribution::*method_pointer_1a408c0e0c0158efa9ef5c40ae58379f)()const= &::statiskit::GeneralizedStudentDistribution::get_delta;
void  (::statiskit::GeneralizedStudentDistribution::*method_pointer_38a5fd66e638522c87111a72614cc78d)(double const &)= &::statiskit::GeneralizedStudentDistribution::set_delta;

namespace autowig {
}

void wrapper_04fe81a388ca5c32b4f73fd41ae57c3f(pybind11::module& module)
{

    pybind11::class_<class ::statiskit::GeneralizedStudentDistribution, autowig::HolderType< class ::statiskit::GeneralizedStudentDistribution >::Type, struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GeneralizedStudentDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > class_04fe81a388ca5c32b4f73fd41ae57c3f(module, "GeneralizedStudentDistribution", "This class GeneralizedStudentDistribution represents a non central\nStudent distribution which is also non standardized.\n\nA random component :math:`W=\\sigma T + \\mu` is said to follow a\ngeneralized Student distribution if :math:`T` follows a non-central\ndistribution. The generalized Student distribution is an univariate\ncontinuous distribution. The support is the set of real values\n:math:`\\mathbb{R}`.\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def(pybind11::init<  >());
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def(pybind11::init< double const &, double const &, double const &, double const & >());
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def(pybind11::init< class ::statiskit::GeneralizedStudentDistribution const & >());
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("get_mu", method_pointer_4ff040a6e2f356f9a5db0723b5094bd9, pybind11::return_value_policy::copy, "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("set_mu", method_pointer_feeaf2ab063c5015b58521d4cfb5f66d, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("get_sigma", method_pointer_c6421e0545bc57d3b191fb4f76ab7802, pybind11::return_value_policy::copy, "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("set_sigma", method_pointer_30a93d7aada658fab8adbceb8dfba048, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("get_nu", method_pointer_468312cb3f5a5ec294ee2441d406363d, pybind11::return_value_policy::copy, "Get the value of the shape parameter nu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("set_nu", method_pointer_fd6835a98dc8563380e04c09f2b012d0, "Set the value of the shape parameter nu.\n\n:Parameter:\n    `nu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("get_delta", method_pointer_1a408c0e0c0158efa9ef5c40ae58379f, pybind11::return_value_policy::copy, "Get the value of the location parameter delta.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_04fe81a388ca5c32b4f73fd41ae57c3f.def("set_delta", method_pointer_38a5fd66e638522c87111a72614cc78d, "Set the value of the location parameter delta.\n\n:Parameter:\n    `delta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");

}