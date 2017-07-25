#include "_core.h"



namespace autowig
{
    class Wrap_c517267c1086527fa919eb73b9905edc : public ::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >  operator()(::statiskit::SplittingOperatorEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c517267c1086527fa919eb73b9905edc const volatile * get_pointer<autowig::Wrap_c517267c1086527fa919eb73b9905edc const volatile >(autowig::Wrap_c517267c1086527fa919eb73b9905edc const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c517267c1086527fa919eb73b9905edc()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_fa4969bf87bd534882e0f4544cbef405)() const = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_e2496d7185815dc9ba81647940b4bbc2)(double const &) = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_09ef817c183e56f6a26800b0d7d94405)() const = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_a3b511289f2450df87316fdfa64e5924)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_bf485f46d7fa503aa1ab40359d51349e)() const = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::SplittingOperatorEstimation::Estimator >::*method_pointer_4139953cc95d5352b3640031631369f5)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_c517267c1086527fa919eb73b9905edc, autowig::Held< autowig::Wrap_c517267c1086527fa919eb73b9905edc >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation::Estimator >, boost::noncopyable > class_c517267c1086527fa919eb73b9905edc("_Optimization_c517267c1086527fa919eb73b9905edc", "", boost::python::no_init);
    class_c517267c1086527fa919eb73b9905edc.def("get_mindiff", method_pointer_fa4969bf87bd534882e0f4544cbef405, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_c517267c1086527fa919eb73b9905edc.def("set_mindiff", method_pointer_e2496d7185815dc9ba81647940b4bbc2, "");
    class_c517267c1086527fa919eb73b9905edc.def("get_minits", method_pointer_09ef817c183e56f6a26800b0d7d94405, "");
    class_c517267c1086527fa919eb73b9905edc.def("set_minits", method_pointer_a3b511289f2450df87316fdfa64e5924, "");
    class_c517267c1086527fa919eb73b9905edc.def("get_maxits", method_pointer_bf485f46d7fa503aa1ab40359d51349e, "");
    class_c517267c1086527fa919eb73b9905edc.def("set_maxits", method_pointer_4139953cc95d5352b3640031631369f5, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c517267c1086527fa919eb73b9905edc >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
    }

}