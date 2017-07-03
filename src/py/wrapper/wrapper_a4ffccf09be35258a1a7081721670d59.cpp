#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a4ffccf09be35258a1a7081721670d59()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< double, ::statiskit::LogarithmicDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_2a71e46d3e03587fb12087b6e541cb05)() const = &::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_a4ffccf09be35258a1a7081721670d59("_OptimizationEstimationImpl_a4ffccf09be35258a1a7081721670d59", "", boost::python::no_init);
    class_a4ffccf09be35258a1a7081721670d59.def(boost::python::init<  >(""));
    class_a4ffccf09be35258a1a7081721670d59.def(boost::python::init< class ::statiskit::LogarithmicDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_a4ffccf09be35258a1a7081721670d59.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_a4ffccf09be35258a1a7081721670d59.def("__len__", method_pointer_2a71e46d3e03587fb12087b6e541cb05, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< double, class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::LogarithmicDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}