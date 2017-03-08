#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LogisticDistribution const volatile * get_pointer<class ::statiskit::LogisticDistribution const volatile >(class ::statiskit::LogisticDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_0b663e6159f1527ca997ac0244c65093()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::LogisticDistribution::*method_pointer_94045295ef0b55ed9750fc67d5683fa3)() const = &::statiskit::LogisticDistribution::get_nb_parameters;
    double const & (::statiskit::LogisticDistribution::*method_pointer_600ee11b1af2569a88987f006d175d4b)() const = &::statiskit::LogisticDistribution::get_mu;
    void  (::statiskit::LogisticDistribution::*method_pointer_ebfff8d8aa3654a480f62ae6bf839e57)(double const &) = &::statiskit::LogisticDistribution::set_mu;
    double const & (::statiskit::LogisticDistribution::*method_pointer_cb0f730fa036596eb0e82bdce3eb429b)() const = &::statiskit::LogisticDistribution::get_sigma;
    void  (::statiskit::LogisticDistribution::*method_pointer_fa5be89660ae540fb63fde390a1aee7b)(double const &) = &::statiskit::LogisticDistribution::set_sigma;
    double  (::statiskit::LogisticDistribution::*method_pointer_989b0d1947d154188f7278a822c71b11)(double const &) const = &::statiskit::LogisticDistribution::ldf;
    double  (::statiskit::LogisticDistribution::*method_pointer_3629ce87507950b2a5ed87afd0700260)(double const &) const = &::statiskit::LogisticDistribution::pdf;
    double  (::statiskit::LogisticDistribution::*method_pointer_8ac67b605ce55c8c9841899329121f49)(double const &) const = &::statiskit::LogisticDistribution::cdf;
    double  (::statiskit::LogisticDistribution::*method_pointer_d4864d859e705cd6b0e01210cd13e906)(double const &) const = &::statiskit::LogisticDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::LogisticDistribution::*method_pointer_277a1ab674705585afe267bdfeb00021)() const = &::statiskit::LogisticDistribution::simulate;
    double  (::statiskit::LogisticDistribution::*method_pointer_29abd76d847f56ab95dc1453f5e275e9)() const = &::statiskit::LogisticDistribution::get_mean;
    double  (::statiskit::LogisticDistribution::*method_pointer_585b679b3a7951979b081bad34e01300)() const = &::statiskit::LogisticDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::LogisticDistribution::*method_pointer_d71b87b8eb8356319370961cc9fdc78b)() const = &::statiskit::LogisticDistribution::copy;
    boost::python::class_< class ::statiskit::LogisticDistribution, autowig::Held< class ::statiskit::LogisticDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_0b663e6159f1527ca997ac0244c65093("LogisticDistribution", "This class LogisticDistribution represents a `logistic\ndistribution <https://en.wikipedia.org/wiki/Logistic_distribution>`__.\n\nThe logistic distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init<  >(""));
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init< double const &, double const & >(""));
    class_0b663e6159f1527ca997ac0244c65093.def(boost::python::init< class ::statiskit::LogisticDistribution const & >(""));
    class_0b663e6159f1527ca997ac0244c65093.def("get_nb_parameters", method_pointer_94045295ef0b55ed9750fc67d5683fa3, "Returns the number of parameters of the logistic distribution\n\nThe number of parameters of a logistic distribution is :math:`2`\n(:math:`\\mu` and :math:`\\sigma`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("get_mu", method_pointer_600ee11b1af2569a88987f006d175d4b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_mu", method_pointer_ebfff8d8aa3654a480f62ae6bf839e57, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("get_sigma", method_pointer_cb0f730fa036596eb0e82bdce3eb429b, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("set_sigma", method_pointer_fa5be89660ae540fb63fde390a1aee7b, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("ldf", method_pointer_989b0d1947d154188f7278a822c71b11, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) = - 2 \\ln \\left\\lbrace \\cosh \\left( 0.5 \\; \\frac{x-\\mu}{\\sigma} \\right) \\right\\rbrace - \\ln (4\\sigma).\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("pdf", method_pointer_3629ce87507950b2a5ed87afd0700260, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               f(x) =  \\frac{4\\sigma}{\\cosh^2 \\left( 0.5 \\; \\frac{x-\\mu}{\\sigma} \\right)}.\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("cdf", method_pointer_8ac67b605ce55c8c9841899329121f49, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               P(X \\leq x) = 0.5 \\; \\left\\lbrace 1+\\tanh \\left( 0.5 \\; \\frac{x-\\mu}{\\sigma} \\right) \\right\\rbrace.\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("quantile", method_pointer_d4864d859e705cd6b0e01210cd13e906, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for logistic distribution is computed as $ x =\n:raw-latex:`\\mu `+\n:raw-latex:`\\sigma `:raw-latex:`\\ln `:raw-latex:`\\left`(\n:raw-latex:`\\frac{p}{1-p}` :raw-latex:`\\right`) $.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("simulate", method_pointer_277a1ab674705585afe267bdfeb00021, "");
    class_0b663e6159f1527ca997ac0244c65093.def("get_mean", method_pointer_29abd76d847f56ab95dc1453f5e275e9, "Get mean of logistic distribution $ E(X) = :raw-latex:`\\mu `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("get_variance", method_pointer_585b679b3a7951979b081bad34e01300, "Get variance of logistic distribution $ V(X) =\n:raw-latex:`\\frac{\\sigma^2 \\pi^2}{3}` $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_0b663e6159f1527ca997ac0244c65093.def("copy", method_pointer_d71b87b8eb8356319370961cc9fdc78b, "");

    if(autowig::Held< class ::statiskit::LogisticDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LogisticDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}