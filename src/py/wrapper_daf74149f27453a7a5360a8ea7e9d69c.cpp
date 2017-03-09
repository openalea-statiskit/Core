#include "_core.h"



namespace autowig
{
    class Wrap_daf74149f27453a7a5360a8ea7e9d69c : public ::statiskit::UnivariateDistribution, public boost::python::wrapper< struct ::statiskit::UnivariateDistribution >
    {
        public:
            
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
                        
            virtual double  probability(struct ::statiskit::UnivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  get_sample_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("get_sample_space")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c const volatile * get_pointer<autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c const volatile >(autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_daf74149f27453a7a5360a8ea7e9d69c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::UnivariateDistribution::*method_pointer_487d0e251da458d781eb4e70b1633b00)() const = &::statiskit::UnivariateDistribution::get_sample_space;
    unsigned int  (::statiskit::UnivariateDistribution::*method_pointer_0826ef63abcb5a8d83b7e3e2df48a620)() const = &::statiskit::UnivariateDistribution::get_nb_parameters;
    double  (::statiskit::UnivariateDistribution::*method_pointer_e54dcb61962b537ca725a1f2230202dc)(struct ::statiskit::UnivariateEvent const *, bool const &) const = &::statiskit::UnivariateDistribution::probability;
    double  (::statiskit::UnivariateDistribution::*method_pointer_fea412084f2c5ba9bc73dfaeb8b4c3dc)(struct ::statiskit::UnivariateData const &) const = &::statiskit::UnivariateDistribution::loglikelihood;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateDistribution::*method_pointer_320fcafd931d58898fc5be99cb1979fe)() const = &::statiskit::UnivariateDistribution::simulate;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  (::statiskit::UnivariateDistribution::*method_pointer_7043746e82585022aaf3d0d72cbf150b)() const = &::statiskit::UnivariateDistribution::copy;
    boost::python::class_< autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c, autowig::Held< autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c >::Type, boost::noncopyable > class_daf74149f27453a7a5360a8ea7e9d69c("UnivariateDistribution", "This virtual class UnivariateDistribution represents the distribution of\na random univariate variable $ X $. The support of this distribution is\na set $ :raw-latex:`\\mathcal{X}` $ with one dimension.\n\n", boost::python::no_init);
    class_daf74149f27453a7a5360a8ea7e9d69c.def("get_sample_space", boost::python::pure_virtual(method_pointer_487d0e251da458d781eb4e70b1633b00), "Get the sample space of the distribution.\n\n:Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateSampleSpace, struct ::std::default\\_delete<\n    struct ::statiskit::UnivariateSampleSpace > >\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_0826ef63abcb5a8d83b7e3e2df48a620), "Get the number of parameters of the distribution.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("probability", boost::python::pure_virtual(method_pointer_e54dcb61962b537ca725a1f2230202dc), "Compute the probability of a set of values.\n\nLet $A :raw-latex:`\\subseteq `:raw-latex:`\\mathcal{X}` $ denote the set\nof values. The probability function get the probability $\nP:raw-latex:`\\left`(X :raw-latex:`\\in `A:raw-latex:`\\right`) $ or the\nlog probability $ :raw-latex:`\\ln `P:raw-latex:`\\left`(X\n:raw-latex:`\\in `A:raw-latex:`\\right`) $ according to the boolean\nparameter logarithm.\n\n:Parameters:\n  - `event` (:py:class:`.statiskit.UnivariateEvent`) - Undocumented\n  - `logarithm` (:cpp:any:`bool`) - The boolean.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("loglikelihood", method_pointer_fea412084f2c5ba9bc73dfaeb8b4c3dc, "Compute the log-likelihood of an univariate dataset according to the\nconsidered univariate distribution.\n\n:Parameter:\n    `data` (:py:class:`.statiskit.UnivariateData`) - The considered univariate dataset.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("simulate", boost::python::pure_virtual(method_pointer_320fcafd931d58898fc5be99cb1979fe), ":Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::UnivariateEvent, struct ::std::default\\_delete< struct\n    ::statiskit::UnivariateEvent > >\n\n");
    class_daf74149f27453a7a5360a8ea7e9d69c.def("copy", boost::python::pure_virtual(method_pointer_7043746e82585022aaf3d0d72cbf150b), "");
    if(autowig::Held< struct ::statiskit::UnivariateDistribution >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::UnivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::UnivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::UnivariateDistribution >::Type, struct ::statiskit::UnivariateDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_daf74149f27453a7a5360a8ea7e9d69c >::Type, autowig::Held< struct ::statiskit::UnivariateDistribution >::Type >();
    }    

}