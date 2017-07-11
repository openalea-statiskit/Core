#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b797921d7173586f85a1f0978dfdd59d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_7178024026e15f21ad82ab4e25b888e0)() const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::size;
    struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_62b7f13af323559e9d98e54be5bce62a)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::ContinuousMultivariateConditionalDistribution, ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::*method_pointer_56456e13f5865c1eb6e3989fc64a0b1c)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > > > class_b797921d7173586f85a1f0978dfdd59d("_Selection_b797921d7173586f85a1f0978dfdd59d", "", boost::python::no_init);
    class_b797921d7173586f85a1f0978dfdd59d.def(boost::python::init<  >(""));
    class_b797921d7173586f85a1f0978dfdd59d.def(boost::python::init< class ::statiskit::MultivariateConditionalData const * >(""));
    class_b797921d7173586f85a1f0978dfdd59d.def(boost::python::init< struct ::statiskit::ContinuousMultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >(""));
    class_b797921d7173586f85a1f0978dfdd59d.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > const & >(""));
    class_b797921d7173586f85a1f0978dfdd59d.def("__len__", method_pointer_7178024026e15f21ad82ab4e25b888e0, "");
    class_b797921d7173586f85a1f0978dfdd59d.def("get_estimation", method_pointer_62b7f13af323559e9d98e54be5bce62a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_b797921d7173586f85a1f0978dfdd59d.def("get_score", method_pointer_56456e13f5865c1eb6e3989fc64a0b1c, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateConditionalDistribution, struct ::statiskit::ContinuousMultivariateConditionalDistributionEstimation > >::Type >();
    }

}