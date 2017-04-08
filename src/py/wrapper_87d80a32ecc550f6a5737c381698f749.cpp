#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_87d80a32ecc550f6a5737c381698f749()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::MultivariateDistribution const * (::statiskit::LazyEstimation< ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation >::*method_pointer_4f7484d223a0596d80d1c6c19d9dd59f)() const = &::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >::get_estimated;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::DiscreteMultivariateDistributionEstimation > > class_87d80a32ecc550f6a5737c381698f749("_LazyEstimation_87d80a32ecc550f6a5737c381698f749", "", boost::python::no_init);
    class_87d80a32ecc550f6a5737c381698f749.def(boost::python::init<  >(""));
    class_87d80a32ecc550f6a5737c381698f749.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const * >(""));
    class_87d80a32ecc550f6a5737c381698f749.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > const & >(""));
    class_87d80a32ecc550f6a5737c381698f749.def("get_estimated", method_pointer_4f7484d223a0596d80d1c6c19d9dd59f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type, class ::statiskit::LazyEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > >();
    }

}