#include "_core.h"



namespace autowig
{
    class Wrap_e04b2c4523535837960c26d5b28953fc : public ::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > >  operator()(::statiskit::MultivariateDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_e04b2c4523535837960c26d5b28953fc const volatile * get_pointer<autowig::Wrap_e04b2c4523535837960c26d5b28953fc const volatile >(autowig::Wrap_e04b2c4523535837960c26d5b28953fc const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e04b2c4523535837960c26d5b28953fc()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_5b9bcc4fe66253cca80b0d443d707303)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_cac31c79d98b50c99b89ebd949f2b5b2)(double const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_365e06823d7b5fe881b3aa677480ee84)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_4d6899b64ba65c2797f81ebdd7533797)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_637003e6b1d05c07a8854d0dedcd3999)() const = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::*method_pointer_449444cfaac857d681270a697240179f)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_e04b2c4523535837960c26d5b28953fc, autowig::Held< autowig::Wrap_e04b2c4523535837960c26d5b28953fc >::Type, boost::python::bases< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_e04b2c4523535837960c26d5b28953fc("_Optimization_e04b2c4523535837960c26d5b28953fc", "", boost::python::no_init);
    class_e04b2c4523535837960c26d5b28953fc.def("get_mindiff", method_pointer_5b9bcc4fe66253cca80b0d443d707303, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_mindiff", method_pointer_cac31c79d98b50c99b89ebd949f2b5b2, "");
    class_e04b2c4523535837960c26d5b28953fc.def("get_minits", method_pointer_365e06823d7b5fe881b3aa677480ee84, "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_minits", method_pointer_4d6899b64ba65c2797f81ebdd7533797, "");
    class_e04b2c4523535837960c26d5b28953fc.def("get_maxits", method_pointer_637003e6b1d05c07a8854d0dedcd3999, "");
    class_e04b2c4523535837960c26d5b28953fc.def("set_maxits", method_pointer_449444cfaac857d681270a697240179f, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_e04b2c4523535837960c26d5b28953fc >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation::Estimator >::Type >();
    }

}