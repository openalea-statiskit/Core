#include "_core.h"



namespace autowig
{
    class Wrap_9f71ff88156f5fd0a459f920329e5dc8 : public ::statiskit::ContinuousMultivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >
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
    template <> autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8 const volatile * get_pointer<autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8 const volatile >(autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8 const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9f71ff88156f5fd0a459f920329e5dc8()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8, autowig::Held< autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8 >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation >, boost::noncopyable > class_9f71ff88156f5fd0a459f920329e5dc8("ContinuousMultivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9f71ff88156f5fd0a459f920329e5dc8 >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
    }

}