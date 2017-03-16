#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c5c18cd70ae6581cae3afdcf4558d5df()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::OptimizationEstimationImpl< ::statiskit::ContinuousUnivariateDistribution *, ::statiskit::ContinuousUnivariateDistribution, ::statiskit::ContinuousUnivariateDistributionEstimation >::*method_pointer_823747b1df6556cd99b4068eb937508d)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >::size;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > class_c5c18cd70ae6581cae3afdcf4558d5df("_OptimizationEstimationImpl_c5c18cd70ae6581cae3afdcf4558d5df", "", boost::python::no_init);
    class_c5c18cd70ae6581cae3afdcf4558d5df.def(boost::python::init<  >(""));
    class_c5c18cd70ae6581cae3afdcf4558d5df.def(boost::python::init< struct ::statiskit::ContinuousUnivariateDistribution const *, struct ::statiskit::UnivariateData const * >(""));
    class_c5c18cd70ae6581cae3afdcf4558d5df.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > const & >(""));
    class_c5c18cd70ae6581cae3afdcf4558d5df.def("__len__", method_pointer_823747b1df6556cd99b4068eb937508d, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::ContinuousUnivariateDistribution *, struct ::statiskit::ContinuousUnivariateDistribution, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > > >();
    }

}