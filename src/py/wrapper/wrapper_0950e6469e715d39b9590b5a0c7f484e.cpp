#include "_core.h"



namespace autowig
{
    class Wrap_0950e6469e715d39b9590b5a0c7f484e : public ::statiskit::OptimizationEstimation< double, ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e const volatile * get_pointer<autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e const volatile >(autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e const volatile *c) { return c; }
    template <> struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0950e6469e715d39b9590b5a0c7f484e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_232384c3de2e54ad9b4768c29f93cd4e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_232384c3de2e54ad9b4768c29f93cd4e");
    boost::python::object module_232384c3de2e54ad9b4768c29f93cd4e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_232384c3de2e54ad9b4768c29f93cd4e.c_str()))));
    boost::python::scope().attr("__optimization_estimation_232384c3de2e54ad9b4768c29f93cd4e") = module_232384c3de2e54ad9b4768c29f93cd4e;
    boost::python::scope scope_232384c3de2e54ad9b4768c29f93cd4e = module_232384c3de2e54ad9b4768c29f93cd4e;
    boost::python::class_< autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e, autowig::Held< autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_0950e6469e715d39b9590b5a0c7f484e("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0950e6469e715d39b9590b5a0c7f484e >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }

}