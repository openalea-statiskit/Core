#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LaplaceDistribution const volatile * get_pointer<class ::statiskit::LaplaceDistribution const volatile >(class ::statiskit::LaplaceDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_3557273679395cf2a3e4b3d3f227accd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::LaplaceDistribution::*method_pointer_7dc1e9b1bb2c5934b0c6d2ef2379a07d)() const = &::statiskit::LaplaceDistribution::get_nb_parameters;
    double const & (::statiskit::LaplaceDistribution::*method_pointer_4d398e06491252e28abd7e36a780974f)() const = &::statiskit::LaplaceDistribution::get_mu;
    void  (::statiskit::LaplaceDistribution::*method_pointer_bfd7be501f8359d4bae2bdc5151055aa)(double const &) = &::statiskit::LaplaceDistribution::set_mu;
    double const & (::statiskit::LaplaceDistribution::*method_pointer_fd899166e96755e5aea2da76a77e8757)() const = &::statiskit::LaplaceDistribution::get_sigma;
    void  (::statiskit::LaplaceDistribution::*method_pointer_c648a51d4a4c52e4b0c556a98d28423f)(double const &) = &::statiskit::LaplaceDistribution::set_sigma;
    double  (::statiskit::LaplaceDistribution::*method_pointer_736a19f49431530380e8f4192839ef23)(double const &) const = &::statiskit::LaplaceDistribution::ldf;
    double  (::statiskit::LaplaceDistribution::*method_pointer_9e284e0598b35988a6e493c7063007b6)(double const &) const = &::statiskit::LaplaceDistribution::pdf;
    double  (::statiskit::LaplaceDistribution::*method_pointer_2f25fd8d7589505c99a393581088d5af)(double const &) const = &::statiskit::LaplaceDistribution::cdf;
    double  (::statiskit::LaplaceDistribution::*method_pointer_f58969c196ac50db891a84af9ebc16bd)(double const &) const = &::statiskit::LaplaceDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::LaplaceDistribution::*method_pointer_1fc5dcf06a2d5b4199bd8e2f9b4abf46)() const = &::statiskit::LaplaceDistribution::simulate;
    double  (::statiskit::LaplaceDistribution::*method_pointer_9a080ee3d6e95a75b1749e9124d4366a)() const = &::statiskit::LaplaceDistribution::get_mean;
    double  (::statiskit::LaplaceDistribution::*method_pointer_c6208a3696ba5778a178700027e95a3e)() const = &::statiskit::LaplaceDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::LaplaceDistribution::*method_pointer_07f3392a852c5ac09a071bb2460baecf)() const = &::statiskit::LaplaceDistribution::copy;
    boost::python::class_< class ::statiskit::LaplaceDistribution, autowig::Held< class ::statiskit::LaplaceDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_3557273679395cf2a3e4b3d3f227accd("LaplaceDistribution", "This class LaplaceDistribution represents a `Laplace\ndistribution <https://en.wikipedia.org/wiki/Laplace_distribution>`__.\n\nThe Laplace distribution is an univariate continuous distribution. The\nsupport is the set of real values :math:`\\mathbb{R}`.\n\n", boost::python::no_init);
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init<  >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init< double const &, double const & >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def(boost::python::init< class ::statiskit::LaplaceDistribution const & >(""));
    class_3557273679395cf2a3e4b3d3f227accd.def("get_nb_parameters", method_pointer_7dc1e9b1bb2c5934b0c6d2ef2379a07d, "Returns the number of parameters of the Laplace distribution\n\nThe number of parameters of a Laplace distribution is :math:`2`\n(:math:`\\mu` and :math:`\\sigma`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_mu", method_pointer_4d398e06491252e28abd7e36a780974f, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_mu", method_pointer_bfd7be501f8359d4bae2bdc5151055aa, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_sigma", method_pointer_fd899166e96755e5aea2da76a77e8757, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("set_sigma", method_pointer_c648a51d4a4c52e4b0c556a98d28423f, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("ldf", method_pointer_736a19f49431530380e8f4192839ef23, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) =  \\frac{\\vert \\mu - x \\vert }{\\sigma} - \\ln (2\\sigma).\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("pdf", method_pointer_9e284e0598b35988a6e493c7063007b6, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               f(x) =  \\frac{1}{2\\sigma} \\exp \\left( \\frac{\\vert \\mu - x \\vert }{\\sigma} \\right).\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("cdf", method_pointer_2f25fd8d7589505c99a393581088d5af, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               P(X \\leq x) = \\left\\{\n     *                              \\begin{array}{ll}\n     *                                 0.5 \\exp \\left(  \\frac{x - \\mu  }{\\sigma} \\right) & x < \\mu \\\\\n     *                                  1-0.5 \\exp \\left( \\frac{\\mu - x}{\\sigma} \\right)     & x \\geq \\mu\n     *                              \\end{array}\n     *                              \\right.\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("quantile", method_pointer_f58969c196ac50db891a84af9ebc16bd, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for Laplace distribution is computed as \\*\n\n.. math::\n\n\n       *                x = \\left\\{\n    *                              \\begin{array}{ll}\n    *                              \\mu + \\sigma \\ln (2p)   & p < 0.5 \\\\\n    *                              \\mu - \\sigma \\ln (2-2p)      & p \\geq 0.5\n    *                              \\end{array}\n    *                              \\right.\n       *\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("simulate", method_pointer_1fc5dcf06a2d5b4199bd8e2f9b4abf46, "");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_mean", method_pointer_9a080ee3d6e95a75b1749e9124d4366a, "Get mean of Laplace distribution $ E(X) = :raw-latex:`\\mu `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("get_variance", method_pointer_c6208a3696ba5778a178700027e95a3e, "Get variance of Laplace distribution $ V(X) = 2:raw-latex:`\\sigma`^2 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_3557273679395cf2a3e4b3d3f227accd.def("copy", method_pointer_07f3392a852c5ac09a071bb2460baecf, "");

    if(autowig::Held< class ::statiskit::LaplaceDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LaplaceDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}