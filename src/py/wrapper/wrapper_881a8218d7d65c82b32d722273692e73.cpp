#include "_core.h"



namespace autowig
{
    class Wrap_881a8218d7d65c82b32d722273692e73 : public ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  operator()(::statiskit::MultivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_881a8218d7d65c82b32d722273692e73 const volatile * get_pointer<autowig::Wrap_881a8218d7d65c82b32d722273692e73 const volatile >(autowig::Wrap_881a8218d7d65c82b32d722273692e73 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_881a8218d7d65c82b32d722273692e73()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_9f71ff88156f5fd0a459f920329e5dc8 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_multivariate_conditional_distribution_estimation");
    boost::python::object module_9f71ff88156f5fd0a459f920329e5dc8(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9f71ff88156f5fd0a459f920329e5dc8.c_str()))));
    boost::python::scope().attr("_continuous_multivariate_conditional_distribution_estimation") = module_9f71ff88156f5fd0a459f920329e5dc8;
    boost::python::scope scope_9f71ff88156f5fd0a459f920329e5dc8 = module_9f71ff88156f5fd0a459f920329e5dc8;
    boost::python::class_< autowig::Wrap_881a8218d7d65c82b32d722273692e73, autowig::Held< autowig::Wrap_881a8218d7d65c82b32d722273692e73 >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_881a8218d7d65c82b32d722273692e73("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_881a8218d7d65c82b32d722273692e73 >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}