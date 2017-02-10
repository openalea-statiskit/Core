#include "_core.h"


namespace autowig
{
}


void wrapper_2c3563c2545b5f3382253b9a3297e580()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::shared_ptr< struct ::statiskit::UnivariateDistribution >  (::statiskit::OptimizationEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_b3df7c647ab953a1864b8f2486aeea50)() const = &::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_estimated;
    class ::std::vector< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution >, class ::std::allocator< class ::std::shared_ptr< class ::statiskit::NegativeBinomialDistribution > > > const & (::statiskit::OptimizationEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_7323f3ccdfb853fc93a4388e4982aba7)() const = &::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_iterations;
    class ::std::vector< double, class ::std::allocator< double > > const & (::statiskit::OptimizationEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_b71541dc5c3c5376a114d2b9f9fa62b3)() const = &::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::get_scores;
    bool const & (::statiskit::OptimizationEstimation< ::statiskit::NegativeBinomialDistribution, ::statiskit::DiscreteUnivariateDistributionEstimation >::*method_pointer_801b733f48435ff0b131159a127b431f)() const = &::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >::has_converged;
    boost::python::class_< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation >, autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, boost::python::bases< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > > class_2c3563c2545b5f3382253b9a3297e580("_OptimizationEstimation_2c3563c2545b5f3382253b9a3297e580", "", boost::python::no_init);
    class_2c3563c2545b5f3382253b9a3297e580.def(boost::python::init<  >(""));
    class_2c3563c2545b5f3382253b9a3297e580.def(boost::python::init< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > const & >(""));
    class_2c3563c2545b5f3382253b9a3297e580.def("get_estimated", method_pointer_b3df7c647ab953a1864b8f2486aeea50, "");
    class_2c3563c2545b5f3382253b9a3297e580.def("get_iterations", method_pointer_7323f3ccdfb853fc93a4388e4982aba7, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c3563c2545b5f3382253b9a3297e580.def("get_scores", method_pointer_b71541dc5c3c5376a114d2b9f9fa62b3, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_2c3563c2545b5f3382253b9a3297e580.def("has_converged", method_pointer_801b733f48435ff0b131159a127b431f, boost::python::return_value_policy< boost::python::return_by_value >(), "");

    if(autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::OptimizationEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type, autowig::Held< class ::statiskit::ActiveEstimation< class ::statiskit::NegativeBinomialDistribution, struct ::statiskit::DiscreteUnivariateDistributionEstimation > >::Type >();
    }

}