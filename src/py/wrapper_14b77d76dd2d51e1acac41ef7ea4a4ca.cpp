#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::NegativeBinomialDistribution const volatile * get_pointer<class ::statiskit::NegativeBinomialDistribution const volatile >(class ::statiskit::NegativeBinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_14b77d76dd2d51e1acac41ef7ea4a4ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::NegativeBinomialDistribution::*method_pointer_088ceed28d0b533bb46fe142524dc58b)() const = &::statiskit::NegativeBinomialDistribution::get_nb_parameters;
    double const & (::statiskit::NegativeBinomialDistribution::*method_pointer_8d75b8b2276652878cec83d9112b75c6)() const = &::statiskit::NegativeBinomialDistribution::get_kappa;
    void  (::statiskit::NegativeBinomialDistribution::*method_pointer_31ea5093e1a75e4385d8142ab4be2d54)(double const &) = &::statiskit::NegativeBinomialDistribution::set_kappa;
    double const & (::statiskit::NegativeBinomialDistribution::*method_pointer_bd038b9931e45fefa1c2305d47cb31f3)() const = &::statiskit::NegativeBinomialDistribution::get_pi;
    void  (::statiskit::NegativeBinomialDistribution::*method_pointer_bbe0fb1cf4d554779f394a3e542e5bd2)(double const &) = &::statiskit::NegativeBinomialDistribution::set_pi;
    double  (::statiskit::NegativeBinomialDistribution::*method_pointer_ed7f3b5135d551fba32caae390f800e6)(int const &) const = &::statiskit::NegativeBinomialDistribution::ldf;
    double  (::statiskit::NegativeBinomialDistribution::*method_pointer_ade8cc445f875342963016aba7de644f)(int const &) const = &::statiskit::NegativeBinomialDistribution::pdf;
    double  (::statiskit::NegativeBinomialDistribution::*method_pointer_838c30e70b525ab492e8410dbbb676c7)(int const &) const = &::statiskit::NegativeBinomialDistribution::cdf;
    int  (::statiskit::NegativeBinomialDistribution::*method_pointer_ce15926bbe315e9ea0423b3664860cae)(double const &) const = &::statiskit::NegativeBinomialDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::NegativeBinomialDistribution::*method_pointer_36271693914a53e291eb960108da7bed)() const = &::statiskit::NegativeBinomialDistribution::simulate;
    double  (::statiskit::NegativeBinomialDistribution::*method_pointer_b54e9e4ddf9452e882c7f9d47a00eeb7)() const = &::statiskit::NegativeBinomialDistribution::get_mean;
    double  (::statiskit::NegativeBinomialDistribution::*method_pointer_57d73c073a655808af647deb74c6ae80)() const = &::statiskit::NegativeBinomialDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::NegativeBinomialDistribution::*method_pointer_ffd07054a5ef58c8b05fd9ce16310083)() const = &::statiskit::NegativeBinomialDistribution::copy;
    boost::python::class_< class ::statiskit::NegativeBinomialDistribution, autowig::Held< class ::statiskit::NegativeBinomialDistribution >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution > > class_14b77d76dd2d51e1acac41ef7ea4a4ca("NegativeBinomialDistribution", "This class NegativeBinomialDistribution represents a `negative binomial\ndistribution <https://en.wikipedia.org/wiki/Negative_binomial_distribution>`__\n\nThe negative binomial distribution is an univariate discrete\ndistribution of the number of successes in independent `Bernouilli\ntrials <https://en.wikipedia.org/wiki/Bernoulli_trial>`__ with a\nspecified probability :math:`\\pi \\in [0,1]` of success before a\nspecified number of failures denoted\n$:raw-latex:`\\kappa `:raw-latex:`\\in `:raw-latex:`\\mathbb{R}`\\_+^\\* $.\nThe support of the negative binomial distribution is the set of\nnon-negative integer :math:`\\mathbb{N}`. In the particular case of\n:math:`\\kappa = 1.` the negative binomial distribution represents a\n`geometric\ndistribution <https://en.wikipedia.org/wiki/Geometric_distribution>`__\nwith :math:`\\mathbb{N}` as support.\n\n", boost::python::no_init);
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(boost::python::init<  >(""));
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(boost::python::init< double const &, double const & >(""));
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def(boost::python::init< class ::statiskit::NegativeBinomialDistribution const & >(""));
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_nb_parameters", method_pointer_088ceed28d0b533bb46fe142524dc58b, "Returns the number of parameters of the negative binomial distribution\n\nThe number of parameters of a negative binomial distribution is\n:math:`2` (:math:`\\kappa` and :math:`\\pi`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_kappa", method_pointer_8d75b8b2276652878cec83d9112b75c6, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("set_kappa", method_pointer_31ea5093e1a75e4385d8142ab4be2d54, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_pi", method_pointer_bd038b9931e45fefa1c2305d47cb31f3, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of pi\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("set_pi", method_pointer_bbe0fb1cf4d554779f394a3e542e5bd2, "Set the value of pi\n\n:Parameter:\n    `pi` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("ldf", method_pointer_ed7f3b5135d551fba32caae390f800e6, "Compute the log-probability of an outcome\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{N}` $ denote the outcome $$\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("pdf", method_pointer_ade8cc445f875342963016aba7de644f, "Compute the probability of an outcome\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. seealso::\n\n    :cpp:any:`statiskit::NegativeBinomialDistribution::ldf`.\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("cdf", method_pointer_838c30e70b525ab492e8410dbbb676c7, "Compute the cumulative probability of an outcome\n\nLet :math:`n` denote the outcome\n\n.. raw:: latex\n\n   \\begin{eqnarray*}\n   P\\left(N \\leq n\\right) & = &  \\sum_{k = 0}^n P\\left(N = k\\right), \\\\\n   P\\left(N \\leq n\\right) & = & \\textnormal{ibeta}(\\kappa ,n+1 ,1-\\pi),\n   \\end{eqnarray*}\n\nwhere\n`:math:`\\textnormal{ibeta}(a,b,x)` <http://www.boost.org/doc/libs/1_52_0/libs/math/doc/sf_and_dist/html/math_toolkit/special/sf_beta/ibeta_function.html>`__\nis the normalized incomplete beta function implemented in the Boost.Math\nlibrary.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("quantile", method_pointer_ce15926bbe315e9ea0423b3664860cae, "Compute the quantile of a probability\n\n:Parameter:\n    `p` (:cpp:any:`double`) - The considered probability.\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("simulate", method_pointer_36271693914a53e291eb960108da7bed, "Simulate an outcome of a negative binomial distribution.\n\n:Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateEvent, struct ::std::default\\_delete< struct\n    ::statiskit::UnivariateEvent > >\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_mean", method_pointer_b54e9e4ddf9452e882c7f9d47a00eeb7, "Get mean of a negative binomial distribution $ E(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`) $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("get_variance", method_pointer_57d73c073a655808af647deb74c6ae80, "Get variance of a negative binomial distribution $ V(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`)^2 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_14b77d76dd2d51e1acac41ef7ea4a4ca.def("copy", method_pointer_ffd07054a5ef58c8b05fd9ce16310083, "");

    if(autowig::Held< class ::statiskit::NegativeBinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::NegativeBinomialDistribution >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}