#include "_core.h"



namespace autowig
{
    class Wrap_7b337e963b005631b0b064a739f3b591 : public ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  operator()(::statiskit::MultivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_7b337e963b005631b0b064a739f3b591 const volatile * get_pointer<autowig::Wrap_7b337e963b005631b0b064a739f3b591 const volatile >(autowig::Wrap_7b337e963b005631b0b064a739f3b591 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7b337e963b005631b0b064a739f3b591()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_b9daedbb8a1d5864bc019efa0a0d17df = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_conditional_distribution_estimation");
    boost::python::object module_b9daedbb8a1d5864bc019efa0a0d17df(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b9daedbb8a1d5864bc019efa0a0d17df.c_str()))));
    boost::python::scope().attr("_multivariate_conditional_distribution_estimation") = module_b9daedbb8a1d5864bc019efa0a0d17df;
    boost::python::scope scope_b9daedbb8a1d5864bc019efa0a0d17df = module_b9daedbb8a1d5864bc019efa0a0d17df;
    class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  (::statiskit::MultivariateConditionalDistributionEstimation::Estimator::*method_pointer_2459c2d8b66758a8a5e14c538955ee4e)(::statiskit::MultivariateConditionalDistributionEstimation::data_type const &, bool const &) const = &::statiskit::MultivariateConditionalDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator > >  (::statiskit::MultivariateConditionalDistributionEstimation::Estimator::*method_pointer_59986b4f11705d0e8aa830dfb22c3798)() const = &::statiskit::MultivariateConditionalDistributionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_7b337e963b005631b0b064a739f3b591, autowig::Held< autowig::Wrap_7b337e963b005631b0b064a739f3b591 >::Type, boost::noncopyable > class_7b337e963b005631b0b064a739f3b591("Estimator", "", boost::python::no_init);
    class_7b337e963b005631b0b064a739f3b591.def("__call__", boost::python::pure_virtual(method_pointer_2459c2d8b66758a8a5e14c538955ee4e), "");
    class_7b337e963b005631b0b064a739f3b591.def("copy", boost::python::pure_virtual(method_pointer_59986b4f11705d0e8aa830dfb22c3798), "");
    if(autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7b337e963b005631b0b064a739f3b591 >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }    

}