#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > const volatile * get_pointer<class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > const volatile >(class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dced6a8944e15d18a882afe8c36dd865()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::SplittingDistributionEstimation< ::statiskit::ActiveEstimation< ::statiskit::MultinomialSplittingDistribution, ::statiskit::DiscreteMultivariateDistributionEstimation > >::*method_pointer_a509bdd636b85d4b984bf20152118d8a)() const = &::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::get_sum;
    boost::python::class_< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >, autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_dced6a8944e15d18a882afe8c36dd865("_SplittingDistributionEstimation_dced6a8944e15d18a882afe8c36dd865", "", boost::python::no_init);
    class_dced6a8944e15d18a882afe8c36dd865.def(boost::python::init<  >(""));
    class_dced6a8944e15d18a882afe8c36dd865.def(boost::python::init< class ::statiskit::MultinomialSplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_dced6a8944e15d18a882afe8c36dd865.def(boost::python::init< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > const & >(""));
    class_dced6a8944e15d18a882afe8c36dd865.def("get_sum", method_pointer_a509bdd636b85d4b984bf20152118d8a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistributionEstimation< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::MultinomialSplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}