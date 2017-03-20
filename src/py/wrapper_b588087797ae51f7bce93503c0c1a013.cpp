#include "_core.h"



namespace autowig
{
    class Wrap_b588087797ae51f7bce93503c0c1a013 : public ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  operator()(::statiskit::UnivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b588087797ae51f7bce93503c0c1a013 const volatile * get_pointer<autowig::Wrap_b588087797ae51f7bce93503c0c1a013 const volatile >(autowig::Wrap_b588087797ae51f7bce93503c0c1a013 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b588087797ae51f7bce93503c0c1a013()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_28b80b998353537091198ca5f60cbdbf = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_28b80b998353537091198ca5f60cbdbf");
    boost::python::object module_28b80b998353537091198ca5f60cbdbf(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_28b80b998353537091198ca5f60cbdbf.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_28b80b998353537091198ca5f60cbdbf") = module_28b80b998353537091198ca5f60cbdbf;
    boost::python::scope scope_28b80b998353537091198ca5f60cbdbf = module_28b80b998353537091198ca5f60cbdbf;
    double const & (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_e81bd8b2d318509896c5bfc6b765c977)() const = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_77fb95b665c354a7953201035b8fb6f8)(double const &) = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_98cdc3b4121357ed8c5f94f5f7d34def)() const = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_4b0846332ec551db9d0b4acff9b2c537)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_877bed94f12d594f91be400f7d99d48e)() const = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::*method_pointer_0eb5fa0982165c3fa3a4d9f7407aee70)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< autowig::Wrap_b588087797ae51f7bce93503c0c1a013, autowig::Held< autowig::Wrap_b588087797ae51f7bce93503c0c1a013 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_b588087797ae51f7bce93503c0c1a013("Estimator", "", boost::python::no_init);
    class_b588087797ae51f7bce93503c0c1a013.def("get_mindiff", method_pointer_e81bd8b2d318509896c5bfc6b765c977, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b588087797ae51f7bce93503c0c1a013.def("set_mindiff", method_pointer_77fb95b665c354a7953201035b8fb6f8, "");
    class_b588087797ae51f7bce93503c0c1a013.def("get_minits", method_pointer_98cdc3b4121357ed8c5f94f5f7d34def, "");
    class_b588087797ae51f7bce93503c0c1a013.def("set_minits", method_pointer_4b0846332ec551db9d0b4acff9b2c537, "");
    class_b588087797ae51f7bce93503c0c1a013.def("get_maxits", method_pointer_877bed94f12d594f91be400f7d99d48e, "");
    class_b588087797ae51f7bce93503c0c1a013.def("set_maxits", method_pointer_0eb5fa0982165c3fa3a4d9f7407aee70, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b588087797ae51f7bce93503c0c1a013 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > >();
    }

}