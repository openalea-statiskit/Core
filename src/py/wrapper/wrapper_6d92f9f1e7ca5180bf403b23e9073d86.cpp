#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6d92f9f1e7ca5180bf403b23e9073d86()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_ca50d32849c05b08b108168dc484e54b)() const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;
    struct ::statiskit::ContinuousUnivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_4217ce489695580083c6b58b2a679a5d)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_763f5cac1f805c31b0899051a8d2c42e)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_6d92f9f1e7ca5180bf403b23e9073d86("_Selection_6d92f9f1e7ca5180bf403b23e9073d86", "", boost::python::no_init);
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(boost::python::init<  >(""));
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(boost::python::init< struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_6d92f9f1e7ca5180bf403b23e9073d86.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("__len__", method_pointer_ca50d32849c05b08b108168dc484e54b, "");
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("get_estimation", method_pointer_4217ce489695580083c6b58b2a679a5d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6d92f9f1e7ca5180bf403b23e9073d86.def("get_score", method_pointer_763f5cac1f805c31b0899051a8d2c42e, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::Selection< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > >();
    }

}