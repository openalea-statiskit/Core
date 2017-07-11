#include "_core.h"



namespace autowig
{
    class Wrap_9af672b8799e52dda111d00a974022cd : public ::statiskit::DiscreteMultivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >
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
    template <> autowig::Wrap_9af672b8799e52dda111d00a974022cd const volatile * get_pointer<autowig::Wrap_9af672b8799e52dda111d00a974022cd const volatile >(autowig::Wrap_9af672b8799e52dda111d00a974022cd const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9af672b8799e52dda111d00a974022cd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_9af672b8799e52dda111d00a974022cd, autowig::Held< autowig::Wrap_9af672b8799e52dda111d00a974022cd >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation >, boost::noncopyable > class_9af672b8799e52dda111d00a974022cd("DiscreteMultivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9af672b8799e52dda111d00a974022cd >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
    }

}