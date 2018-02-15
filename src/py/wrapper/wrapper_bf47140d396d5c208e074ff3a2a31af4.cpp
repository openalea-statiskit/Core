#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bf47140d396d5c208e074ff3a2a31af4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::MixtureSingularDistribution, ::statiskit::SingularDistributionEstimation >::*method_pointer_06e3b49b9057576985e9e96448e883d6)() const = &::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > > > class_bf47140d396d5c208e074ff3a2a31af4("_ActiveEstimation_bf47140d396d5c208e074ff3a2a31af4", "", boost::python::no_init);
    class_bf47140d396d5c208e074ff3a2a31af4.def(boost::python::init<  >(""));
    class_bf47140d396d5c208e074ff3a2a31af4.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_bf47140d396d5c208e074ff3a2a31af4.def(boost::python::init< struct ::statiskit::MixtureSingularDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_bf47140d396d5c208e074ff3a2a31af4.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > const & >(""));
    class_bf47140d396d5c208e074ff3a2a31af4.def("get_data", method_pointer_06e3b49b9057576985e9e96448e883d6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MixtureSingularDistribution, struct ::statiskit::SingularDistributionEstimation > >::Type >();
    }

}