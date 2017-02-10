#include "_core.h"


namespace autowig
{
}


void wrapper_836f90f02ebd5eee9cf678e466bfba83()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::GumbelMinDistribution::*method_pointer_1852427273955f9eb410c4ef8b383696)() const = &::statiskit::GumbelMinDistribution::get_nb_parameters;
    double const & (::statiskit::GumbelMinDistribution::*method_pointer_cdf29aaffbbe510897dab33d10e8b014)() const = &::statiskit::GumbelMinDistribution::get_mu;
    void  (::statiskit::GumbelMinDistribution::*method_pointer_1f83644fe4ea54158b61ff4a154ebb0e)(double const &) = &::statiskit::GumbelMinDistribution::set_mu;
    double const & (::statiskit::GumbelMinDistribution::*method_pointer_8c5638b106ca528c9517dd2f55df1032)() const = &::statiskit::GumbelMinDistribution::get_sigma;
    void  (::statiskit::GumbelMinDistribution::*method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d)(double const &) = &::statiskit::GumbelMinDistribution::set_sigma;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_fad89d36a4735a52bf0719a0350dbcb3)(double const &) const = &::statiskit::GumbelMinDistribution::ldf;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_bb57d06269de5ee7b187869dda7501d2)(double const &) const = &::statiskit::GumbelMinDistribution::pdf;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_0c1c06725b0c5ec3840c3fbe8f7b911d)(double const &) const = &::statiskit::GumbelMinDistribution::cdf;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_a1f9a6af7a6554cab7f7185428096a8c)(double const &) const = &::statiskit::GumbelMinDistribution::quantile;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::GumbelMinDistribution::*method_pointer_62e00a3e0b875f0c9a4b34e88175acd5)() const = &::statiskit::GumbelMinDistribution::simulate;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_53ceccb331895fc3b7234e75ca301c22)() const = &::statiskit::GumbelMinDistribution::get_mean;
    double  (::statiskit::GumbelMinDistribution::*method_pointer_f06a03f4252d52b5a8a48a48874448a6)() const = &::statiskit::GumbelMinDistribution::get_variance;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::GumbelMinDistribution::*method_pointer_df0e45e08f60505abbb87189b4396ccd)() const = &::statiskit::GumbelMinDistribution::copy;
    boost::python::class_< class ::statiskit::GumbelMinDistribution, autowig::Held< class ::statiskit::GumbelMinDistribution >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution > > class_836f90f02ebd5eee9cf678e466bfba83("GumbelMinDistribution", "This class GumbelMinDistribution represents a Gumbel distribution\n(minimum).\n\nA random variable :math:`X` is said to folloow a Gumbel distribution\n(minimum) if :math:`Y=-X` follows a Gumbel distribution (maximum). The\nGumbel distribution (minimum) is an univariate continuous distribution.\nIt is also called extreme value type I distribution (minimum). The\nsupport is the set of real values :math:`\\mathbb{R}`. @see\nstatiskit::GumbelMaxDistribution\n\n", boost::python::no_init);
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init<  >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init< double const &, double const & >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def(boost::python::init< class ::statiskit::GumbelMinDistribution const & >(""));
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_nb_parameters", method_pointer_1852427273955f9eb410c4ef8b383696, "Returns the number of parameters of the Gumbel distribution (minimum).\n\nThe number of parameters of a Gumbel distribution (minimum) is :math:`2`\n(:math:`m` and :math:`s`).\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_mu", method_pointer_cdf29aaffbbe510897dab33d10e8b014, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the location parameter mu.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_mu", method_pointer_1f83644fe4ea54158b61ff4a154ebb0e, "Set the value of the location parameter mu.\n\n:Parameter:\n    `mu` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_sigma", method_pointer_8c5638b106ca528c9517dd2f55df1032, boost::python::return_value_policy< boost::python::return_by_value >(), "Get the value of the scale parameter sigma.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("set_sigma", method_pointer_a5c2d94b61e45509b2bd9bd7fbc42a2d, "Set the value of the scale parameter sigma.\n\n:Parameter:\n    `sigma` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("ldf", method_pointer_fad89d36a4735a52bf0719a0350dbcb3, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::ldf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               \\ln f(x) = \\frac{x-\\mu}{\\sigma} - \\exp \\left( \\frac{x-m}{\\sigma} \\right) - \\ln (\\sigma).\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("pdf", method_pointer_bb57d06269de5ee7b187869dda7501d2, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::pdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               f(x) =  \\frac{1}{\\sigma} \\exp \\left\\lbrace \\frac{x-\\mu}{\\sigma} - \\exp \\left( \\frac{x-\\mu}{\\sigma} \\right)  \\right\\rbrace .\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("cdf", method_pointer_0c1c06725b0c5ec3840c3fbe8f7b911d, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::cdf()\n\n::\n\n     * \\details Let $x \\in \\mathbb{R} $ denote the value,\n     *          $$\n     *               P(X \\leq x) = 1 - \\exp \\left\\lbrace - \\exp \\left( \\frac{x-\\mu}{\\sigma} \\right)  \\right\\rbrace.\n     *          $$\n     * \\param value The considered value $x$.\n\n:Parameter:\n    `value` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("quantile", method_pointer_a1f9a6af7a6554cab7f7185428096a8c, ":raw-latex:`\\copybrief `statiskit::ContinuousUnivariateDistribution::quantile()\n\\* The quantile for GumbelMin distribution is computed as $ x =\n:raw-latex:`\\mu `+\n:raw-latex:`\\sigma `:raw-latex:`\\ln `:raw-latex:`\\lbrace `-\n:raw-latex:`\\ln `(1-p) :raw-latex:`\\rbrace  `$.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("simulate", method_pointer_62e00a3e0b875f0c9a4b34e88175acd5, "");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_mean", method_pointer_53ceccb331895fc3b7234e75ca301c22, "Get mean of GumbelMin distribution $ E(X) = - :raw-latex:`\\mu `+\n:raw-latex:`\\sigma `:raw-latex:`\\gamma`\\ :math:`, where [`\\ :raw-latex:`\\gamma`$](http://www.boost.org/doc/libs/1\\_40\\_0/libs/math/doc/sf\\_and\\_dist/html/math\\_toolkit/toolkit/internals1/constants.html)\nis the Euler's constant implemented in Boost.Math library.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("get_variance", method_pointer_f06a03f4252d52b5a8a48a48874448a6, "Get variance of GumbelMin distribution $ V(X) = :raw-latex:`\\pi`^2\n:raw-latex:`\\sigma`^2 / 6 $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_836f90f02ebd5eee9cf678e466bfba83.def("copy", method_pointer_df0e45e08f60505abbb87189b4396ccd, "");

    if(autowig::Held< class ::statiskit::GumbelMinDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::GumbelMinDistribution >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
    }

}