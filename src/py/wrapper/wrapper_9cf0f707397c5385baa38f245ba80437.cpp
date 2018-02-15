#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9cf0f707397c5385baa38f245ba80437()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MultinomialSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_0047c5e9a77a5d6f8bec09c40a32def5)() const = &::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_9cf0f707397c5385baa38f245ba80437("_ActiveEstimation_9cf0f707397c5385baa38f245ba80437", "", boost::python::no_init);
    class_9cf0f707397c5385baa38f245ba80437.def(boost::python::init<  >(""));
    class_9cf0f707397c5385baa38f245ba80437.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_9cf0f707397c5385baa38f245ba80437.def(boost::python::init< class ::statiskit::MultinomialSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_9cf0f707397c5385baa38f245ba80437.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_9cf0f707397c5385baa38f245ba80437.def("get_data", method_pointer_0047c5e9a77a5d6f8bec09c40a32def5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}