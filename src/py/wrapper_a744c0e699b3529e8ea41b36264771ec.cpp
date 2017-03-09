#include "_core.h"



namespace autowig
{
    class Wrap_a744c0e699b3529e8ea41b36264771ec : public ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_a744c0e699b3529e8ea41b36264771ec const volatile * get_pointer<autowig::Wrap_a744c0e699b3529e8ea41b36264771ec const volatile >(autowig::Wrap_a744c0e699b3529e8ea41b36264771ec const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a744c0e699b3529e8ea41b36264771ec()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_f13beb88f0a956f5bc0cd7245bbd4b1c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._continuous_univariate_distribution_estimation");
    boost::python::object module_f13beb88f0a956f5bc0cd7245bbd4b1c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_f13beb88f0a956f5bc0cd7245bbd4b1c.c_str()))));
    boost::python::scope().attr("_continuous_univariate_distribution_estimation") = module_f13beb88f0a956f5bc0cd7245bbd4b1c;
    boost::python::scope scope_f13beb88f0a956f5bc0cd7245bbd4b1c = module_f13beb88f0a956f5bc0cd7245bbd4b1c;
    boost::python::class_< autowig::Wrap_a744c0e699b3529e8ea41b36264771ec, autowig::Held< autowig::Wrap_a744c0e699b3529e8ea41b36264771ec >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation::Estimator >, boost::noncopyable > class_a744c0e699b3529e8ea41b36264771ec("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation::Estimator >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a744c0e699b3529e8ea41b36264771ec >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
    }

}