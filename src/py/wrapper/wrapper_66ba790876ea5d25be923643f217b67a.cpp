#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_66ba790876ea5d25be923643f217b67a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const (::statiskit::OptimizationEstimation< double, ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_81a91b836c8556b08e07aba60cd6194c)(::statiskit::Index const &) const = &::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iteration;
    boost::python::class_< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_66ba790876ea5d25be923643f217b67a("_OptimizationEstimation_66ba790876ea5d25be923643f217b67a", "", boost::python::no_init);
    class_66ba790876ea5d25be923643f217b67a.def(boost::python::init<  >(""));
    class_66ba790876ea5d25be923643f217b67a.def(boost::python::init< class ::statiskit::NegativeBinomialDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_66ba790876ea5d25be923643f217b67a.def(boost::python::init< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_66ba790876ea5d25be923643f217b67a.def("get_iteration", method_pointer_81a91b836c8556b08e07aba60cd6194c, "");

    if(autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::OptimizationEstimation< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}