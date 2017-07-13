#include "_core.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator const volatile >(class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_df2e34853f5b5b539c2743d1b5630a5c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_bfd0af0710215b30a7afa5127166b334 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_bfd0af0710215b30a7afa5127166b334");
    boost::python::object module_bfd0af0710215b30a7afa5127166b334(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bfd0af0710215b30a7afa5127166b334.c_str()))));
    boost::python::scope().attr("__selection_bfd0af0710215b30a7afa5127166b334") = module_bfd0af0710215b30a7afa5127166b334;
    boost::python::scope scope_bfd0af0710215b30a7afa5127166b334 = module_bfd0af0710215b30a7afa5127166b334;
    enum ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::criterion_type const & (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::*method_pointer_f01eab64510a553a8f74355fff9f7895)() const = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::get_criterion;
    void  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::*method_pointer_0b00c2f122ca5d2d87131c8363fe5b89)(enum ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::criterion_type const &) = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator::set_criterion;
    boost::python::class_< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator >::Type, boost::python::bases< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > > > class_df2e34853f5b5b539c2743d1b5630a5c("CriterionEstimator", "", boost::python::no_init);
    class_df2e34853f5b5b539c2743d1b5630a5c.def(boost::python::init<  >(""));
    class_df2e34853f5b5b539c2743d1b5630a5c.def(boost::python::init< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator const & >(""));
    class_df2e34853f5b5b539c2743d1b5630a5c.def("get_criterion", method_pointer_f01eab64510a553a8f74355fff9f7895, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_df2e34853f5b5b539c2743d1b5630a5c.def("set_criterion", method_pointer_0b00c2f122ca5d2d87131c8363fe5b89, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::Type >();
    }

}