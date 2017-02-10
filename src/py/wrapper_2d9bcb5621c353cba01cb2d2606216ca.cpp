#include "_core.h"


namespace autowig
{
}


void wrapper_2d9bcb5621c353cba01cb2d2606216ca()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > const & (::statiskit::SlopeHeuristicEstimation< ::statiskit::UnivariateHistogramDistribution >::*method_pointer_2a790305855452b6822fb5a1d679c709)(::std::size_t const &) const = &::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution >::get_model;
    boost::python::class_< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution >, autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type, boost::python::bases< class ::statiskit::SlopeHeuristic > > class_2d9bcb5621c353cba01cb2d2606216ca("_SlopeHeuristicEstimation_2d9bcb5621c353cba01cb2d2606216ca", "", boost::python::no_init);
    class_2d9bcb5621c353cba01cb2d2606216ca.def(boost::python::init<  >(""));
    class_2d9bcb5621c353cba01cb2d2606216ca.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const &, class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSolver > const &, class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSelector > const &, class ::std::vector< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > > > const & >(""));
    class_2d9bcb5621c353cba01cb2d2606216ca.def(boost::python::init< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > const & >(""));
    class_2d9bcb5621c353cba01cb2d2606216ca.def("get_model", method_pointer_2a790305855452b6822fb5a1d679c709, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type, autowig::Held< class ::statiskit::SlopeHeuristic >::Type >();
    }

}