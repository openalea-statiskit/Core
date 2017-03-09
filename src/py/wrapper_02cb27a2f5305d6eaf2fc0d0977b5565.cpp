#include "_core.h"



namespace autowig
{
    class Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 : public ::statiskit::DiscreteUnivariateDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistribution >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
                        
            virtual double  pdf(int const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  ldf(int const & param_0) const
            { return this->get_override("ldf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 const volatile * get_pointer<autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 const volatile >(autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteUnivariateDistribution const volatile * get_pointer<struct ::statiskit::DiscreteUnivariateDistribution const volatile >(struct ::statiskit::DiscreteUnivariateDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_02cb27a2f5305d6eaf2fc0d0977b5565()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_605426c2d45858f585ca354c5ba360b7)() const = &::statiskit::DiscreteUnivariateDistribution::get_sample_space;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_c3377d2e9b535f76985d786c2f3a6fe0)(struct ::statiskit::UnivariateEvent const *, bool const &) const = &::statiskit::DiscreteUnivariateDistribution::probability;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_e31fb7a7a5b852af9574d7d8bac3da21)(int const &) const = &::statiskit::DiscreteUnivariateDistribution::ldf;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_e743676180d85397828cc79f44d4d185)(int const &) const = &::statiskit::DiscreteUnivariateDistribution::pdf;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_b8cb3c3bef9a57b0b9e80ef518f215b7)(int const &) const = &::statiskit::DiscreteUnivariateDistribution::cdf;
    int  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_0f752a27239a55e4a5244da5bea67286)(double const &) const = &::statiskit::DiscreteUnivariateDistribution::quantile;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_9fdf92df3e8c5e0e85306b85eb662025)() const = &::statiskit::DiscreteUnivariateDistribution::get_mean;
    double  (::statiskit::DiscreteUnivariateDistribution::*method_pointer_c6a8fd2e5dc454c89e463671fdf91f3e)() const = &::statiskit::DiscreteUnivariateDistribution::get_variance;
    boost::python::class_< autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565, autowig::Held< autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 >::Type, boost::python::bases< struct ::statiskit::UnivariateDistribution >, boost::noncopyable > class_02cb27a2f5305d6eaf2fc0d0977b5565("DiscreteUnivariateDistribution", "This virtual class DiscreteUnivariateDistribution represents the\ndistribution of a random discrete variable $ N$. The support is $\n:raw-latex:`\\mathbb{Z}` $ and we have $\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in `:raw-latex:`\\mathbb{Z}`} P(N=n) =\n1$.\n\n", boost::python::no_init);
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("get_sample_space", method_pointer_605426c2d45858f585ca354c5ba360b7, "");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("probability", method_pointer_c3377d2e9b535f76985d786c2f3a6fe0, "Compute the probability of a set of values.\n\nLet $A :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the set of\nvalues. The probability function get $ P:raw-latex:`\\left`(N\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ or $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(N\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ according to the boolean\nparameter logarithm.\n\n:Parameters:\n  - `` (:py:class:`statiskit.core.statiskit.UnivariateEvent`) - Undocumented\n  - `logarithm` (:cpp:any:`bool`) - The boolean.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("ldf", boost::python::pure_virtual(method_pointer_e31fb7a7a5b852af9574d7d8bac3da21), "Compute the log-probability of a value.\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value, $\n:raw-latex:`\\ln `P:raw-latex:`\\left`(N = n:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("pdf", boost::python::pure_virtual(method_pointer_e743676180d85397828cc79f44d4d185), "Compute the probability of a value\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value, $\nP:raw-latex:`\\left`(N = n:raw-latex:`\\right`) $.\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("cdf", boost::python::pure_virtual(method_pointer_b8cb3c3bef9a57b0b9e80ef518f215b7), "Compute the cumulative probability of a value\n\nLet $n :raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ denote the value\n\n.. math::\n\n\n   P\\left(N \\leq n\\right)  =   \\sum_{k \\leq n} P\\left(N = k\\right).\n\n:Parameter:\n    `value` (:cpp:any:`int`) - The considered value.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("quantile", boost::python::pure_virtual(method_pointer_0f752a27239a55e4a5244da5bea67286), "Compute the quantile of a probability. This is the value $ n\n:raw-latex:`\\in `:raw-latex:`\\mathbb{Z}` $ such that $ P(N\n:raw-latex:`\\leq `n) :raw-latex:`\\leq `p < P(N :raw-latex:`\\leq `n+1) $.\n\n:Parameter:\n    `p` (:cpp:any:`double`) - Undocumented\n\n:Return Type:\n    :cpp:any:`int`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("get_mean", boost::python::pure_virtual(method_pointer_9fdf92df3e8c5e0e85306b85eb662025), "Get mean of a discrete random variable $ E(N) =\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in`:raw-latex:`\\mathbb{Z}`} n P(N=n)\n$.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_02cb27a2f5305d6eaf2fc0d0977b5565.def("get_variance", boost::python::pure_virtual(method_pointer_c6a8fd2e5dc454c89e463671fdf91f3e), "Get variance of a discrete random variable $ V(N) =\n:raw-latex:`\\sum`\\_{n:raw-latex:`\\in`:raw-latex:`\\mathbb{Z}`}\n:raw-latex:`\\lbrace `n-E(n) :raw-latex:`\\rbrace`^2 P(N=n) $ $\n:raw-latex:`\\mathbb{N}` $.\n\n:Return Type:\n    :cpp:any:`double`\n\n");

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteUnivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type, struct ::statiskit::DiscreteUnivariateDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_02cb27a2f5305d6eaf2fc0d0977b5565 >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
    }

}