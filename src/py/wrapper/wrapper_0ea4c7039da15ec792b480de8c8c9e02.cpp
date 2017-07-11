#include "_core.h"



namespace autowig
{
    class Wrap_0ea4c7039da15ec792b480de8c8c9e02 : public ::statiskit::SplittingDistributionEstimation< ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator, public boost::python::wrapper< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >
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
    template <> autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02 const volatile * get_pointer<autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02 const volatile >(autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02 const volatile *c) { return c; }
    template <> class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile * get_pointer<class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile >(class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0ea4c7039da15ec792b480de8c8c9e02()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_97dccc7a37f256ddb55cd8f431bfd172 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__splitting_distribution_estimation_97dccc7a37f256ddb55cd8f431bfd172");
    boost::python::object module_97dccc7a37f256ddb55cd8f431bfd172(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_97dccc7a37f256ddb55cd8f431bfd172.c_str()))));
    boost::python::scope().attr("__splitting_distribution_estimation_97dccc7a37f256ddb55cd8f431bfd172") = module_97dccc7a37f256ddb55cd8f431bfd172;
    boost::python::scope scope_97dccc7a37f256ddb55cd8f431bfd172 = module_97dccc7a37f256ddb55cd8f431bfd172;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation< ::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DirichletMultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::*method_pointer_cb91c0dc3a535aa1bde74bac6fc9e03c)() const = &::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::get_sum;
    void  (::statiskit::SplittingDistributionEstimation< ::statiskit::OptimizationEstimation< ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, ::statiskit::DirichletMultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::*method_pointer_9fdb63748f07506e9da9bccfeb653607)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator::set_sum;
    boost::python::class_< autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02, autowig::Held< autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02 >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >, boost::noncopyable > class_0ea4c7039da15ec792b480de8c8c9e02("Estimator", "", boost::python::no_init);
    class_0ea4c7039da15ec792b480de8c8c9e02.def("get_sum", method_pointer_cb91c0dc3a535aa1bde74bac6fc9e03c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0ea4c7039da15ec792b480de8c8c9e02.def("set_sum", method_pointer_9fdb63748f07506e9da9bccfeb653607, "");

    if(autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0ea4c7039da15ec792b480de8c8c9e02 >::Type, autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistributionEstimation< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Estimator >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Estimator >::Type >();
    }

}