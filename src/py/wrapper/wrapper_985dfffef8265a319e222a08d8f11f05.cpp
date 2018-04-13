#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaDistribution const volatile * get_pointer<class ::statiskit::BetaDistribution const volatile >(class ::statiskit::BetaDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_985dfffef8265a319e222a08d8f11f05()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::BetaDistribution::*method_pointer_23a5d17ed184520692df5b580b228fac)() const = &::statiskit::BetaDistribution::get_nb_parameters;
    double const & (::statiskit::BetaDistribution::*method_pointer_d15e5113eb035524bf47b41f300122d2)() const = &::statiskit::BetaDistribution::get_alpha;
    void  (::statiskit::BetaDistribution::*method_pointer_923a19134c1c530f983a57aaddbd5ab8)(double const &) = &::statiskit::BetaDistribution::set_alpha;
    double const & (::statiskit::BetaDistribution::*method_pointer_e361b886a6565e31a7aadc0c2332a33b)() const = &::statiskit::BetaDistribution::get_beta;
    void  (::statiskit::BetaDistribution::*method_pointer_abc93b3b043d5a289e364503f102eaa4)(double const &) = &::statiskit::BetaDistribution::set_beta;
    double  (::statiskit::BetaDistribution::*method_pointer_a50db9c9858e5775815ffd4cc4be91d1)(double const &) const = &::statiskit::BetaDistribution::ldf;
    double  (::statiskit::BetaDistribution::*method_pointer_9c466c65b67f538f9e7e485149178aef)(double const &) const = &::statiskit::BetaDistribution::pdf;
    double  (::statiskit::BetaDistribution::*method_pointer_7da3f73437ec51bb8e87a528dd8b2f46)(double const &) const = &::statiskit::BetaDistribution::cdf;
    double  (::statiskit::BetaDistribution::*method_pointer_cfa9da60d88b5286b675ed8e56b2b7d9)(double const &) const = &::statiskit::BetaDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::BetaDistribution::*method_pointer_2bf1f26747295097adb1ee90497c6d6b)() const = &::statiskit::BetaDistribution::simulate;
    double  (::statiskit::BetaDistribution::*method_pointer_5c4fa75d49b953738704d2c0e228d362)() const = &::statiskit::BetaDistribution::get_mean;
    double  (::statiskit::BetaDistribution::*method_pointer_53899f1b329f57f792249e12f403fe87)() const = &::statiskit::BetaDistribution::get_variance;
    boost::python::class_< class ::statiskit::BetaDistribution, autowig::Held< class ::statiskit::BetaDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_985dfffef8265a319e222a08d8f11f05("BetaDistribution", "This class represents a Gamma distribution.\n\nThe Gamma distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n", boost::python::no_init);
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init<  >(""));
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init< double const &, double const & >(""));
    class_985dfffef8265a319e222a08d8f11f05.def(boost::python::init< class ::statiskit::BetaDistribution const & >(""));
    class_985dfffef8265a319e222a08d8f11f05.def("get_nb_parameters", method_pointer_23a5d17ed184520692df5b580b228fac, "Returns the number of parameters of the Gamma distribution.\n\nIn the general case the number of parameters of a Gamma distribution is\n:math:`2` (:math:`alpha` and :math:`beta`). When :math:`\\alpha=1.`, the\nGamma distribution is equivalent to the exponential distribution.\nTherefore, in this case the number of parameters is :math:`1`.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("get_alpha", method_pointer_d15e5113eb035524bf47b41f300122d2, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_alpha", method_pointer_923a19134c1c530f983a57aaddbd5ab8, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("get_beta", method_pointer_e361b886a6565e31a7aadc0c2332a33b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the rate parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("set_beta", method_pointer_abc93b3b043d5a289e364503f102eaa4, "Set the value of the rate parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("ldf", method_pointer_a50db9c9858e5775815ffd4cc4be91d1, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $$\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("pdf", method_pointer_9c466c65b67f538f9e7e485149178aef, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value,\n\n.. math::\n\n\n   f(x) =  \\frac{\\beta^{\\alpha} x^{\\alpha - 1}  \\exp \\left( - \\beta x \\right)}{\\Gamma \\left(\\alpha\\right)}.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("cdf", method_pointer_7da3f73437ec51bb8e87a528dd8b2f46, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value,\n\n.. math::\n\n\n   P(X \\leq x) = \\frac{\\gamma\\left(\\alpha, \\beta x\\right)}{\\Gamma\\left(\\alpha\\right)}.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("quantile", method_pointer_cfa9da60d88b5286b675ed8e56b2b7d9, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}`^{+}\\_{\\*} $ denote the\nvalue to compute and :math:`p \\in \\left(0,1\\right)` denote a given\nprobability,\n\n.. math::\n\n\n   x = \\frac{\\gamma^{-1}_p\\left(\\alpha, p\\right)}{\\beta}\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("simulate", method_pointer_2bf1f26747295097adb1ee90497c6d6b, "");
    class_985dfffef8265a319e222a08d8f11f05.def("get_mean", method_pointer_5c4fa75d49b953738704d2c0e228d362, "Get mean of the Gamma distribution $ E(X) =\n:raw-latex:`\\frac{\\alpha}{\\beta}`$\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_985dfffef8265a319e222a08d8f11f05.def("get_variance", method_pointer_53899f1b329f57f792249e12f403fe87, "Get variance of the Gamma distribution $ V(X) =\n:raw-latex:`\\frac{\\alpha}{\\beta^2}` $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< class ::statiskit::BetaDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}