#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NormalDistribution const volatile * get_pointer<class ::statiskit::NormalDistribution const volatile >(class ::statiskit::NormalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2cfec7576f805b8d8fb103d1f86f786e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::NormalDistribution::*method_pointer_08a341382c655556941f2acd6c423dd3)() const = &::statiskit::NormalDistribution::get_nb_parameters;
    double const & (::statiskit::NormalDistribution::*method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05)() const = &::statiskit::NormalDistribution::get_mu;
    void  (::statiskit::NormalDistribution::*method_pointer_c770f1aeabd6538a97629064cf8bc270)(double const &) = &::statiskit::NormalDistribution::set_mu;
    double const & (::statiskit::NormalDistribution::*method_pointer_29e7dd42d9085b56954175dc8b9a994e)() const = &::statiskit::NormalDistribution::get_sigma;
    void  (::statiskit::NormalDistribution::*method_pointer_0ada355ca76458319515887abcd12ef1)(double const &) = &::statiskit::NormalDistribution::set_sigma;
    double  (::statiskit::NormalDistribution::*method_pointer_f919baff4a865107a0e5384ef6ad7f0c)(double const &) const = &::statiskit::NormalDistribution::ldf;
    double  (::statiskit::NormalDistribution::*method_pointer_714660eed33e599fa6a1e8a897f077a8)(double const &) const = &::statiskit::NormalDistribution::pdf;
    double  (::statiskit::NormalDistribution::*method_pointer_2cf71d516543526c8ddfda435091b914)(double const &) const = &::statiskit::NormalDistribution::cdf;
    double  (::statiskit::NormalDistribution::*method_pointer_50c2fb39c1a75502a5b01b9b2c525d03)(double const &) const = &::statiskit::NormalDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::NormalDistribution::*method_pointer_94892243f55453bf992266cde4b4fd4c)() const = &::statiskit::NormalDistribution::simulate;
    double  (::statiskit::NormalDistribution::*method_pointer_fce392a571745a91962c709e0efad22f)() const = &::statiskit::NormalDistribution::get_mean;
    double  (::statiskit::NormalDistribution::*method_pointer_11a58521f76e5986ba024fd049789919)() const = &::statiskit::NormalDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::NormalDistribution::*method_pointer_08b27f9d325d5965aba2e6ff1f5a065c)() const = &::statiskit::NormalDistribution::copy;
    boost::python::class_< class ::statiskit::NormalDistribution, autowig::Held< class ::statiskit::NormalDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_2cfec7576f805b8d8fb103d1f86f786e("NormalDistribution", "This class NormalDistribution represents a `normal\ndistribution <https://en.wikipedia.org/wiki/Normal_distribution>`__.\n\nThe normal distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init<  >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init< double const &, double const & >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def(boost::python::init< class ::statiskit::NormalDistribution const & >(""));
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_nb_parameters", method_pointer_08a341382c655556941f2acd6c423dd3, "Returns the number of parameters of the normal distribution\n\nThe number of parameters of a normal distribution is :math:`2`\n(:math:`\\mu` and :math:`\\sigma`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_mu", method_pointer_412f22d12d8c5ecfb2e37a69d4aa4f05, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_mu", method_pointer_c770f1aeabd6538a97629064cf8bc270, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_sigma", method_pointer_29e7dd42d9085b56954175dc8b9a994e, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("set_sigma", method_pointer_0ada355ca76458319515887abcd12ef1, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("ldf", method_pointer_f919baff4a865107a0e5384ef6ad7f0c, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) = - \\frac{1}{2} \\left( \\frac{x-\\mu}{\\sigma} \\right)^2  - \\ln \\sigma  - \\ln \\sqrt{2\\pi},\n     *          $$\n     * where  [$ \\sqrt{2\\pi} $](http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html) is a constant computed in Boost.Math library.\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("pdf", method_pointer_714660eed33e599fa6a1e8a897f077a8, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\\* :raw-latex:`\\details `The pdf value is computed as the exponential of\nthe ldf value. \\* @see statiskit::NormalDistribution::ldf() \\*\n:raw-latex:`\\param `value The considered value :math:`x`.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("cdf", method_pointer_2cf71d516543526c8ddfda435091b914, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\\* :raw-latex:`\\details `Let $x :raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\n$ denote the value, \\*\n\n.. raw:: latex\n\n   \\begin{eqnarray*}\n       *               P(X \\leq x) & = & \\frac{1}{\\sigma \\sqrt{2\\pi}}  \\int_{-\\infty}^x  \\exp\\left\\lbrace- \\left( \\frac{t-\\mu}{2\\sigma} \\right)^2 \\right\\rbrace dt, \\\\\n       *               P(X \\leq x) & = & 0.5 \\; \\textnormal{erfc}\\left( \\frac{\\mu-x}{\\sigma \\sqrt{2}} \\right),\n       *           \\end{eqnarray*}\n\n-  where `$ :raw-latex:`\\textnormal{erfc}`\n   $ <http://www.cplusplus.com/reference/cmath/erfc/>`__ is a function\n   implemented in C++ standard library and\n   `:math:`\\sqrt{2}` <http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html>`__\n   is a constant implemented in Boost.Math library.\n\n   -  :raw-latex:`\\param `value The considered value :math:`x`.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("quantile", method_pointer_50c2fb39c1a75502a5b01b9b2c525d03, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for normal distribution is computed as $ x =\n:raw-latex:`\\mu `- :raw-latex:`\\sigma `:raw-latex:`\\sqrt{2}` ;\n:raw-latex:`\\textnormal{erfc}`\\_:raw-latex:`\\textnormal{inv}`(2p) $\nwhere\n`:math:`\\sqrt{2}` <http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/toolkit/internals1/constants.html>`__\nis a constant implemented in Boost.Math library and `$\n:raw-latex:`\\textnormal{erfc}`\\_:raw-latex:`\\textnormal{inv}`\n$ <http://www.boost.org/doc/libs/1_53_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_erf/error_inv.html>`__\nis a function implemented in Boost.Math library.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("simulate", method_pointer_94892243f55453bf992266cde4b4fd4c, "");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_mean", method_pointer_fce392a571745a91962c709e0efad22f, "Get mean of normal distribution $ E(X) = :raw-latex:`\\mu `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("get_variance", method_pointer_11a58521f76e5986ba024fd049789919, "Get variance of normal distribution $ V(X) = :raw-latex:`\\sigma`^2 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_2cfec7576f805b8d8fb103d1f86f786e.def("copy", method_pointer_08b27f9d325d5965aba2e6ff1f5a065c, "");

    if(autowig::Held< class ::statiskit::NormalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NormalDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::NormalDistribution >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::NormalDistribution, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::NormalDistribution >::Type, class ::statiskit::NormalDistribution > > >();
    }

}