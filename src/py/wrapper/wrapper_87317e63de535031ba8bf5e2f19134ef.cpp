#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_87317e63de535031ba8bf5e2f19134ef()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation > > class_87317e63de535031ba8bf5e2f19134ef("_LazyEstimation_87317e63de535031ba8bf5e2f19134ef", "", boost::python::no_init);
    class_87317e63de535031ba8bf5e2f19134ef.def(boost::python::init<  >(""));
    class_87317e63de535031ba8bf5e2f19134ef.def(boost::python::init< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const * >(""));
    class_87317e63de535031ba8bf5e2f19134ef.def(boost::python::init< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));

    if(autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::LazyEstimation< class ::statiskit::ShiftedDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}