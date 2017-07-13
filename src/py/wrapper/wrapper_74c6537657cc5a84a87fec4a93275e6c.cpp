#include "_core.h"



namespace autowig
{
    class Wrap_74c6537657cc5a84a87fec4a93275e6c : public ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >
    {
        public:
            

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
    template <> autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c const volatile * get_pointer<autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c const volatile >(autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_74c6537657cc5a84a87fec4a93275e6c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c, autowig::Held< autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c >::Type, boost::python::bases< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >, boost::noncopyable > class_74c6537657cc5a84a87fec4a93275e6c("_PolymorphicCopy_74c6537657cc5a84a87fec4a93275e6c", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_74c6537657cc5a84a87fec4a93275e6c >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::CriterionEstimator, class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator > >::Type, autowig::Held< class ::statiskit::Selection< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingOperatorEstimation >::Estimator >::Type >();
    }

}