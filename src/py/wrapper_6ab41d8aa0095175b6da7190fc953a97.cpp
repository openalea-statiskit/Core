#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6ab41d8aa0095175b6da7190fc953a97()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int const (::statiskit::OptimizationEstimation< unsigned int, ::statiskit::BinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_c6831150ae4f5c9d9cd5995090b09d79)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_6ab41d8aa0095175b6da7190fc953a97("_OptimizationEstimation_6ab41d8aa0095175b6da7190fc953a97", "", boost::python::no_init);
    class_6ab41d8aa0095175b6da7190fc953a97.def(boost::python::init<  >(""));
    class_6ab41d8aa0095175b6da7190fc953a97.def(boost::python::init< class ::statiskit::BinomialDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_6ab41d8aa0095175b6da7190fc953a97.def(boost::python::init< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_6ab41d8aa0095175b6da7190fc953a97.def("get_iteration", method_pointer_c6831150ae4f5c9d9cd5995090b09d79, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, struct ::statiskit::OptimizationEstimation< unsigned int, class ::statiskit::BinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > >();
    }

}