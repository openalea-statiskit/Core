#include "_core.h"



namespace autowig
{
    class Wrap_5e3b9b778c57534eb8d780dfb69a1f3f : public ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >
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
    template <> autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f const volatile * get_pointer<autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f const volatile >(autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const volatile >(struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5e3b9b778c57534eb8d780dfb69a1f3f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_9af672b8799e52dda111d00a974022cd = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._discrete_multivariate_conditional_distribution_estimation");
    boost::python::object module_9af672b8799e52dda111d00a974022cd(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_9af672b8799e52dda111d00a974022cd.c_str()))));
    boost::python::scope().attr("_discrete_multivariate_conditional_distribution_estimation") = module_9af672b8799e52dda111d00a974022cd;
    boost::python::scope scope_9af672b8799e52dda111d00a974022cd = module_9af672b8799e52dda111d00a974022cd;
    boost::python::class_< autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f, autowig::Held< autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >, boost::noncopyable > class_5e3b9b778c57534eb8d780dfb69a1f3f("Estimator", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5e3b9b778c57534eb8d780dfb69a1f3f >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateConditionalDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation::Estimator >::Type >();
    }

}