#include "_core.h"



namespace autowig
{
    class Wrap_10d5b7d349c75b6b89998f9a341fb629 : public ::statiskit::ContinuousUnivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >
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
    template <> autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629 const volatile * get_pointer<autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629 const volatile >(autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_10d5b7d349c75b6b89998f9a341fb629()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629, autowig::Held< autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629 >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation >, boost::noncopyable > class_10d5b7d349c75b6b89998f9a341fb629("ContinuousUnivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_10d5b7d349c75b6b89998f9a341fb629 >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::ContinuousUnivariateConditionalDistributionEstimation > > >();
    }

}