#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::PoissonDistribution const volatile * get_pointer<class ::statiskit::PoissonDistribution const volatile >(class ::statiskit::PoissonDistribution const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_033df89396b35855a50192cdc7f16be3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::PoissonDistribution::*method_pointer_e1e01f1ce9de5040a095858607bab494)() const = &::statiskit::PoissonDistribution::get_nb_parameters;
    double const & (::statiskit::PoissonDistribution::*method_pointer_e1c5d61243a2516d8cca503eee6d4b6d)() const = &::statiskit::PoissonDistribution::get_theta;
    void  (::statiskit::PoissonDistribution::*method_pointer_f1f3fd67865756958164089e5a85911b)(double const &) = &::statiskit::PoissonDistribution::set_theta;
    double  (::statiskit::PoissonDistribution::*method_pointer_7c97aff1be125678a1731aa26f42555d)(int const &) const = &::statiskit::PoissonDistribution::ldf;
    double  (::statiskit::PoissonDistribution::*method_pointer_79b89a76fad55628a598c38c3b79d5ce)(int const &) const = &::statiskit::PoissonDistribution::pdf;
    double  (::statiskit::PoissonDistribution::*method_pointer_3885e94f913054d986536c9aefbd423b)(int const &) const = &::statiskit::PoissonDistribution::cdf;
    int  (::statiskit::PoissonDistribution::*method_pointer_6c0a56a865ad5bf08d3c7a313d73ce74)(double const &) const = &::statiskit::PoissonDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::PoissonDistribution::*method_pointer_8ef402dc1ae753cc86b60a311885848e)() const = &::statiskit::PoissonDistribution::simulate;
    double  (::statiskit::PoissonDistribution::*method_pointer_b1ba5e28fcae51feae353e36b0de5718)() const = &::statiskit::PoissonDistribution::get_mean;
    double  (::statiskit::PoissonDistribution::*method_pointer_0c58189ce2eb5c7aba8b58fdc81c9cd5)() const = &::statiskit::PoissonDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::PoissonDistribution::*method_pointer_22bd7c1a6db150779baf0fac8fbb1673)() const = &::statiskit::PoissonDistribution::copy;
    boost::python::class_< class ::statiskit::PoissonDistribution, autowig::Held< class ::statiskit::PoissonDistribution >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution > > class_033df89396b35855a50192cdc7f16be3("PoissonDistribution", "This class PoissonDistribution represents a `Poisson\ndistribution <https://en.wikipedia.org/wiki/Poisson_distribution>`__\n\nThe Poisson distribution is an univariate discrete distribution that\nexpresses the probability of a given number of events occurring in a\nfixed interval of time and/or space if these events occur with a known\naverage rate\n$:raw-latex:`\\theta  `:raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\\_+^\\* $\nand independently of the time since the last event. The support of the\nPoisson distribution is the set of non-negative integer $\n:raw-latex:`\\mathbb{N}` $.\n\n", boost::python::no_init);
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init<  >(""));
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init< double const & >(""));
    class_033df89396b35855a50192cdc7f16be3.def(boost::python::init< class ::statiskit::PoissonDistribution const & >(""));
    class_033df89396b35855a50192cdc7f16be3.def("get_nb_parameters", method_pointer_e1e01f1ce9de5040a095858607bab494, "Returns the number of parameters of the Poisson distribution\n\nThe number of parameters of a Poisson distribution is :math:`1`\n(:math:`\\theta`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("get_theta", method_pointer_e1c5d61243a2516d8cca503eee6d4b6d, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of theta.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("set_theta", method_pointer_f1f3fd67865756958164089e5a85911b, "Set the value of theta.\n\n:Parameter:\n    `theta` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("ldf", method_pointer_7c97aff1be125678a1731aa26f42555d, "Compute the log-probability of an outcome\n\nLet $ n :raw-latex:`\\in `:raw-latex:`\\mathbb{N}` $ denote the outcome $$\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("pdf", method_pointer_79b89a76fad55628a598c38c3b79d5ce, "Compute the probability of an outcome\n\nLet $ n :raw-latex:`\\in `:raw-latex:`\\mathbb{N}` $ denote the outcome\n\n.. math::\n\n\n   P\\left(N = n\\right) = \\exp(-\\theta) \\frac{ \\theta^n }{ \\Gamma (n+1) },\n\n where `$\n:raw-latex:`\\Gamma `$ <http://www.boost.org/doc/libs/1_42_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/tgamma.html>`__\nis the Gamma function implemented in the Boost.Math library.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("cdf", method_pointer_3885e94f913054d986536c9aefbd423b, "Compute the cumulative probability of an outcome\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{N}` $ denote the outcome\n\n.. raw:: latex\n\n   \\begin{eqnarray*}\n   P\\left(N \\leq n\\right) & = &  \\sum_{k = 0}^n P\\left(N = k\\right), \\\\\n   P\\left(N \\leq n\\right) & = &  Q(n+1, \\theta),\n   \\end{eqnarray*}\n\nwhere\n`:math:`Q(a,z)` <http://www.boost.org/doc/libs/1_46_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma.html>`__\nis the normalised upper incomplete gamma function implemented in the\nBoost.Math library.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("quantile", method_pointer_6c0a56a865ad5bf08d3c7a313d73ce74, "Compute the quantile of a probability\n\nLet :math:`p \\in [0,1]` denote the probability\n\n.. math::\n\n\n   n = \\textnormal{gamma}\\_\\textnormal{q}\\_\\textnormal{inva}(\\theta, p)-1,\n\n where\n`:math:`\\textnormal{gamma}\\_\\textnormal{q}\\_\\textnormal{inva}(x, q)` <http://www.boost.org/doc/libs/1_40_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_gamma/igamma_inv.html>`__\na sepcific incomplete gamma function inverse implemented in the\nBoost.Math library.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - The considered probability.\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("simulate", method_pointer_8ef402dc1ae753cc86b60a311885848e, "Simulate an outcome of a binomial distribution.\n\n:Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateEvent, struct ::std::default\\_delete< struct\n    ::statiskit::UnivariateEvent > >\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("get_mean", method_pointer_b1ba5e28fcae51feae353e36b0de5718, "Get mean of a Poisson distribution $ E(N) = :raw-latex:`\\theta `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("get_variance", method_pointer_0c58189ce2eb5c7aba8b58fdc81c9cd5, "Get variance of a Poisson distribution $ V(N) = :raw-latex:`\\theta `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_033df89396b35855a50192cdc7f16be3.def("copy", method_pointer_22bd7c1a6db150779baf0fac8fbb1673, "");

    if(autowig::Held< class ::statiskit::PoissonDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::PoissonDistribution >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}