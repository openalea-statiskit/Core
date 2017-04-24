#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8f3919223a1f55afb240c3500b95c95b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_f2a312cb4a5d590dbb1e9ae1362ac61d)() const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_9bd22ea1899950c2aa9321d50d5ba15d)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimation;
    double const & (::statiskit::Selection< ::statiskit::DiscreteUnivariateDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_98b607b3c29258bba448e60c8bb7dc5f)(::statiskit::Index const &) const = &::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_score;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_8f3919223a1f55afb240c3500b95c95b("_Selection_8f3919223a1f55afb240c3500b95c95b", "", boost::python::no_init);
    class_8f3919223a1f55afb240c3500b95c95b.def(boost::python::init<  >(""));
    class_8f3919223a1f55afb240c3500b95c95b.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_8f3919223a1f55afb240c3500b95c95b.def(boost::python::init< struct ::statiskit::DiscreteUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_8f3919223a1f55afb240c3500b95c95b.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_8f3919223a1f55afb240c3500b95c95b.def("__len__", method_pointer_f2a312cb4a5d590dbb1e9ae1362ac61d, "");
    class_8f3919223a1f55afb240c3500b95c95b.def("get_estimation", method_pointer_9bd22ea1899950c2aa9321d50d5ba15d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8f3919223a1f55afb240c3500b95c95b.def("get_score", method_pointer_98b607b3c29258bba448e60c8bb7dc5f, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, class ::statiskit::Selection< struct ::statiskit::DiscreteUnivariateDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}