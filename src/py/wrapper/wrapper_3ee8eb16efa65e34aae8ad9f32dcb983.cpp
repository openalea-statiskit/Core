#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3ee8eb16efa65e34aae8ad9f32dcb983()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::statiskit::UnivariateConditionalData const * (::statiskit::ActiveEstimation< ::statiskit::CategoricalUnivariateConditionalDistribution, ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::*method_pointer_67bd25f66bd65a22852d6cd86376d6bb)() const = &::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > > class_3ee8eb16efa65e34aae8ad9f32dcb983("_ActiveEstimation_3ee8eb16efa65e34aae8ad9f32dcb983", "", boost::python::no_init);
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(boost::python::init<  >(""));
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(boost::python::init< struct ::statiskit::CategoricalUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def(boost::python::init< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > const & >(""));
    class_3ee8eb16efa65e34aae8ad9f32dcb983.def("get_data", method_pointer_67bd25f66bd65a22852d6cd86376d6bb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateConditionalDistribution, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > >::Type >();
    }

}