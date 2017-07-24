#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile * get_pointer<struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile >(struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_696d8519751c50b58e564a3e1037f5f0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation >, autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, boost::python::bases< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > > > class_696d8519751c50b58e564a3e1037f5f0("_MixtureDistributionEMEstimation_696d8519751c50b58e564a3e1037f5f0", "", boost::python::no_init);
    class_696d8519751c50b58e564a3e1037f5f0.def(boost::python::init<  >(""));
    class_696d8519751c50b58e564a3e1037f5f0.def(boost::python::init< struct ::statiskit::SplittingMixtureOperator const *, struct ::statiskit::MultivariateData const * >(""));
    class_696d8519751c50b58e564a3e1037f5f0.def(boost::python::init< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > const & >(""));

    if(autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::MixtureDistributionEMEstimation< struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type, autowig::Held< struct ::statiskit::OptimizationEstimation< struct ::statiskit::SplittingMixtureOperator *, struct ::statiskit::SplittingMixtureOperator, struct ::statiskit::SplittingOperatorEstimation > >::Type >();
    }

}