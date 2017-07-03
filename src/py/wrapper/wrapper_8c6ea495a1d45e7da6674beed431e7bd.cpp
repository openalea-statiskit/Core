#include "_core.h"



namespace autowig
{
    class Wrap_8c6ea495a1d45e7da6674beed431e7bd : public ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd const volatile * get_pointer<autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd const volatile >(autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8c6ea495a1d45e7da6674beed431e7bd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_268d06d0f0e85a52ad155fb8391a2784 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_268d06d0f0e85a52ad155fb8391a2784");
    boost::python::object module_268d06d0f0e85a52ad155fb8391a2784(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_268d06d0f0e85a52ad155fb8391a2784.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_268d06d0f0e85a52ad155fb8391a2784") = module_268d06d0f0e85a52ad155fb8391a2784;
    boost::python::scope scope_268d06d0f0e85a52ad155fb8391a2784 = module_268d06d0f0e85a52ad155fb8391a2784;
    boost::python::class_< autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd, autowig::Held< autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_8c6ea495a1d45e7da6674beed431e7bd("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8c6ea495a1d45e7da6674beed431e7bd >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}