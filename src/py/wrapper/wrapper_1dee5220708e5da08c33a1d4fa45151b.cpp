#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::SplittingDistributionEstimation::Estimator const volatile * get_pointer<class ::statiskit::SplittingDistributionEstimation::Estimator const volatile >(class ::statiskit::SplittingDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1dee5220708e5da08c33a1d4fa45151b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_0711065322d6598096f4d4546ef589f7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._splitting_distribution_estimation");
    boost::python::object module_0711065322d6598096f4d4546ef589f7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_0711065322d6598096f4d4546ef589f7.c_str()))));
    boost::python::scope().attr("_splitting_distribution_estimation") = module_0711065322d6598096f4d4546ef589f7;
    boost::python::scope scope_0711065322d6598096f4d4546ef589f7 = module_0711065322d6598096f4d4546ef589f7;
    struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_b124bfab756f50df8050560ecaa94248)() const = &::statiskit::SplittingDistributionEstimation::Estimator::get_sum;
    void  (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_275c030a2f8c5f20bdeeec13254c88bc)(struct ::statiskit::DiscreteUnivariateDistributionEstimation::Estimator const &) = &::statiskit::SplittingDistributionEstimation::Estimator::set_sum;
    struct ::statiskit::SplittingOperatorEstimation::Estimator const * (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_b91534aa120b50ecb6ca9bebe375c352)() const = &::statiskit::SplittingDistributionEstimation::Estimator::get_splitting;
    void  (::statiskit::SplittingDistributionEstimation::Estimator::*method_pointer_f4ddd43d450654dc86d9251b463fc028)(struct ::statiskit::SplittingOperatorEstimation::Estimator const &) = &::statiskit::SplittingDistributionEstimation::Estimator::set_splitting;
    boost::python::class_< class ::statiskit::SplittingDistributionEstimation::Estimator, autowig::Held< class ::statiskit::SplittingDistributionEstimation::Estimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > > > class_1dee5220708e5da08c33a1d4fa45151b("Estimator", "", boost::python::no_init);
    class_1dee5220708e5da08c33a1d4fa45151b.def(boost::python::init<  >(""));
    class_1dee5220708e5da08c33a1d4fa45151b.def(boost::python::init< class ::statiskit::SplittingDistributionEstimation::Estimator const & >(""));
    class_1dee5220708e5da08c33a1d4fa45151b.def("get_sum", method_pointer_b124bfab756f50df8050560ecaa94248, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("set_sum", method_pointer_275c030a2f8c5f20bdeeec13254c88bc, "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("get_splitting", method_pointer_b91534aa120b50ecb6ca9bebe375c352, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_1dee5220708e5da08c33a1d4fa45151b.def("set_splitting", method_pointer_f4ddd43d450654dc86d9251b463fc028, "");

    if(autowig::Held< class ::statiskit::SplittingDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::SplittingDistributionEstimation::Estimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::MultivariateDistributionEstimation::Estimator, class ::statiskit::SplittingDistributionEstimation::Estimator, struct ::statiskit::DiscreteMultivariateDistributionEstimation::Estimator > >::Type >();
    }

}