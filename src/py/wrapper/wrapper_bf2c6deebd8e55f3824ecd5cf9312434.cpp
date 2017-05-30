#include "_core.h"



namespace autowig
{
    class Wrap_bf2c6deebd8e55f3824ecd5cf9312434 : public ::statiskit::UnivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::UnivariateConditionalDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434 const volatile * get_pointer<autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434 const volatile >(autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434 const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::UnivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::UnivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bf2c6deebd8e55f3824ecd5cf9312434()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * (::statiskit::UnivariateConditionalDistributionEstimation::*method_pointer_c18e0a4c85e9560fa63a48b370681cca)() const = &::statiskit::UnivariateConditionalDistributionEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434, autowig::Held< autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434 >::Type, boost::noncopyable > class_bf2c6deebd8e55f3824ecd5cf9312434("UnivariateConditionalDistributionEstimation", "", boost::python::no_init);
    class_bf2c6deebd8e55f3824ecd5cf9312434.def("get_estimated", boost::python::pure_virtual(method_pointer_c18e0a4c85e9560fa63a48b370681cca), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_bf2c6deebd8e55f3824ecd5cf9312434 >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type >();
    }    

}