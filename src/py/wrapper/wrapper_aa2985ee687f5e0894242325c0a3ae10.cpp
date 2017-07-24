#include "_core.h"



namespace autowig
{
    class Wrap_aa2985ee687f5e0894242325c0a3ae10 : public ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >
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
    template <> autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10 const volatile * get_pointer<autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10 const volatile >(autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10 const volatile *c) { return c; }
    template <> struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile >(struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_aa2985ee687f5e0894242325c0a3ae10()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a432be7c31225d679b632287208f5f42 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_a432be7c31225d679b632287208f5f42");
    boost::python::object module_a432be7c31225d679b632287208f5f42(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a432be7c31225d679b632287208f5f42.c_str()))));
    boost::python::scope().attr("__optimization_estimation_a432be7c31225d679b632287208f5f42") = module_a432be7c31225d679b632287208f5f42;
    boost::python::scope scope_a432be7c31225d679b632287208f5f42 = module_a432be7c31225d679b632287208f5f42;
    boost::python::class_< autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10, autowig::Held< autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10 >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >, boost::noncopyable > class_aa2985ee687f5e0894242325c0a3ae10("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_aa2985ee687f5e0894242325c0a3ae10 >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
    }

}