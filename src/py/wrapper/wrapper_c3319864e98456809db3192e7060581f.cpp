#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaNegativeBinomialDistribution const volatile * get_pointer<class ::statiskit::BetaNegativeBinomialDistribution const volatile >(class ::statiskit::BetaNegativeBinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c3319864e98456809db3192e7060581f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_54c67a1847b056ddbf65b2678fb741a3)() const = &::statiskit::BetaNegativeBinomialDistribution::get_nb_parameters;
    double const & (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_1d854e534d905ee1a2541a071c0631cb)() const = &::statiskit::BetaNegativeBinomialDistribution::get_kappa;
    void  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_a25d6ee690015f8e99692c3b7a5bc36a)(double const &) = &::statiskit::BetaNegativeBinomialDistribution::set_kappa;
    double  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_bc30420a470a53e7b3725e460eed4ca8)(int const &) const = &::statiskit::BetaNegativeBinomialDistribution::ldf;
    double  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_e4eda13763e25883856524ef9b6f6f21)(int const &) const = &::statiskit::BetaNegativeBinomialDistribution::pdf;
    double  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_55f2f41387c15a4e9b2b33fefecf697b)() const = &::statiskit::BetaNegativeBinomialDistribution::get_mean;
    double  (::statiskit::BetaNegativeBinomialDistribution::*method_pointer_66615cdd11175c9dba4ff9f7b03db364)() const = &::statiskit::BetaNegativeBinomialDistribution::get_variance;
    boost::python::class_< class ::statiskit::BetaNegativeBinomialDistribution, autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > > class_c3319864e98456809db3192e7060581f("BetaNegativeBinomialDistribution", "", boost::python::no_init);
    class_c3319864e98456809db3192e7060581f.def(boost::python::init<  >(""));
    class_c3319864e98456809db3192e7060581f.def(boost::python::init< double const &, double const &, double const & >(""));
    class_c3319864e98456809db3192e7060581f.def(boost::python::init< class ::statiskit::BetaNegativeBinomialDistribution const & >(""));
    class_c3319864e98456809db3192e7060581f.def("get_nb_parameters", method_pointer_54c67a1847b056ddbf65b2678fb741a3, "Returns the number of parameters of the negative binomial distribution\n\nThe number of parameters of a negative binomial distribution is\n:math:`2` (:math:`\\kappa` and :math:`\\pi`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_c3319864e98456809db3192e7060581f.def("get_kappa", method_pointer_1d854e534d905ee1a2541a071c0631cb, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c3319864e98456809db3192e7060581f.def("set_kappa", method_pointer_a25d6ee690015f8e99692c3b7a5bc36a, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_c3319864e98456809db3192e7060581f.def("ldf", method_pointer_bc30420a470a53e7b3725e460eed4ca8, "");
    class_c3319864e98456809db3192e7060581f.def("pdf", method_pointer_e4eda13763e25883856524ef9b6f6f21, "Compute the probability of an outcome\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. seealso::\n\n    :cpp:any:`statiskit::NegativeBinomialDistribution::ldf`.\n\n");
    class_c3319864e98456809db3192e7060581f.def("get_mean", method_pointer_55f2f41387c15a4e9b2b33fefecf697b, "Get mean of a negative binomial distribution $ E(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`) $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_c3319864e98456809db3192e7060581f.def("get_variance", method_pointer_66615cdd11175c9dba4ff9f7b03db364, "Get variance of a negative binomial distribution $ V(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`)^2 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaNegativeBinomialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaNegativeBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
    }

}