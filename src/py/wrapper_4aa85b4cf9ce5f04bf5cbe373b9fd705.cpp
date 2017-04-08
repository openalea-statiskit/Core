#include "_core.h"



namespace autowig
{
    class Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 : public ::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile * get_pointer<autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile >(autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4aa85b4cf9ce5f04bf5cbe373b9fd705()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_099f33625b8c56688a7b3e04cbb36b62 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_099f33625b8c56688a7b3e04cbb36b62");
    boost::python::object module_099f33625b8c56688a7b3e04cbb36b62(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_099f33625b8c56688a7b3e04cbb36b62.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_099f33625b8c56688a7b3e04cbb36b62") = module_099f33625b8c56688a7b3e04cbb36b62;
    boost::python::scope scope_099f33625b8c56688a7b3e04cbb36b62 = module_099f33625b8c56688a7b3e04cbb36b62;
    double const & (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_10ea72edefa850d3af3c21abdfbec360)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_0a5d37147a995a5f91178c8b8160d359)(double const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_90e9a48bd40255c9a2ef0c7c74d5426d)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_af75287deca45fdcabb55e7c79e7ab5a)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_43919abb6b445eec9e3fdcc8e83e9205)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateMixtureDistribution *, ::statiskit::ContinuousUnivariateMixtureDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::*method_pointer_608a167fa5855bf8b12ebff8a35e9b0e)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705, autowig::Held< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_4aa85b4cf9ce5f04bf5cbe373b9fd705("Estimator", "", boost::python::no_init);
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("get_mindiff", method_pointer_10ea72edefa850d3af3c21abdfbec360, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("set_mindiff", method_pointer_0a5d37147a995a5f91178c8b8160d359, "");
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("get_minits", method_pointer_90e9a48bd40255c9a2ef0c7c74d5426d, "");
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("set_minits", method_pointer_af75287deca45fdcabb55e7c79e7ab5a, "");
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("get_maxits", method_pointer_43919abb6b445eec9e3fdcc8e83e9205, "");
    class_4aa85b4cf9ce5f04bf5cbe373b9fd705.def("set_maxits", method_pointer_608a167fa5855bf8b12ebff8a35e9b0e, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_4aa85b4cf9ce5f04bf5cbe373b9fd705 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateMixtureDistribution *, struct ::statiskit::ContinuousUnivariateMixtureDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Estimator > > >();
    }

}