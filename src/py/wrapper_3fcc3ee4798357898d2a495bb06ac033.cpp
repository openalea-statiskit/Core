#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3fcc3ee4798357898d2a495bb06ac033()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_b84a4944e629534882206091d6e03d35)() const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_54980017164b5dedbef6566385da788a)(::statiskit::Index const &) const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::ListEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_03d227b361935d64aa734702484b9066)(::statiskit::Index const &) const = &::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_3fcc3ee4798357898d2a495bb06ac033("_ListEstimation_3fcc3ee4798357898d2a495bb06ac033", "", boost::python::no_init);
    class_3fcc3ee4798357898d2a495bb06ac033.def(boost::python::init<  >(""));
    class_3fcc3ee4798357898d2a495bb06ac033.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_3fcc3ee4798357898d2a495bb06ac033.def(boost::python::init< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_3fcc3ee4798357898d2a495bb06ac033.def("__len__", method_pointer_b84a4944e629534882206091d6e03d35, "");
    class_3fcc3ee4798357898d2a495bb06ac033.def("get_estimation", method_pointer_54980017164b5dedbef6566385da788a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_3fcc3ee4798357898d2a495bb06ac033.def("get_score", method_pointer_03d227b361935d64aa734702484b9066, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::ListEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}