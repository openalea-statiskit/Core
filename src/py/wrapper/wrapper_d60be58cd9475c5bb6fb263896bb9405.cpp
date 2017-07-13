#include "_core.h"



namespace autowig
{
    class Wrap_d60be58cd9475c5bb6fb263896bb9405 : public ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >  operator()(::statiskit::SplittingOperatorEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405 const volatile * get_pointer<autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405 const volatile >(autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d60be58cd9475c5bb6fb263896bb9405()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_af58ac2593135a578b4bfd4a8aa7e06b = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_af58ac2593135a578b4bfd4a8aa7e06b");
    boost::python::object module_af58ac2593135a578b4bfd4a8aa7e06b(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_af58ac2593135a578b4bfd4a8aa7e06b.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_af58ac2593135a578b4bfd4a8aa7e06b") = module_af58ac2593135a578b4bfd4a8aa7e06b;
    boost::python::scope scope_af58ac2593135a578b4bfd4a8aa7e06b = module_af58ac2593135a578b4bfd4a8aa7e06b;
    boost::python::class_< autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405, autowig::Held< autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405 >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Optimization >, boost::noncopyable > class_d60be58cd9475c5bb6fb263896bb9405("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d60be58cd9475c5bb6fb263896bb9405 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >, class ::statiskit::DirichletMultinomialSplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization >::Type >();
    }

}