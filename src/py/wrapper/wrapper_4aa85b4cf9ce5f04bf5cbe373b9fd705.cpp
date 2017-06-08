#include "_core.h"



namespace autowig
{
    class Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 : public ::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile * get_pointer<autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile >(autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4aa85b4cf9ce5f04bf5cbe373b9fd705()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_099f33625b8c56688a7b3e04cbb36b62 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_099f33625b8c56688a7b3e04cbb36b62");
    boost::python::object module_099f33625b8c56688a7b3e04cbb36b62(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_099f33625b8c56688a7b3e04cbb36b62.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_099f33625b8c56688a7b3e04cbb36b62") = module_099f33625b8c56688a7b3e04cbb36b62;
    boost::python::scope scope_099f33625b8c56688a7b3e04cbb36b62 = module_099f33625b8c56688a7b3e04cbb36b62;
    boost::python::class_< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705, autowig::Held< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_4aa85b4cf9ce5f04bf5cbe373b9fd705("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}