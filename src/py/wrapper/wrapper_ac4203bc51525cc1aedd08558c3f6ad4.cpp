#include "_core.h"



namespace autowig
{
    class Wrap_ac4203bc51525cc1aedd08558c3f6ad4 : public ::statiskit::Selection< ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator, public boost::python::wrapper< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > (result);
            }
                        

        protected:
            
            virtual double  scoring(struct ::statiskit::SplittingOperator const * param_0, struct ::statiskit::MultivariateData const & param_1) const
            { return this->get_override("scoring")(param_0, param_1); }
                        

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4 const volatile * get_pointer<autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4 const volatile >(autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4 const volatile *c) { return c; }
    template <> class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile * get_pointer<class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile >(class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ac4203bc51525cc1aedd08558c3f6ad4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_bfd0af0710215b30a7afa5127166b334 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".__selection_bfd0af0710215b30a7afa5127166b334");
    boost::python::object module_bfd0af0710215b30a7afa5127166b334(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_bfd0af0710215b30a7afa5127166b334.c_str()))));
    boost::python::scope().attr("__selection_bfd0af0710215b30a7afa5127166b334") = module_bfd0af0710215b30a7afa5127166b334;
    boost::python::scope scope_bfd0af0710215b30a7afa5127166b334 = module_bfd0af0710215b30a7afa5127166b334;
    ::statiskit::Index  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_e4303ddaa3045e1e9dd909078fb75801)() const = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::size;
    struct ::statiskit::SplittingOperatorEstimation::Estimator * (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_e329f1add2f5537d81ea8d30cc19abe4)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::get_estimator;
    void  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_aeebc8654cda5287ac4605ace8ea1ce0)(::statiskit::Index const &, struct ::statiskit::SplittingOperatorEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::set_estimator;
    void  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_45a2e47ea1ed5d4ab49ec3ad5a2b6386)(struct ::statiskit::SplittingOperatorEstimation::Estimator const &) = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::add_estimator;
    void  (::statiskit::Selection< ::statiskit::SplittingOperator, ::statiskit::SplittingOperatorEstimation >::Estimator::*method_pointer_e9e8fc7130a05da09e0e34751265d2ee)(::statiskit::Index const &) = &::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator::remove_estimator;
    boost::python::class_< autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4, autowig::Held< autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4 >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation::Estimator >, boost::noncopyable > class_ac4203bc51525cc1aedd08558c3f6ad4("Estimator", "", boost::python::no_init);
    class_ac4203bc51525cc1aedd08558c3f6ad4.def("__len__", method_pointer_e4303ddaa3045e1e9dd909078fb75801, "");
    class_ac4203bc51525cc1aedd08558c3f6ad4.def("get_estimator", method_pointer_e329f1add2f5537d81ea8d30cc19abe4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ac4203bc51525cc1aedd08558c3f6ad4.def("set_estimator", method_pointer_aeebc8654cda5287ac4605ace8ea1ce0, "");
    class_ac4203bc51525cc1aedd08558c3f6ad4.def("add_estimator", method_pointer_45a2e47ea1ed5d4ab49ec3ad5a2b6386, "");
    class_ac4203bc51525cc1aedd08558c3f6ad4.def("remove_estimator", method_pointer_e9e8fc7130a05da09e0e34751265d2ee, "");

    if(autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ac4203bc51525cc1aedd08558c3f6ad4 >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
    }

}