#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::GammaDistribution const volatile * get_pointer<class ::statiskit::GammaDistribution const volatile >(class ::statiskit::GammaDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_505be4c829e95c51829a196fdbf7392f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::GammaDistribution::*method_pointer_5501b444868652428fab203bfe99538c)() const = &::statiskit::GammaDistribution::get_nb_parameters;
    double const & (::statiskit::GammaDistribution::*method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50)() const = &::statiskit::GammaDistribution::get_alpha;
    void  (::statiskit::GammaDistribution::*method_pointer_b60ed55763e75148abec99d60bc157d1)(double const &) = &::statiskit::GammaDistribution::set_alpha;
    double const & (::statiskit::GammaDistribution::*method_pointer_97c06cfdcaa253f7902ee5da0de74e99)() const = &::statiskit::GammaDistribution::get_beta;
    void  (::statiskit::GammaDistribution::*method_pointer_3fc04c0502de56399edb37c532d78ee0)(double const &) = &::statiskit::GammaDistribution::set_beta;
    double  (::statiskit::GammaDistribution::*method_pointer_cfb44933a61951678aeb8699a5cf7b1d)(double const &) const = &::statiskit::GammaDistribution::ldf;
    double  (::statiskit::GammaDistribution::*method_pointer_b93560fe1add5e37aa1fd72708122d04)(double const &) const = &::statiskit::GammaDistribution::pdf;
    double  (::statiskit::GammaDistribution::*method_pointer_28b3200c24a05b0f9214e0f9836a234e)(double const &) const = &::statiskit::GammaDistribution::cdf;
    double  (::statiskit::GammaDistribution::*method_pointer_348391b8ea3b5f6f89203f118110c10c)(double const &) const = &::statiskit::GammaDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::GammaDistribution::*method_pointer_0ae9629220ba5677b65a7ad547b24572)() const = &::statiskit::GammaDistribution::simulate;
    double  (::statiskit::GammaDistribution::*method_pointer_d4f13b31d4c15aedab9bd657259be9e6)() const = &::statiskit::GammaDistribution::get_mean;
    double  (::statiskit::GammaDistribution::*method_pointer_0d5b88a1c47b54eea9dfcd5a0f202403)() const = &::statiskit::GammaDistribution::get_variance;
    boost::python::class_< class ::statiskit::GammaDistribution, autowig::Held< class ::statiskit::GammaDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GammaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > > > class_505be4c829e95c51829a196fdbf7392f("GammaDistribution", "This class represents a Gamma distribution.\n\nThe Gamma distribution is an univariate continuous distribution. The\nsupport is the set of positive real values :math:`\\mathbb{R}_+^*`.\n\n", boost::python::no_init);
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init<  >(""));
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init< double const &, double const & >(""));
    class_505be4c829e95c51829a196fdbf7392f.def(boost::python::init< class ::statiskit::GammaDistribution const & >(""));
    class_505be4c829e95c51829a196fdbf7392f.def("get_nb_parameters", method_pointer_5501b444868652428fab203bfe99538c, "Returns the number of parameters of the Gamma distribution.\n\nIn the general case the number of parameters of a Gamma distribution is\n:math:`2` (:math:`alpha` and :math:`beta`). When :math:`\\alpha=1.`, the\nGamma distribution is equivalent to the exponential distribution.\nTherefore, in this case the number of parameters is :math:`1`.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("get_alpha", method_pointer_2d6e78ac029c5dbaba11f4d47d3f8f50, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the shape parameter :math:`\\alpha`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_alpha", method_pointer_b60ed55763e75148abec99d60bc157d1, "Set the value of the shape parameter :math:`\\alpha`.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("get_beta", method_pointer_97c06cfdcaa253f7902ee5da0de74e99, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the rate parameter :math:`\\beta`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("set_beta", method_pointer_3fc04c0502de56399edb37c532d78ee0, "Set the value of the rate parameter :math:`\\beta`.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("ldf", method_pointer_cfb44933a61951678aeb8699a5cf7b1d, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value, $$\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("pdf", method_pointer_b93560fe1add5e37aa1fd72708122d04, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value,\n\n.. math::\n\n\n   f(x) =  \\frac{\\beta^{\\alpha} x^{\\alpha - 1}  \\exp \\left( - \\beta x \\right)}{\\Gamma \\left(\\alpha\\right)}.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("cdf", method_pointer_28b3200c24a05b0f9214e0f9836a234e, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}` $ denote the value,\n\n.. math::\n\n\n   P(X \\leq x) = \\frac{\\gamma\\left(\\alpha, \\beta x\\right)}{\\Gamma\\left(\\alpha\\right)}.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - The considered value :math:`x`.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("quantile", method_pointer_348391b8ea3b5f6f89203f118110c10c, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\nLet $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}`^{+}\\_{\\*} $ denote the\nvalue to compute and :math:`p \\in \\left(0,1\\right)` denote a given\nprobability,\n\n.. math::\n\n\n   x = \\frac{\\gamma^{-1}_p\\left(\\alpha, p\\right)}{\\beta}\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("simulate", method_pointer_0ae9629220ba5677b65a7ad547b24572, "");
    class_505be4c829e95c51829a196fdbf7392f.def("get_mean", method_pointer_d4f13b31d4c15aedab9bd657259be9e6, "Get mean of the Gamma distribution $ E(X) =\n:raw-latex:`\\frac{\\alpha}{\\beta}`$\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_505be4c829e95c51829a196fdbf7392f.def("get_variance", method_pointer_0d5b88a1c47b54eea9dfcd5a0f202403, "Get variance of the Gamma distribution $ V(X) =\n:raw-latex:`\\frac{\\alpha}{\\beta^2}` $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< class ::statiskit::GammaDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GammaDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::GammaDistribution, struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
    }

}