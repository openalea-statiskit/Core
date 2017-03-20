#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile * get_pointer<struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile >(struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_31af2f3c7b5c54f5a56e10ac7064289b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection, autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_31af2f3c7b5c54f5a56e10ac7064289b("IrregularUnivariateHistogramDistributionSlopeHeuristicSelection", "", boost::python::no_init);
    class_31af2f3c7b5c54f5a56e10ac7064289b.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));
    class_31af2f3c7b5c54f5a56e10ac7064289b.def(boost::python::init< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection const & >(""));

    if(autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, struct ::statiskit::IrregularUnivariateHistogramDistributionSlopeHeuristicSelection > > >();
    }

}