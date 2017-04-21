#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_2ee8bfaab59653a08d72e8d97ec7b5dd()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_cd7669aca3a7591db76845afad9b319a)() const = &::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistributionEstimation > > class_2ee8bfaab59653a08d72e8d97ec7b5dd("_LazyEstimation_2ee8bfaab59653a08d72e8d97ec7b5dd", "", boost::python::no_init);
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(boost::python::init<  >(""));
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const * >(""));
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_2ee8bfaab59653a08d72e8d97ec7b5dd.def("get_estimated", method_pointer_cd7669aca3a7591db76845afad9b319a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}