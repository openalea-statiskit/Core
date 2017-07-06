#include "_core.h"



namespace autowig
{
    class Wrap_e19df620173959fc805b30a13ab6379a : public ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  operator()(::statiskit::UnivariateConditionalDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
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
    template <> autowig::Wrap_e19df620173959fc805b30a13ab6379a const volatile * get_pointer<autowig::Wrap_e19df620173959fc805b30a13ab6379a const volatile >(autowig::Wrap_e19df620173959fc805b30a13ab6379a const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e19df620173959fc805b30a13ab6379a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_bf2c6deebd8e55f3824ecd5cf9312434 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_conditional_distribution_estimation");
    boost::python::object module_bf2c6deebd8e55f3824ecd5cf9312434(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bf2c6deebd8e55f3824ecd5cf9312434.c_str()))));
    boost::python::scope().attr("_univariate_conditional_distribution_estimation") = module_bf2c6deebd8e55f3824ecd5cf9312434;
    boost::python::scope scope_bf2c6deebd8e55f3824ecd5cf9312434 = module_bf2c6deebd8e55f3824ecd5cf9312434;
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  (::statiskit::UnivariateConditionalDistributionEstimation::Estimator::*method_pointer_bdacedd56eba5861a3003ac87a422cf6)(::statiskit::UnivariateConditionalDistributionEstimation::data_type const &, bool const &) const = &::statiskit::UnivariateConditionalDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator > >  (::statiskit::UnivariateConditionalDistributionEstimation::Estimator::*method_pointer_e0fab2db391a546591b690a17ebe80ff)() const = &::statiskit::UnivariateConditionalDistributionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_e19df620173959fc805b30a13ab6379a, autowig::Held< autowig::Wrap_e19df620173959fc805b30a13ab6379a >::Type, boost::noncopyable > class_e19df620173959fc805b30a13ab6379a("Estimator", "", boost::python::no_init);
    class_e19df620173959fc805b30a13ab6379a.def("__call__", boost::python::pure_virtual(method_pointer_bdacedd56eba5861a3003ac87a422cf6), "");
    class_e19df620173959fc805b30a13ab6379a.def("copy", boost::python::pure_virtual(method_pointer_e0fab2db391a546591b690a17ebe80ff), "");
    if(autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e19df620173959fc805b30a13ab6379a >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation::Estimator >::Type >();
    }    

}