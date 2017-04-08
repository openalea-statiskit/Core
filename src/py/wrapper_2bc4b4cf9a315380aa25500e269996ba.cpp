#include "_core.h"



namespace autowig
{
    class Wrap_2bc4b4cf9a315380aa25500e269996ba : public ::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >
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
    template <> autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba const volatile * get_pointer<autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba const volatile >(autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba const volatile *c) { return c; }
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2bc4b4cf9a315380aa25500e269996ba()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_1b24919f2a0e5918adddc5638f6048e9 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_1b24919f2a0e5918adddc5638f6048e9");
    boost::python::object module_1b24919f2a0e5918adddc5638f6048e9(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_1b24919f2a0e5918adddc5638f6048e9.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_1b24919f2a0e5918adddc5638f6048e9") = module_1b24919f2a0e5918adddc5638f6048e9;
    boost::python::scope scope_1b24919f2a0e5918adddc5638f6048e9 = module_1b24919f2a0e5918adddc5638f6048e9;
    double const & (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_a3771d9016385b30ad63b3163b9fbfb9)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_d144ff7408815925b2c49747873237b5)(double const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_8047f1232cc85b63b782bfdf29c35a0d)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_d3a3a138cf0e5cc783902890217a5a5e)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_7a4426c01147595689a57d34f2ec1872)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution > *, ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::*method_pointer_292fdecfc21c5ec7985163d4beff6f7a)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba, autowig::Held< autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_2bc4b4cf9a315380aa25500e269996ba("Estimator", "", boost::python::no_init);
    class_2bc4b4cf9a315380aa25500e269996ba.def("get_mindiff", method_pointer_a3771d9016385b30ad63b3163b9fbfb9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2bc4b4cf9a315380aa25500e269996ba.def("set_mindiff", method_pointer_d144ff7408815925b2c49747873237b5, "");
    class_2bc4b4cf9a315380aa25500e269996ba.def("get_minits", method_pointer_8047f1232cc85b63b782bfdf29c35a0d, "");
    class_2bc4b4cf9a315380aa25500e269996ba.def("set_minits", method_pointer_d3a3a138cf0e5cc783902890217a5a5e, "");
    class_2bc4b4cf9a315380aa25500e269996ba.def("get_maxits", method_pointer_7a4426c01147595689a57d34f2ec1872, "");
    class_2bc4b4cf9a315380aa25500e269996ba.def("set_maxits", method_pointer_292fdecfc21c5ec7985163d4beff6f7a, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_2bc4b4cf9a315380aa25500e269996ba >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > *, struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Estimator > > >();
    }

}