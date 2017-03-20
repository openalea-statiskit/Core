#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> struct ::statiskit::NormalDistributionMLEstimation::Estimator const volatile * get_pointer<struct ::statiskit::NormalDistributionMLEstimation::Estimator const volatile >(struct ::statiskit::NormalDistributionMLEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_871f2a5a4b135dfeb5ac066db0fbca5c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_aabf684ce17950b49b6345c1ab565540 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._normal_distribution_ml_estimation");
    boost::python::object module_aabf684ce17950b49b6345c1ab565540(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_aabf684ce17950b49b6345c1ab565540.c_str()))));
    boost::python::scope().attr("_normal_distribution_ml_estimation") = module_aabf684ce17950b49b6345c1ab565540;
    boost::python::scope scope_aabf684ce17950b49b6345c1ab565540 = module_aabf684ce17950b49b6345c1ab565540;
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation > >  (::statiskit::NormalDistributionMLEstimation::Estimator::*method_pointer_27b1a30cbd515f36ad62b8dec7775d5e)(struct ::statiskit::UnivariateData const &, bool const &) const = &::statiskit::NormalDistributionMLEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDistributionEstimation::Estimator > >  (::statiskit::NormalDistributionMLEstimation::Estimator::*method_pointer_f005ab023e4d5456980e1ff1e17dfc7f)() const = &::statiskit::NormalDistributionMLEstimation::Estimator::copy;
    boost::python::class_< struct ::statiskit::NormalDistributionMLEstimation::Estimator, autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator > > class_871f2a5a4b135dfeb5ac066db0fbca5c("Estimator", "", boost::python::no_init);
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def(boost::python::init<  >(""));
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def("__call__", method_pointer_27b1a30cbd515f36ad62b8dec7775d5e, "");
    class_871f2a5a4b135dfeb5ac066db0fbca5c.def("copy", method_pointer_f005ab023e4d5456980e1ff1e17dfc7f, "");

    if(autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::NormalDistributionMLEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::NormalDistributionMLEstimation::Estimator >::Type, struct ::statiskit::NormalDistributionMLEstimation::Estimator > > >();
    }

}