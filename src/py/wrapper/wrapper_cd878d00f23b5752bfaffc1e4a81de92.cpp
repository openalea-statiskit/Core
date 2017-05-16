#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile >(class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cd878d00f23b5752bfaffc1e4a81de92()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateData const * (::statiskit::ActiveEstimation< ::statiskit::IndependentMultivariateDistribution< ::statiskit::CategoricalMultivariateDistribution >, ::statiskit::CategoricalMultivariateDistributionEstimation >::*method_pointer_22c307296e5b5077ae90a22a0aee5e37)() const = &::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >::get_data;
    boost::python::class_< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > class_cd878d00f23b5752bfaffc1e4a81de92("_ActiveEstimation_cd878d00f23b5752bfaffc1e4a81de92", "", boost::python::no_init);
    class_cd878d00f23b5752bfaffc1e4a81de92.def(boost::python::init<  >(""));
    class_cd878d00f23b5752bfaffc1e4a81de92.def(boost::python::init< struct ::statiskit::MultivariateData const * >(""));
    class_cd878d00f23b5752bfaffc1e4a81de92.def(boost::python::init< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution > const *, struct ::statiskit::MultivariateData const * >(""));
    class_cd878d00f23b5752bfaffc1e4a81de92.def(boost::python::init< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > const & >(""));
    class_cd878d00f23b5752bfaffc1e4a81de92.def("get_data", method_pointer_22c307296e5b5077ae90a22a0aee5e37, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > >::Type, class ::statiskit::ActiveEstimation< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::CategoricalMultivariateDistribution >, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > > >();
    }

}