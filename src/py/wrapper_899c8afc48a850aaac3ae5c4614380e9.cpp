#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_899c8afc48a850aaac3ae5c4614380e9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::MultivariateMixtureDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_6c93edbd582d581cb4cb23c079b59786)() const = &::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation > > class_899c8afc48a850aaac3ae5c4614380e9("_LazyEstimation_899c8afc48a850aaac3ae5c4614380e9", "", boost::python::no_init);
    class_899c8afc48a850aaac3ae5c4614380e9.def(boost::python::init<  >(""));
    class_899c8afc48a850aaac3ae5c4614380e9.def(boost::python::init< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const * >(""));
    class_899c8afc48a850aaac3ae5c4614380e9.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >(""));
    class_899c8afc48a850aaac3ae5c4614380e9.def("get_estimated", method_pointer_6c93edbd582d581cb4cb23c079b59786, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< struct ::statiskit::MultivariateMixtureDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > >();
    }

}