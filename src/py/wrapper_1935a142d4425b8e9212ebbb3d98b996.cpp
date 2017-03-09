#include "_core.h"



namespace autowig
{
    class Wrap_1935a142d4425b8e9212ebbb3d98b996 : public ::statiskit::OptimizationEstimation< double, ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, public boost::python::wrapper< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996 const volatile * get_pointer<autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996 const volatile >(autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1935a142d4425b8e9212ebbb3d98b996()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_66ba790876ea5d25be923643f217b67a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_66ba790876ea5d25be923643f217b67a");
    boost::python::object module_66ba790876ea5d25be923643f217b67a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_66ba790876ea5d25be923643f217b67a.c_str()))));
    boost::python::scope().attr("__optimization_estimation_66ba790876ea5d25be923643f217b67a") = module_66ba790876ea5d25be923643f217b67a;
    boost::python::scope scope_66ba790876ea5d25be923643f217b67a = module_66ba790876ea5d25be923643f217b67a;
    boost::python::class_< autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996, autowig::Held< autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996 >::Type, boost::noncopyable > class_1935a142d4425b8e9212ebbb3d98b996("Estimator", "", boost::python::no_init);
    if(autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type, struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_1935a142d4425b8e9212ebbb3d98b996 >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Estimator >::Type >();
    }    

}