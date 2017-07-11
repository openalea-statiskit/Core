#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_44e7c25b7bde5df2a9f031c534765f11()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_775dd261bf615d2cad5ecd7fbe14fa6a)() const = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::size;
    struct ::statiskit::MultivariateConditionalDistributionEstimation const * (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_dd8df2374690581e8cae9c4f08ba33fa)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::MultivariateConditionalDistribution, ::statiskit::MultivariateConditionalDistributionEstimation >::*method_pointer_b15de295874259b3bc4cf1c602f3ad1f)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > > > class_44e7c25b7bde5df2a9f031c534765f11("_Selection_44e7c25b7bde5df2a9f031c534765f11", "", boost::python::no_init);
    class_44e7c25b7bde5df2a9f031c534765f11.def(boost::python::init<  >(""));
    class_44e7c25b7bde5df2a9f031c534765f11.def(boost::python::init< class ::statiskit::MultivariateConditionalData const * >(""));
    class_44e7c25b7bde5df2a9f031c534765f11.def(boost::python::init< struct ::statiskit::MultivariateConditionalDistribution const *, class ::statiskit::MultivariateConditionalData const * >(""));
    class_44e7c25b7bde5df2a9f031c534765f11.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > const & >(""));
    class_44e7c25b7bde5df2a9f031c534765f11.def("__len__", method_pointer_775dd261bf615d2cad5ecd7fbe14fa6a, "");
    class_44e7c25b7bde5df2a9f031c534765f11.def("get_estimation", method_pointer_dd8df2374690581e8cae9c4f08ba33fa, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_44e7c25b7bde5df2a9f031c534765f11.def("get_score", method_pointer_b15de295874259b3bc4cf1c602f3ad1f, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateConditionalDistribution, struct ::statiskit::MultivariateConditionalDistributionEstimation > >::Type >();
    }

}