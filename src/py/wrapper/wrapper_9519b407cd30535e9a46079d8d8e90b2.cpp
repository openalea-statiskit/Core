#include "_core.h"



namespace autowig
{
    class Wrap_9519b407cd30535e9a46079d8d8e90b2 : public ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  operator()(::statiskit::SingularDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2 const volatile * get_pointer<autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2 const volatile >(autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2 const volatile *c) { return c; }
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9519b407cd30535e9a46079d8d8e90b2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a2e03e1beb3652d19910e253216cbbdd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_a2e03e1beb3652d19910e253216cbbdd");
    boost::python::object module_a2e03e1beb3652d19910e253216cbbdd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a2e03e1beb3652d19910e253216cbbdd.c_str()))));
    boost::python::scope().attr("__optimization_estimation_a2e03e1beb3652d19910e253216cbbdd") = module_a2e03e1beb3652d19910e253216cbbdd;
    boost::python::scope scope_a2e03e1beb3652d19910e253216cbbdd = module_a2e03e1beb3652d19910e253216cbbdd;
    boost::python::class_< autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2, autowig::Held< autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2 >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >, boost::noncopyable > class_9519b407cd30535e9a46079d8d8e90b2("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9519b407cd30535e9a46079d8d8e90b2 >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MixtureSingularDistribution *, struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
    }

}