#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::BetaBinomialDistribution const volatile * get_pointer<class ::statiskit::BetaBinomialDistribution const volatile >(class ::statiskit::BetaBinomialDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_abaaf08e32235f2ca7bacb4418592155()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::BetaBinomialDistribution::*method_pointer_df375e5a21075f14b7724c810c9fe681)() const = &::statiskit::BetaBinomialDistribution::get_nb_parameters;
    unsigned int const & (::statiskit::BetaBinomialDistribution::*method_pointer_2dc2d228de9d559b867572b52f81608c)() const = &::statiskit::BetaBinomialDistribution::get_kappa;
    void  (::statiskit::BetaBinomialDistribution::*method_pointer_88c6525044ad531ca99718d1f4505a17)(unsigned int const &) = &::statiskit::BetaBinomialDistribution::set_kappa;
    double  (::statiskit::BetaBinomialDistribution::*method_pointer_74b3914fc098597abe6171c44e31c917)(int const &) const = &::statiskit::BetaBinomialDistribution::ldf;
    double  (::statiskit::BetaBinomialDistribution::*method_pointer_39a64842543a5f1e917ef7a22c4376b7)(int const &) const = &::statiskit::BetaBinomialDistribution::pdf;
    double  (::statiskit::BetaBinomialDistribution::*method_pointer_cb5a51236f1e534a903c0fcbfff83ac2)() const = &::statiskit::BetaBinomialDistribution::get_mean;
    double  (::statiskit::BetaBinomialDistribution::*method_pointer_9bcc49c7d4ed57ffac63069e3fd79165)() const = &::statiskit::BetaBinomialDistribution::get_variance;
    boost::python::class_< class ::statiskit::BetaBinomialDistribution, autowig::Held< class ::statiskit::BetaBinomialDistribution >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > > > class_abaaf08e32235f2ca7bacb4418592155("BetaBinomialDistribution", "", boost::python::no_init);
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init<  >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init< unsigned int const &, double const &, double const & >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def(boost::python::init< class ::statiskit::BetaBinomialDistribution const & >(""));
    class_abaaf08e32235f2ca7bacb4418592155.def("get_nb_parameters", method_pointer_df375e5a21075f14b7724c810c9fe681, "Returns the number of parameters of the negative binomial distribution\n\nThe number of parameters of a negative binomial distribution is\n:math:`2` (:math:`\\kappa` and :math:`\\pi`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("get_kappa", method_pointer_2dc2d228de9d559b867572b52f81608c, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of kappa\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("set_kappa", method_pointer_88c6525044ad531ca99718d1f4505a17, "Set the value of kappa\n\n:Parameter:\n    `kappa` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("ldf", method_pointer_74b3914fc098597abe6171c44e31c917, "");
    class_abaaf08e32235f2ca7bacb4418592155.def("pdf", method_pointer_39a64842543a5f1e917ef7a22c4376b7, "Compute the probability of an outcome\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered outcome.\n\n:Return Type:\n    :cpp:any:`double`\n\n.. seealso::\n\n    :cpp:any:`statiskit::NegativeBinomialDistribution::ldf`.\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("get_mean", method_pointer_cb5a51236f1e534a903c0fcbfff83ac2, "Get mean of a negative binomial distribution $ E(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`) $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_abaaf08e32235f2ca7bacb4418592155.def("get_variance", method_pointer_9bcc49c7d4ed57ffac63069e3fd79165, "Get variance of a negative binomial distribution $ V(N) =\n:raw-latex:`\\kappa `:raw-latex:`\\pi `/ (1-:raw-latex:`\\pi`)^2 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< class ::statiskit::BetaBinomialDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::BetaBinomialDistribution >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::UnivariateDistribution, class ::statiskit::BetaBinomialDistribution, class ::statiskit::BetaCompoundDiscreteUnivariateDistribution > >::Type >();
    }

}