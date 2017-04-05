#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile * get_pointer<class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile >(class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f2ecaf3b0a6b579abb5e76d3de955c1d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_748e3ec2e85552f2ab39e490d409b414 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__optimization_estimation_impl_748e3ec2e85552f2ab39e490d409b414");
    boost::python::object module_748e3ec2e85552f2ab39e490d409b414(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_748e3ec2e85552f2ab39e490d409b414.c_str()))));
    boost::python::scope().attr("__optimization_estimation_impl_748e3ec2e85552f2ab39e490d409b414") = module_748e3ec2e85552f2ab39e490d409b414;
    boost::python::scope scope_748e3ec2e85552f2ab39e490d409b414 = module_748e3ec2e85552f2ab39e490d409b414;
    double const & (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_966a8695e3375babbe58c58d873bc715)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_mindiff;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_35a235e2c3c75327af8f757790584cf7)(double const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_mindiff;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_52af219e1f0b54eeae9866902e7307b8)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_minits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_5d127ec31147582b99ac1413a51afbc9)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_minits;
    unsigned int  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_a04b19c6d37e5d39a1a9aa1aba7339ad)() const = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::get_maxits;
    void  (::statiskit::OptimizationEstimationImpl< ::statiskit::CategoricalUnivariateMixtureDistribution *, ::statiskit::CategoricalUnivariateMixtureDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::*method_pointer_12fd21283d725bc4b39a17395fffc173)(unsigned int const &) = &::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator::set_maxits;
    boost::python::class_< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator > > class_f2ecaf3b0a6b579abb5e76d3de955c1d("Estimator", "", boost::python::no_init);
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def(boost::python::init<  >(""));
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def(boost::python::init< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator const & >(""));
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("get_mindiff", method_pointer_966a8695e3375babbe58c58d873bc715, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("set_mindiff", method_pointer_35a235e2c3c75327af8f757790584cf7, "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("get_minits", method_pointer_52af219e1f0b54eeae9866902e7307b8, "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("set_minits", method_pointer_5d127ec31147582b99ac1413a51afbc9, "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("get_maxits", method_pointer_a04b19c6d37e5d39a1a9aa1aba7339ad, "");
    class_f2ecaf3b0a6b579abb5e76d3de955c1d.def("set_maxits", method_pointer_12fd21283d725bc4b39a17395fffc173, "");

    if(autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type, class ::statiskit::OptimizationEstimationImpl< struct ::statiskit::CategoricalUnivariateMixtureDistribution *, struct ::statiskit::CategoricalUnivariateMixtureDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > >();
    }

}