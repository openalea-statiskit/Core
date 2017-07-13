#include "_core.h"



namespace autowig
{
    class Wrap_f550a61e11625416b81603dbfad86987 : public ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_f550a61e11625416b81603dbfad86987 const volatile * get_pointer<autowig::Wrap_f550a61e11625416b81603dbfad86987 const volatile >(autowig::Wrap_f550a61e11625416b81603dbfad86987 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f550a61e11625416b81603dbfad86987()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_7595c6bb437c59a9bc93a1f66c37eddf = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_7595c6bb437c59a9bc93a1f66c37eddf");
    boost::python::object module_7595c6bb437c59a9bc93a1f66c37eddf(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7595c6bb437c59a9bc93a1f66c37eddf.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_7595c6bb437c59a9bc93a1f66c37eddf") = module_7595c6bb437c59a9bc93a1f66c37eddf;
    boost::python::scope scope_7595c6bb437c59a9bc93a1f66c37eddf = module_7595c6bb437c59a9bc93a1f66c37eddf;
    boost::python::class_< autowig::Wrap_f550a61e11625416b81603dbfad86987, autowig::Held< autowig::Wrap_f550a61e11625416b81603dbfad86987 >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_f550a61e11625416b81603dbfad86987("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f550a61e11625416b81603dbfad86987 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}