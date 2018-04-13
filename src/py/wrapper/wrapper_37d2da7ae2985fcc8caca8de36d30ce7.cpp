#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::CauchyDistribution const volatile * get_pointer<class ::statiskit::CauchyDistribution const volatile >(class ::statiskit::CauchyDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_37d2da7ae2985fcc8caca8de36d30ce7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::CauchyDistribution::*method_pointer_1a88379f08025827a8d08ccc70ecc60a)() const = &::statiskit::CauchyDistribution::get_nb_parameters;
    double const & (::statiskit::CauchyDistribution::*method_pointer_2c5a042cd22d5c6aa327cda326887f5d)() const = &::statiskit::CauchyDistribution::get_mu;
    void  (::statiskit::CauchyDistribution::*method_pointer_0b8482697b5d50769ad737ee5e62922f)(double const &) = &::statiskit::CauchyDistribution::set_mu;
    double const & (::statiskit::CauchyDistribution::*method_pointer_47c9040450155a07b6d26a0e64dbd084)() const = &::statiskit::CauchyDistribution::get_sigma;
    void  (::statiskit::CauchyDistribution::*method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3)(double const &) = &::statiskit::CauchyDistribution::set_sigma;
    double  (::statiskit::CauchyDistribution::*method_pointer_3152b3a8c3475fb0a655036745bc7c52)(double const &) const = &::statiskit::CauchyDistribution::ldf;
    double  (::statiskit::CauchyDistribution::*method_pointer_b57d4f1180c95c7ebe6946a2d57111a6)(double const &) const = &::statiskit::CauchyDistribution::pdf;
    double  (::statiskit::CauchyDistribution::*method_pointer_78fd325477505941a956588d6ef78893)(double const &) const = &::statiskit::CauchyDistribution::cdf;
    double  (::statiskit::CauchyDistribution::*method_pointer_99d6e765b2b0501b99606527c5a0f984)(double const &) const = &::statiskit::CauchyDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::CauchyDistribution::*method_pointer_85b0ae64f5165b59a68b7c5d40245bd1)() const = &::statiskit::CauchyDistribution::simulate;
    double  (::statiskit::CauchyDistribution::*method_pointer_124ec7172b3f59f5aefc624ca1147226)() const = &::statiskit::CauchyDistribution::get_mean;
    double  (::statiskit::CauchyDistribution::*method_pointer_d9b987ac70da543f8f41f45fc6762194)() const = &::statiskit::CauchyDistribution::get_variance;
    boost::python::class_< class ::statiskit::CauchyDistribution, autowig::Held< class ::statiskit::CauchyDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::CauchyDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_37d2da7ae2985fcc8caca8de36d30ce7("CauchyDistribution", "This class CauchyDistribution represents a `Cauchy\ndistribution <https://en.wikipedia.org/wiki/Cauchy_distribution>`__.\n\nThe Cauchy distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init<  >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init< double const &, double const & >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def(boost::python::init< class ::statiskit::CauchyDistribution const & >(""));
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_nb_parameters", method_pointer_1a88379f08025827a8d08ccc70ecc60a, "Returns the number of parameters of the Cauchy distribution\n\nThe number of parameters of a Cauchy distribution is :math:`2`\n(:math:`\\mu` and :math:`\\sigma`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_mu", method_pointer_2c5a042cd22d5c6aa327cda326887f5d, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_mu", method_pointer_0b8482697b5d50769ad737ee5e62922f, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_sigma", method_pointer_47c9040450155a07b6d26a0e64dbd084, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("set_sigma", method_pointer_cf1c7eea5f465f529121b6ee03e7d6d3, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("ldf", method_pointer_3152b3a8c3475fb0a655036745bc7c52, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) =  -\\ln \\pi \\sigma - \\ln \\left\\lbrace 1+ \\left( \\frac{x-\\mu}{\\sigma} \\right)^2 \\right\\rbrace,\n     *          $$\n     * where [$\\pi$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("pdf", method_pointer_b57d4f1180c95c7ebe6946a2d57111a6, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               f(x) =  \\frac{1}{ \\pi \\sigma \\left\\lbrace 1+ \\left( \\frac{x-\\mu}{\\sigma} \\right)^2 \\right\\rbrace },\n     *          $$\n     * where [$\\pi$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("cdf", method_pointer_78fd325477505941a956588d6ef78893, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               P(X \\leq x) = \\frac{1}{\\pi} \\arctan \\left( \\frac{x-\\mu}{\\sigma} \\right) + \\frac{1}{2},\n     *          $$\n     * where [$\\pi$](http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is the constant pi implemented in Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("quantile", method_pointer_99d6e765b2b0501b99606527c5a0f984, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for Cauchy distribution is defined as $\n:raw-latex:`\\mu `+\n:raw-latex:`\\sigma `:raw-latex:`\\tan `:raw-latex:`\\left`:raw-latex:`\\lbrace `:raw-latex:`\\pi `(p-1/2)\n:raw-latex:`\\right`:raw-latex:`\\rbrace `$.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("simulate", method_pointer_85b0ae64f5165b59a68b7c5d40245bd1, "");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_mean", method_pointer_124ec7172b3f59f5aefc624ca1147226, "The mean of Cauchy distribution is undefined.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_37d2da7ae2985fcc8caca8de36d30ce7.def("get_variance", method_pointer_d9b987ac70da543f8f41f45fc6762194, "The variance of Cauchy distribution is undefined.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< class ::statiskit::CauchyDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::CauchyDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::CauchyDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}