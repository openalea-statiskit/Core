#include "_core.h"



namespace autowig
{
    class Wrap_73669872ae505cedacc2e24b29a905a0 : public ::statiskit::OptimizationEstimationImpl< ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >
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
    template <> autowig::Wrap_73669872ae505cedacc2e24b29a905a0 const volatile * get_pointer<autowig::Wrap_73669872ae505cedacc2e24b29a905a0 const volatile >(autowig::Wrap_73669872ae505cedacc2e24b29a905a0 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_73669872ae505cedacc2e24b29a905a0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_8e7da3504a5b5679aa98d8889fb4d5d1 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_8e7da3504a5b5679aa98d8889fb4d5d1");
    boost::python::object module_8e7da3504a5b5679aa98d8889fb4d5d1(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_8e7da3504a5b5679aa98d8889fb4d5d1.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_8e7da3504a5b5679aa98d8889fb4d5d1") = module_8e7da3504a5b5679aa98d8889fb4d5d1;
    boost::python::scope scope_8e7da3504a5b5679aa98d8889fb4d5d1 = module_8e7da3504a5b5679aa98d8889fb4d5d1;
    boost::python::class_< autowig::Wrap_73669872ae505cedacc2e24b29a905a0, autowig::Held< autowig::Wrap_73669872ae505cedacc2e24b29a905a0 >::Type, boost::python::bases< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >, boost::noncopyable > class_73669872ae505cedacc2e24b29a905a0("Estimator", "", boost::python::no_init);

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_73669872ae505cedacc2e24b29a905a0 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
    }

}