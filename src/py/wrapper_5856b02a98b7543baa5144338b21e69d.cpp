#include "_core.h"



namespace autowig
{
    class Wrap_5856b02a98b7543baa5144338b21e69d : public ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, ::statiskit::Index const & param_1, bool const & param_2) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1, param_2);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5856b02a98b7543baa5144338b21e69d const volatile * get_pointer<autowig::Wrap_5856b02a98b7543baa5144338b21e69d const volatile >(autowig::Wrap_5856b02a98b7543baa5144338b21e69d const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5856b02a98b7543baa5144338b21e69d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_9b52bf3c9c595cdb890173a39b0d02c4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._categorical_univariate_conditional_distribution_estimation");
    boost::python::object module_9b52bf3c9c595cdb890173a39b0d02c4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9b52bf3c9c595cdb890173a39b0d02c4.c_str()))));
    boost::python::scope().attr("_categorical_univariate_conditional_distribution_estimation") = module_9b52bf3c9c595cdb890173a39b0d02c4;
    boost::python::scope scope_9b52bf3c9c595cdb890173a39b0d02c4 = module_9b52bf3c9c595cdb890173a39b0d02c4;
    boost::python::class_< autowig::Wrap_5856b02a98b7543baa5144338b21e69d, autowig::Held< autowig::Wrap_5856b02a98b7543baa5144338b21e69d >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_5856b02a98b7543baa5144338b21e69d("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5856b02a98b7543baa5144338b21e69d >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation::Estimator > > >();
    }

}