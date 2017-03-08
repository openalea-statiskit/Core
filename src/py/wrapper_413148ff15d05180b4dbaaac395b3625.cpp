#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_413148ff15d05180b4dbaaac395b3625 const volatile * get_pointer<autowig::Wrap_413148ff15d05180b4dbaaac395b3625 const volatile >(autowig::Wrap_413148ff15d05180b4dbaaac395b3625 const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_413148ff15d05180b4dbaaac395b3625 : public ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >
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


void wrapper_413148ff15d05180b4dbaaac395b3625()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f09c97b097575bf2b4af254e6faa082c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._categorical_multivariate_distribution_estimation");
    boost::python::object module_f09c97b097575bf2b4af254e6faa082c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f09c97b097575bf2b4af254e6faa082c.c_str()))));
    boost::python::scope().attr("_categorical_multivariate_distribution_estimation") = module_f09c97b097575bf2b4af254e6faa082c;
    boost::python::scope scope_f09c97b097575bf2b4af254e6faa082c = module_f09c97b097575bf2b4af254e6faa082c;
    boost::python::class_< autowig::Wrap_413148ff15d05180b4dbaaac395b3625, autowig::Held< autowig::Wrap_413148ff15d05180b4dbaaac395b3625 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_413148ff15d05180b4dbaaac395b3625("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation::Estimator >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_413148ff15d05180b4dbaaac395b3625 >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type >();
    }

}