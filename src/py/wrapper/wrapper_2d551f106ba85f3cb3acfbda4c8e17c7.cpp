#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2d551f106ba85f3cb3acfbda4c8e17c7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_be81edf2ea0653ba81c66712dbae1e0d)() const = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::size;
    struct ::statiskit::MultivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_b262ffec9c70564ca63c82a3e958c283)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_ea83afb236a2520c96267044bb709ec3)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > class_2d551f106ba85f3cb3acfbda4c8e17c7("_Selection_2d551f106ba85f3cb3acfbda4c8e17c7", "", boost::python::no_init);
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(boost::python::init<  >(""));
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(boost::python::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("__len__", method_pointer_be81edf2ea0653ba81c66712dbae1e0d, "");
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("get_estimation", method_pointer_b262ffec9c70564ca63c82a3e958c283, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_2d551f106ba85f3cb3acfbda4c8e17c7.def("get_score", method_pointer_ea83afb236a2520c96267044bb709ec3, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
    }

}