#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GumbelMaxDistribution const volatile * get_pointer<class ::statiskit::GumbelMaxDistribution const volatile >(class ::statiskit::GumbelMaxDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_524b20b628dd5516a98e9f31da398dbf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::GumbelMaxDistribution::*method_pointer_53287464dd09597281cfaf908889cb18)() const = &::statiskit::GumbelMaxDistribution::get_nb_parameters;
    double const & (::statiskit::GumbelMaxDistribution::*method_pointer_bd3003bf86365b85b7c0736015ae8e0f)() const = &::statiskit::GumbelMaxDistribution::get_mu;
    void  (::statiskit::GumbelMaxDistribution::*method_pointer_1f54ac04ac0b5ff9966afabee8fe3031)(double const &) = &::statiskit::GumbelMaxDistribution::set_mu;
    double const & (::statiskit::GumbelMaxDistribution::*method_pointer_ce603175d9aa53e4ab7b1b8c0364c7ed)() const = &::statiskit::GumbelMaxDistribution::get_sigma;
    void  (::statiskit::GumbelMaxDistribution::*method_pointer_203ef61493455ba6b5f6b85cdeb364a3)(double const &) = &::statiskit::GumbelMaxDistribution::set_sigma;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_4f4bba00af93536ba78594e83105277a)(double const &) const = &::statiskit::GumbelMaxDistribution::ldf;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_53906707d4d157748089974b5241d80c)(double const &) const = &::statiskit::GumbelMaxDistribution::pdf;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_e7b23bc4a3785aa0bfb03ada91a738f3)(double const &) const = &::statiskit::GumbelMaxDistribution::cdf;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_784c2b60c8245dffac54ad1cb2531464)(double const &) const = &::statiskit::GumbelMaxDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::GumbelMaxDistribution::*method_pointer_bccc0bf974de57fa8fc95643f6c76c8e)() const = &::statiskit::GumbelMaxDistribution::simulate;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_3f536359c24351cbad0bead4a42a668b)() const = &::statiskit::GumbelMaxDistribution::get_mean;
    double  (::statiskit::GumbelMaxDistribution::*method_pointer_7acccc16fb17564db8d8dd607bbebf14)() const = &::statiskit::GumbelMaxDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::GumbelMaxDistribution::*method_pointer_7fbf028e71315cf985529c89da36b929)() const = &::statiskit::GumbelMaxDistribution::copy;
    boost::python::class_< class ::statiskit::GumbelMaxDistribution, autowig::Held< class ::statiskit::GumbelMaxDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_524b20b628dd5516a98e9f31da398dbf("GumbelMaxDistribution", "This class GumbelMaxDistribution represents a `Gumbel\ndistribution <https://en.wikipedia.org/wiki/Gumbel_distribution>`__\n(maximum).\n\nThe Gumbel distribution (maximum) is an univariate continuous\ndistribution. It is also called extreme value type I distribution\n(maximum). The support is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_524b20b628dd5516a98e9f31da398dbf.def(boost::python::init<  >(""));
    class_524b20b628dd5516a98e9f31da398dbf.def(boost::python::init< double const &, double const & >(""));
    class_524b20b628dd5516a98e9f31da398dbf.def(boost::python::init< class ::statiskit::GumbelMaxDistribution const & >(""));
    class_524b20b628dd5516a98e9f31da398dbf.def("get_nb_parameters", method_pointer_53287464dd09597281cfaf908889cb18, "Returns the number of parameters of the GumbelMax distribution\n\nThe number of parameters of a GumbelMax distribution is :math:`2`\n(:math:`\\mu` and :math:`\\sigma`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("get_mu", method_pointer_bd3003bf86365b85b7c0736015ae8e0f, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("set_mu", method_pointer_1f54ac04ac0b5ff9966afabee8fe3031, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("get_sigma", method_pointer_ce603175d9aa53e4ab7b1b8c0364c7ed, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale prameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("set_sigma", method_pointer_203ef61493455ba6b5f6b85cdeb364a3, "Set the value of the scale prameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("ldf", method_pointer_4f4bba00af93536ba78594e83105277a, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) = \\frac{\\mu-x}{\\sigma} - \\exp \\left( \\frac{\\mu-x}{\\sigma} \\right) - \\ln (\\sigma).\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("pdf", method_pointer_53906707d4d157748089974b5241d80c, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               f(x) =  \\frac{1}{\\sigma} \\exp \\left\\lbrace \\frac{\\mu-x}{\\sigma} - \\exp \\left( \\frac{\\mu-x}{\\sigma} \\right)  \\right\\rbrace .\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("cdf", method_pointer_e7b23bc4a3785aa0bfb03ada91a738f3, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               P(X \\leq x) = \\exp \\left\\lbrace - \\exp \\left( \\frac{\\mu-x}{\\sigma} \\right)  \\right\\rbrace.\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("quantile", method_pointer_784c2b60c8245dffac54ad1cb2531464, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for GumbelMax distribution is computed as $ x =\n:raw-latex:`\\mu `-\n:raw-latex:`\\sigma `:raw-latex:`\\ln `:raw-latex:`\\lbrace `-\n:raw-latex:`\\ln `(p) :raw-latex:`\\rbrace  `$.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("simulate", method_pointer_bccc0bf974de57fa8fc95643f6c76c8e, "");
    class_524b20b628dd5516a98e9f31da398dbf.def("get_mean", method_pointer_3f536359c24351cbad0bead4a42a668b, "Get mean of GumbelMax distribution $ E(X) = :raw-latex:`\\mu `+\n:raw-latex:`\\sigma `:raw-latex:`\\gamma`\\ :math:`, where [`\\ :raw-latex:`\\gamma`$](http://www.boost.org/doc/libs/1\\_40\\_0/libs/math/doc/sf\\_and\\_dist/html/math\\_toolkit/toolkit/internals1/constants.html)\nis the Euler's constant implemented in Boost.Math library.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("get_variance", method_pointer_7acccc16fb17564db8d8dd607bbebf14, "Get variance of GumbelMax distribution $ V(X) = :raw-latex:`\\pi`^2\n:raw-latex:`\\sigma`^2 / 6 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_524b20b628dd5516a98e9f31da398dbf.def("copy", method_pointer_7fbf028e71315cf985529c89da36b929, "");

    if(autowig::Held< class ::statiskit::GumbelMaxDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GumbelMaxDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}