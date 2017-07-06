#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f29b9e4bae2254ec8b6d9cf0133bf530()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_64d5959ec9305a2baaca8982871e9ef1)() const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::size;
    struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_e320030bb8c35ae2a22268ed378e2cab)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateConditionalDistribution, ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::*method_pointer_7486e3344330587fbba215be328317cd)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > > > class_f29b9e4bae2254ec8b6d9cf0133bf530("_Selection_f29b9e4bae2254ec8b6d9cf0133bf530", "", boost::python::no_init);
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(boost::python::init<  >(""));
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(boost::python::init< class ::statiskit::UnivariateConditionalData const * >(""));
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(boost::python::init< struct ::statiskit::DiscreteUnivariateConditionalDistribution const *, class ::statiskit::UnivariateConditionalData const * >(""));
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > const & >(""));
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("__len__", method_pointer_64d5959ec9305a2baaca8982871e9ef1, "");
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("get_estimation", method_pointer_e320030bb8c35ae2a22268ed378e2cab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f29b9e4bae2254ec8b6d9cf0133bf530.def("get_score", method_pointer_7486e3344330587fbba215be328317cd, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateConditionalDistribution, struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation > >::Type >();
    }

}