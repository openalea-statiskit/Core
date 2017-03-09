#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BinomialDistribution const volatile * get_pointer<class ::statiskit::BinomialDistribution const volatile >(class ::statiskit::BinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa4348c3ceb5595a843d8fc5a6c54231()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::BinomialDistribution::*method_pointer_516a2630cf835d208343600fdd8ba1c2)() const = &::statiskit::BinomialDistribution::get_nb_parameters;
    unsigned int const & (::statiskit::BinomialDistribution::*method_pointer_d865938545d55a8f9f4ec23104741b3a)() const = &::statiskit::BinomialDistribution::get_kappa;
    void  (::statiskit::BinomialDistribution::*method_pointer_806366b1b3c55c8282b6dd9239642e87)(unsigned int const &) = &::statiskit::BinomialDistribution::set_kappa;
    double const & (::statiskit::BinomialDistribution::*method_pointer_be979b302ff45400a08043acfba35114)() const = &::statiskit::BinomialDistribution::get_pi;
    void  (::statiskit::BinomialDistribution::*method_pointer_bed41dcac25e5c188874712e790e99fe)(double const &) = &::statiskit::BinomialDistribution::set_pi;
    double  (::statiskit::BinomialDistribution::*method_pointer_5dc1d45e8fc559a4a7b864f438ff9ebc)(int const &) const = &::statiskit::BinomialDistribution::ldf;
    double  (::statiskit::BinomialDistribution::*method_pointer_f776af21e862511e8e3d026b9e463777)(int const &) const = &::statiskit::BinomialDistribution::pdf;
    double  (::statiskit::BinomialDistribution::*method_pointer_025b95350c8456cc870fe2317000dd08)(int const &) const = &::statiskit::BinomialDistribution::cdf;
    int  (::statiskit::BinomialDistribution::*method_pointer_60a6a9e70b5052ddb9cd7b4452624b13)(double const &) const = &::statiskit::BinomialDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::BinomialDistribution::*method_pointer_5fd3a97c417a519099cba2d0265e1000)() const = &::statiskit::BinomialDistribution::simulate;
    double  (::statiskit::BinomialDistribution::*method_pointer_9c1e05515b335fedae8f63789f7bdc6c)() const = &::statiskit::BinomialDistribution::get_mean;
    double  (::statiskit::BinomialDistribution::*method_pointer_a9d3999c81f55a2888721bb6242f757a)() const = &::statiskit::BinomialDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::BinomialDistribution::*method_pointer_bda905e4c2985d01a5697e9ab1765197)() const = &::statiskit::BinomialDistribution::copy;
    boost::python::class_< class ::statiskit::BinomialDistribution, autowig::Held< class ::statiskit::BinomialDistribution >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution > > class_aa4348c3ceb5595a843d8fc5a6c54231("BinomialDistribution", "This class BinomialDistribution represents a `binomial\ndistribution <https://en.wikipedia.org/wiki/binomial_distribution>`__\n\nThe binomial distribution is an univariate discrete distribution of the\nnumber of successes in $\n:raw-latex:`\\kappa `:raw-latex:`\\in `:raw-latex:`\\mathbb{N}`^\\* $\nindependent `Bernouilli\ntrials <https://en.wikipedia.org/wiki/Bernoulli_trial>`__ with a\nspecified probability :math:`\\pi \\in [0,1]` of success. The support of\nthe binomial distribution is the set all intergers betwwen :math:`0` and\n$ :raw-latex:`\\kappa `$. In the particular case of $\n:raw-latex:`\\kappa `= 1$ the binomial distribution is the `Bernouilli\ndistribution <https://en.wikipedia.org/wiki/Bernoulli_distribution>`__.\n\n", boost::python::no_init);
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init<  >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init< unsigned int const &, double const & >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def(boost::python::init< class ::statiskit::BinomialDistribution const & >(""));
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_nb_parameters", method_pointer_516a2630cf835d208343600fdd8ba1c2, "Returns the number of parameters of the binomial distribution\n\nThe number of parameters of a binomial distribution is :math:`2`\n(:math:`\\kappa` and :math:`\\pi`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_kappa", method_pointer_d865938545d55a8f9f4ec23104741b3a, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("set_kappa", method_pointer_806366b1b3c55c8282b6dd9239642e87, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_pi", method_pointer_be979b302ff45400a08043acfba35114, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("set_pi", method_pointer_bed41dcac25e5c188874712e790e99fe, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("ldf", method_pointer_5dc1d45e8fc559a4a7b864f438ff9ebc, "Compute the log-probability of an outcome\n\nLet :math:`n` denote the outcome $$\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("pdf", method_pointer_f776af21e862511e8e3d026b9e463777, "Compute the probability of an outcome\n\nLet :math:`n` denote the outcome\n\n.. raw:: latex\n\n   \\begin{eqnarray*}\n                   P(N=n) & = & {\\kappa \\choose n} \\pi^n (1-\\pi)^{\\kappa - n}, \\\\\n   P(N=n) & = &  \\textnormal{ibeta\\_derivative}(n+1, \\kappa -n + 1, \\pi) / (\\kappa +1),\n   \\end{eqnarray*}\n\n-  where\n   `:math:`\\textnormal{ibeta\\_derivative}(a,b,x)` <http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/beta_derivative.html>`__\n   is the inverse beta derivative function implemented in the Boost.Math\n   library.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("cdf", method_pointer_025b95350c8456cc870fe2317000dd08, "Compute the cumulative probability of an outcome\n\nLet :math:`n` denote the outcome\n\n.. raw:: latex\n\n   \\begin{eqnarray*}\n   P\\left(N \\leq n\\right) & = &  \\sum_{k = 0}^n P\\left(N = k\\right), \\\\\n   P\\left(N \\leq n\\right) & = &  \\textnormal{ibetac}(n+1,\\kappa-n,\\pi),\n   \\end{eqnarray*}\n\nwhere\n`:math:`\\textnormal{ibetac}(a,b,x)` <http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html>`__\nis the complement of the normalized incomplete beta function implemented\nin the Boost.Math library.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("quantile", method_pointer_60a6a9e70b5052ddb9cd7b4452624b13, "Compute the quantile of a probability\n\n:Parameter:\n    `p` (:cpp:any:`double`) - The considered probability.\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("simulate", method_pointer_5fd3a97c417a519099cba2d0265e1000, "Simulate an outcome of a binomial distribution.\n\n:Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateEvent, struct ::std::default\\_delete< struct\n    ::statiskit::UnivariateEvent > >\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_mean", method_pointer_9c1e05515b335fedae8f63789f7bdc6c, "Get mean of a binomial distribution $ E(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("get_variance", method_pointer_a9d3999c81f55a2888721bb6242f757a, "Get variance of a binomial distribution $ V(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `(1-:raw-latex:`\\pi`) $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_aa4348c3ceb5595a843d8fc5a6c54231.def("copy", method_pointer_bda905e4c2985d01a5697e9ab1765197, "");

    if(autowig::Held< class ::statiskit::BinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BinomialDistribution >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}