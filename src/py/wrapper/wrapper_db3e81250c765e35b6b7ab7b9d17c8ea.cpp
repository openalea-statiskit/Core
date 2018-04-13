#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_db3e81250c765e35b6b7ab7b9d17c8ea()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateConditionalDistribution const * (::statiskit::LazyEstimation< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_10a43caeb6835849ac5aa61029253e1d)() const = &::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation > > class_db3e81250c765e35b6b7ab7b9d17c8ea("_LazyEstimation_db3e81250c765e35b6b7ab7b9d17c8ea", "", boost::python::no_init);
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(boost::python::init<  >(""));
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(boost::python::init< struct ::statiskit::MultivariateConditionalDistribution const * >(""));
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const & >(""));
    class_db3e81250c765e35b6b7ab7b9d17c8ea.def("get_estimated", method_pointer_10a43caeb6835849ac5aa61029253e1d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
    }

}