#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{

}


void wrapper_3312cf49434759ee93e09764ddc76065()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::*method_pointer_af7adad2693f5750a5ee91cf1202bc7a)() const = &::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation > > class_3312cf49434759ee93e09764ddc76065("_LazyEstimation_3312cf49434759ee93e09764ddc76065", "", boost::python::no_init);
    class_3312cf49434759ee93e09764ddc76065.def(boost::python::init<  >(""));
    class_3312cf49434759ee93e09764ddc76065.def(boost::python::init< struct ::statiskit::CategoricalUnivariateDistribution const * >(""));
    class_3312cf49434759ee93e09764ddc76065.def(boost::python::init< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > const & >(""));
    class_3312cf49434759ee93e09764ddc76065.def("get_estimated", method_pointer_af7adad2693f5750a5ee91cf1202bc7a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type >();
    }

}