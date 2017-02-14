#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > const volatile * get_pointer<class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > const volatile >(class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
}


void wrapper_2d9bcb5621c353cba01cb2d2606216ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution >, autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type, boost::python::bases< class ::statiskit::SlopeHeuristic > > class_2d9bcb5621c353cba01cb2d2606216ca("_SlopeHeuristicEstimation_2d9bcb5621c353cba01cb2d2606216ca", "", boost::python::no_init);
    class_2d9bcb5621c353cba01cb2d2606216ca.def(boost::python::init<  >(""));
    class_2d9bcb5621c353cba01cb2d2606216ca.def(boost::python::init< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > const & >(""));

    if(autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type, autowig::Held< class ::statiskit::SlopeHeuristic >::Type >();
    }

}