#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_34e9a178ea5a5aebabb3b859d5a63048()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::std::size_t  (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_43de7d17349a54009af6cbd7173c4ef9)() const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;
    struct ::statiskit::UnivariateDistributionEstimation const * (::statiskit::IndependentMultivariateDistributionEstimation< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_c11933582f3b590986c65a83900bcfe0)(::std::size_t const &) const = &::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_estimation;
    boost::python::class_< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_34e9a178ea5a5aebabb3b859d5a63048("_IndependentMultivariateDistributionEstimation_34e9a178ea5a5aebabb3b859d5a63048", "", boost::python::no_init);
    class_34e9a178ea5a5aebabb3b859d5a63048.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_34e9a178ea5a5aebabb3b859d5a63048.def("__len__", method_pointer_43de7d17349a54009af6cbd7173c4ef9, "");
    class_34e9a178ea5a5aebabb3b859d5a63048.def("get_estimation", method_pointer_c11933582f3b590986c65a83900bcfe0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistributionEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
    }

}