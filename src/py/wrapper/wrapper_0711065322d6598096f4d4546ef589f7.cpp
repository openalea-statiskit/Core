#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SplittingDistributionEstimation const volatile * get_pointer<class ::statiskit::SplittingDistributionEstimation const volatile >(class ::statiskit::SplittingDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0711065322d6598096f4d4546ef589f7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation const * (::statiskit::SplittingDistributionEstimation::*method_pointer_bccbb35dbee556ff9fbc1091f8b19ee2)() const = &::statiskit::SplittingDistributionEstimation::get_sum;
    struct ::statiskit::SplittingOperatorEstimation const * (::statiskit::SplittingDistributionEstimation::*method_pointer_4ceffe036f925fdeb183f6eff8824c70)() const = &::statiskit::SplittingDistributionEstimation::get_splitting;
    boost::python::class_< class ::statiskit::SplittingDistributionEstimation, autowig::Held< class ::statiskit::SplittingDistributionEstimation >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > > > class_0711065322d6598096f4d4546ef589f7("SplittingDistributionEstimation", "", boost::python::no_init);
    class_0711065322d6598096f4d4546ef589f7.def(boost::python::init< class ::statiskit::SplittingDistribution const *, struct ::statiskit::MultivariateData const * >(""));
    class_0711065322d6598096f4d4546ef589f7.def(boost::python::init< class ::statiskit::SplittingDistributionEstimation const & >(""));
    class_0711065322d6598096f4d4546ef589f7.def("get_sum", method_pointer_bccbb35dbee556ff9fbc1091f8b19ee2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0711065322d6598096f4d4546ef589f7.def("get_splitting", method_pointer_4ceffe036f925fdeb183f6eff8824c70, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

    if(autowig::Held< class ::statiskit::SplittingDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistributionEstimation >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::SplittingDistribution, struct ::statiskit::DiscreteMultivariateDistributionEstimation > >::Type >();
    }

}