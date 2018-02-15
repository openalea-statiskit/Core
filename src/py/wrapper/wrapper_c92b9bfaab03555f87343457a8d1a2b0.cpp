#include "_core.h"



namespace autowig
{
    class Wrap_c92b9bfaab03555f87343457a8d1a2b0 : public ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0 const volatile * get_pointer<autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0 const volatile >(autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c92b9bfaab03555f87343457a8d1a2b0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_16ec8df96bd85f88b8999c4cbe58279e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_16ec8df96bd85f88b8999c4cbe58279e");
    boost::python::object module_16ec8df96bd85f88b8999c4cbe58279e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_16ec8df96bd85f88b8999c4cbe58279e.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_16ec8df96bd85f88b8999c4cbe58279e") = module_16ec8df96bd85f88b8999c4cbe58279e;
    boost::python::scope scope_16ec8df96bd85f88b8999c4cbe58279e = module_16ec8df96bd85f88b8999c4cbe58279e;
    boost::python::class_< autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0, autowig::Held< autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0 >::Type, boost::python::bases< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >, boost::noncopyable > class_c92b9bfaab03555f87343457a8d1a2b0("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c92b9bfaab03555f87343457a8d1a2b0 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
    }

}