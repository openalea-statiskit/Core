#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile >(class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f125e57d2d0850ed89ebb0819839744b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_9c4bc30894835b70be044e63a18a47e3)() const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::size;
    struct ::statiskit::MultivariateDistributionEstimation const * (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_dcafc650b4ac52f5a3f76bba8ad3eaa6)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::ListSelection< ::statiskit::MultivariateDistribution, ::statiskit::MultivariateDistributionEstimation >::*method_pointer_152754a1a6985270ab963fee116ca0d4)(::statiskit::Index const &) const = &::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > class_f125e57d2d0850ed89ebb0819839744b("_ListSelection_f125e57d2d0850ed89ebb0819839744b", "", boost::python::no_init);
    class_f125e57d2d0850ed89ebb0819839744b.def(boost::python::init<  >(""));
    class_f125e57d2d0850ed89ebb0819839744b.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_f125e57d2d0850ed89ebb0819839744b.def(boost::python::init< struct ::statiskit::MultivariateDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_f125e57d2d0850ed89ebb0819839744b.def(boost::python::init< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > const & >(""));
    class_f125e57d2d0850ed89ebb0819839744b.def("__len__", method_pointer_9c4bc30894835b70be044e63a18a47e3, "");
    class_f125e57d2d0850ed89ebb0819839744b.def("get_estimation", method_pointer_dcafc650b4ac52f5a3f76bba8ad3eaa6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_f125e57d2d0850ed89ebb0819839744b.def("get_score", method_pointer_152754a1a6985270ab963fee116ca0d4, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > >::Type, class ::statiskit::ListSelection< struct ::statiskit::MultivariateDistribution, struct ::statiskit::MultivariateDistributionEstimation > > > >();
    }

}