#include "_core.h"



namespace autowig
{
    class Wrap_e2aa406ade4850eda910a734d419832b : public ::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_e2aa406ade4850eda910a734d419832b const volatile * get_pointer<autowig::Wrap_e2aa406ade4850eda910a734d419832b const volatile >(autowig::Wrap_e2aa406ade4850eda910a734d419832b const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e2aa406ade4850eda910a734d419832b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_39bbeb58de54579b934e5a56a51b377c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_39bbeb58de54579b934e5a56a51b377c");
    boost::python::object module_39bbeb58de54579b934e5a56a51b377c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_39bbeb58de54579b934e5a56a51b377c.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_39bbeb58de54579b934e5a56a51b377c") = module_39bbeb58de54579b934e5a56a51b377c;
    boost::python::scope scope_39bbeb58de54579b934e5a56a51b377c = module_39bbeb58de54579b934e5a56a51b377c;
    boost::python::class_< autowig::Wrap_e2aa406ade4850eda910a734d419832b, autowig::Held< autowig::Wrap_e2aa406ade4850eda910a734d419832b >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_e2aa406ade4850eda910a734d419832b("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e2aa406ade4850eda910a734d419832b >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::DiscreteMultivariateDistribution >, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}