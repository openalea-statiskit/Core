#include "_core.h"



namespace autowig
{
    class Wrap_9b457c1fefee52aeba68eb2ee374d6c8 : public ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8 const volatile * get_pointer<autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8 const volatile >(autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile >(struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9b457c1fefee52aeba68eb2ee374d6c8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f1f8a991c324584993f9a58dcb9c014e = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_multivariate_distribution_estimation");
    boost::python::object module_f1f8a991c324584993f9a58dcb9c014e(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f1f8a991c324584993f9a58dcb9c014e.c_str()))));
    boost::python::scope().attr("_continuous_multivariate_distribution_estimation") = module_f1f8a991c324584993f9a58dcb9c014e;
    boost::python::scope scope_f1f8a991c324584993f9a58dcb9c014e = module_f1f8a991c324584993f9a58dcb9c014e;
    boost::python::class_< autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8, autowig::Held< autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_9b457c1fefee52aeba68eb2ee374d6c8("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9b457c1fefee52aeba68eb2ee374d6c8 >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}