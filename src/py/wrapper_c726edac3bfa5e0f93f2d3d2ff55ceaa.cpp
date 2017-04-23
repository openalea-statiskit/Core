#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const volatile >(class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c726edac3bfa5e0f93f2d3d2ff55ceaa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_d9bf9f15e3585b63b3798522663f828c = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__list_selection_d9bf9f15e3585b63b3798522663f828c");
    boost::python::object module_d9bf9f15e3585b63b3798522663f828c(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_d9bf9f15e3585b63b3798522663f828c.c_str()))));
    boost::python::scope().attr("__list_selection_d9bf9f15e3585b63b3798522663f828c") = module_d9bf9f15e3585b63b3798522663f828c;
    boost::python::scope scope_d9bf9f15e3585b63b3798522663f828c = module_d9bf9f15e3585b63b3798522663f828c;
    enum ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const & (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_9d7005b39ae75763b21637eaf9a2af70)() const = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::ListSelection< ::statiskit::CategoricalUnivariateDistribution, ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::*method_pointer_24a7b67f372d5c6497eb436689a3d536)(enum ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::bases< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator > > class_c726edac3bfa5e0f93f2d3d2ff55ceaa("CriterionEstimator", "", boost::python::no_init);
    class_c726edac3bfa5e0f93f2d3d2ff55ceaa.def(boost::python::init<  >(""));
    class_c726edac3bfa5e0f93f2d3d2ff55ceaa.def(boost::python::init< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator const & >(""));
    class_c726edac3bfa5e0f93f2d3d2ff55ceaa.def("get_criterion", method_pointer_9d7005b39ae75763b21637eaf9a2af70, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c726edac3bfa5e0f93f2d3d2ff55ceaa.def("set_criterion", method_pointer_24a7b67f372d5c6497eb436689a3d536, "");

    if(autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator >::Type, class ::statiskit::ListSelection< struct ::statiskit::CategoricalUnivariateDistribution, struct ::statiskit::CategoricalUnivariateDistributionEstimation >::CriterionEstimator > > >();
    }

}