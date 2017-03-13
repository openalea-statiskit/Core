#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile * get_pointer<struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile >(struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_05ca2ab336025cf2a8fa3266fedb4a1e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection, autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, boost::python::bases< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_05ca2ab336025cf2a8fa3266fedb4a1e("RegularUnivariateHistogramDistributionSlopeHeuristicSelection", "", boost::python::no_init);
    class_05ca2ab336025cf2a8fa3266fedb4a1e.def(boost::python::init< struct ::statiskit::UnivariateData const * >(""));

    if(autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, autowig::Held< class ::statiskit::SlopeHeuristicSelection< struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection >::Type, struct ::statiskit::RegularUnivariateHistogramDistributionSlopeHeuristicSelection > > >();
    }

}