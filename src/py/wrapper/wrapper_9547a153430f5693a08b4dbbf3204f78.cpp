#include "_core.h"



namespace autowig
{
    class Wrap_9547a153430f5693a08b4dbbf3204f78 : public ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_9547a153430f5693a08b4dbbf3204f78 const volatile * get_pointer<autowig::Wrap_9547a153430f5693a08b4dbbf3204f78 const volatile >(autowig::Wrap_9547a153430f5693a08b4dbbf3204f78 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9547a153430f5693a08b4dbbf3204f78()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_10d5b7d349c75b6b89998f9a341fb629 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_univariate_conditional_distribution_estimation");
    boost::python::object module_10d5b7d349c75b6b89998f9a341fb629(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_10d5b7d349c75b6b89998f9a341fb629.c_str()))));
    boost::python::scope().attr("_continuous_univariate_conditional_distribution_estimation") = module_10d5b7d349c75b6b89998f9a341fb629;
    boost::python::scope scope_10d5b7d349c75b6b89998f9a341fb629 = module_10d5b7d349c75b6b89998f9a341fb629;
    boost::python::class_< autowig::Wrap_9547a153430f5693a08b4dbbf3204f78, autowig::Held< autowig::Wrap_9547a153430f5693a08b4dbbf3204f78 >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_9547a153430f5693a08b4dbbf3204f78("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9547a153430f5693a08b4dbbf3204f78 >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}