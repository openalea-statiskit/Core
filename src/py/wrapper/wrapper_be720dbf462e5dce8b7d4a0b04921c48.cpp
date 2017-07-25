#include "_core.h"



namespace autowig
{
    class Wrap_be720dbf462e5dce8b7d4a0b04921c48 : public ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48 const volatile * get_pointer<autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48 const volatile >(autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48 const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_be720dbf462e5dce8b7d4a0b04921c48()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_a004a7cf0d095bdeadf276d9713e024f = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._categorical_multivariate_conditional_distribution_estimation");
    boost::python::object module_a004a7cf0d095bdeadf276d9713e024f(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a004a7cf0d095bdeadf276d9713e024f.c_str()))));
    boost::python::scope().attr("_categorical_multivariate_conditional_distribution_estimation") = module_a004a7cf0d095bdeadf276d9713e024f;
    boost::python::scope scope_a004a7cf0d095bdeadf276d9713e024f = module_a004a7cf0d095bdeadf276d9713e024f;
    boost::python::class_< autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48, autowig::Held< autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48 >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_be720dbf462e5dce8b7d4a0b04921c48("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_be720dbf462e5dce8b7d4a0b04921c48 >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}