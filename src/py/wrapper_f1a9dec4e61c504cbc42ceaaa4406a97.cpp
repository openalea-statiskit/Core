#include "_core.h"


namespace autowig
{
}


void wrapper_f1a9dec4e61c504cbc42ceaaa4406a97()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::*method_pointer_a416c25d512657d0a2498c08b657c4ac)() const = &::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation::get_estimated;
    boost::python::class_< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation, autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation, class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > > > class_f1a9dec4e61c504cbc42ceaaa4406a97("IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation", "", boost::python::no_init);
    class_f1a9dec4e61c504cbc42ceaaa4406a97.def(boost::python::init< class ::std::set< double, struct ::std::less< double >, class ::std::allocator< double > > const &, class ::std::vector< double, class ::std::allocator< double > > const &, class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSolver > const &, class ::std::shared_ptr< struct ::statiskit::SlopeHeuristicSelector > const &, class ::std::vector< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::UnivariateHistogramDistribution > > > const & >(""));
    class_f1a9dec4e61c504cbc42ceaaa4406a97.def("get_estimated", method_pointer_a416c25d512657d0a2498c08b657c4ac, "");

    if(autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation >::Type, autowig::Held< class ::statiskit::SlopeHeuristicEstimation< class ::statiskit::UnivariateHistogramDistribution > >::Type >();
    }

}