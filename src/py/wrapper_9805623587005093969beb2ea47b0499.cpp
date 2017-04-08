#include "_core.h"



namespace autowig
{
    class Wrap_9805623587005093969beb2ea47b0499 : public ::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_9805623587005093969beb2ea47b0499 const volatile * get_pointer<autowig::Wrap_9805623587005093969beb2ea47b0499 const volatile >(autowig::Wrap_9805623587005093969beb2ea47b0499 const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9805623587005093969beb2ea47b0499()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_84eec6a551bf57658127a555bf79a38f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_84eec6a551bf57658127a555bf79a38f");
    boost::python::object module_84eec6a551bf57658127a555bf79a38f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_84eec6a551bf57658127a555bf79a38f.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_84eec6a551bf57658127a555bf79a38f") = module_84eec6a551bf57658127a555bf79a38f;
    boost::python::scope scope_84eec6a551bf57658127a555bf79a38f = module_84eec6a551bf57658127a555bf79a38f;
    double const & (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_41d35d3fac9a5cc1b38dfc0ac89d30f4)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_a20b5d6f16cc5408a9c6588179778332)(double const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_ba5ecf5df3ec557bb50ed184be62a7a3)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_0940780f029259be8310c65b91f680b4)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_14cd44932d2d519f9a869ab82bba0e95)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::ContinuousMultivariateDistribution >, ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::*method_pointer_34778af5f096509981b769f69fc28a9a)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< autowig::Wrap_9805623587005093969beb2ea47b0499, autowig::Held< autowig::Wrap_9805623587005093969beb2ea47b0499 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_9805623587005093969beb2ea47b0499("Estimator", "", boost::python::no_init);
    class_9805623587005093969beb2ea47b0499.def("get_mindiff", method_pointer_41d35d3fac9a5cc1b38dfc0ac89d30f4, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_9805623587005093969beb2ea47b0499.def("set_mindiff", method_pointer_a20b5d6f16cc5408a9c6588179778332, "");
    class_9805623587005093969beb2ea47b0499.def("get_minits", method_pointer_ba5ecf5df3ec557bb50ed184be62a7a3, "");
    class_9805623587005093969beb2ea47b0499.def("set_minits", method_pointer_0940780f029259be8310c65b91f680b4, "");
    class_9805623587005093969beb2ea47b0499.def("get_maxits", method_pointer_14cd44932d2d519f9a869ab82bba0e95, "");
    class_9805623587005093969beb2ea47b0499.def("set_maxits", method_pointer_34778af5f096509981b769f69fc28a9a, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9805623587005093969beb2ea47b0499 >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Estimator > > >();
    }

}