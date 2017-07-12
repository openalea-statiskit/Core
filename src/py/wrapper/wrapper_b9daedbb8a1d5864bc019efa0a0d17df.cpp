#include "_core.h"



namespace autowig
{
    class Wrap_b9daedbb8a1d5864bc019efa0a0d17df : public ::statiskit::MultivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::MultivariateConditionalDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df const volatile * get_pointer<autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df const volatile >(autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::MultivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::MultivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b9daedbb8a1d5864bc019efa0a0d17df()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * (::statiskit::MultivariateConditionalDistributionEstimation::*method_pointer_84032d21ab6f50bd8e28510f7cd5494f)() const = &::statiskit::MultivariateConditionalDistributionEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df, autowig::Held< autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df >::Type, boost::noncopyable > class_b9daedbb8a1d5864bc019efa0a0d17df("MultivariateConditionalDistributionEstimation", "", boost::python::no_init);
    class_b9daedbb8a1d5864bc019efa0a0d17df.def("get_estimated", boost::python::pure_virtual(method_pointer_84032d21ab6f50bd8e28510f7cd5494f), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b9daedbb8a1d5864bc019efa0a0d17df >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
    }    

}