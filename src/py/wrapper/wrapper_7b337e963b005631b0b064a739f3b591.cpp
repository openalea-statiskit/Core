#include "_core.h"



namespace autowig
{
    class Wrap_7b337e963b005631b0b064a739f3b591 : public ::statiskit::MultivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            

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
    boost::python::class_< autowig::Wrap_7b337e963b005631b0b064a739f3b591, autowig::Held< autowig::Wrap_7b337e963b005631b0b064a739f3b591 >::Type, boost::python::bases< class ::statiskit::Estimator >, boost::noncopyable > class_7b337e963b005631b0b064a739f3b591("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7b337e963b005631b0b064a739f3b591 >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< class ::statiskit::Estimator >::Type >();
    }

}