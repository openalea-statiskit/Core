#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile >(class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5a00146a763d5fe88b5b9cb9bbcb74b7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_39bb28e71e0c56c0a21396ac17962456)() const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::size;
    struct ::statiskit::ContinuousMultivariateDistributionEstimation const * (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_d9b48065158b5e238c32c1f99dd59800)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::ListSelection< ::statiskit::ContinuousMultivariateDistribution, ::statiskit::ContinuousMultivariateDistributionEstimation >::*method_pointer_07c89756b74f5e35be6aa6dd0e5a1290)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > class_5a00146a763d5fe88b5b9cb9bbcb74b7("_ListSelection_5a00146a763d5fe88b5b9cb9bbcb74b7", "", boost::python::no_init);
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def(boost::python::init<  >(""));
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def(boost::python::init< struct ::statiskit::ContinuousMultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def(boost::python::init< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > const & >(""));
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def("__len__", method_pointer_39bb28e71e0c56c0a21396ac17962456, "");
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def("get_estimation", method_pointer_d9b48065158b5e238c32c1f99dd59800, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_5a00146a763d5fe88b5b9cb9bbcb74b7.def("get_score", method_pointer_07c89756b74f5e35be6aa6dd0e5a1290, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > >::Type, class ::statiskit::ListSelection< struct ::statiskit::ContinuousMultivariateDistribution, struct ::statiskit::ContinuousMultivariateDistributionEstimation > > > >();
    }

}