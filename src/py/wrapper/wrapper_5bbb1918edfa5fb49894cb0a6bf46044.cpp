#include "_core.h"



namespace autowig
{
    class Wrap_5bbb1918edfa5fb49894cb0a6bf46044 : public ::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044 const volatile * get_pointer<autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044 const volatile >(autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044 const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5bbb1918edfa5fb49894cb0a6bf46044()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_e351a334895e5592bb25ac4bc81a5a9d)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_84d39c57b2755d6fac2d7258a600272a)(double const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_198b49d1d6b55d5497c4ccd1341688ce)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_08ce45b6646f51c2ab8fcdec1a7b3920)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_393d0ec811075e2b93831fd6d8cc63db)() const = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::*method_pointer_d60697ce86555d59bf5d869f782c010f)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044, autowig::Held< autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >, boost::noncopyable > class_5bbb1918edfa5fb49894cb0a6bf46044("_Optimization_5bbb1918edfa5fb49894cb0a6bf46044", "", boost::python::no_init);
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_mindiff", method_pointer_e351a334895e5592bb25ac4bc81a5a9d, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_mindiff", method_pointer_84d39c57b2755d6fac2d7258a600272a, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_minits", method_pointer_198b49d1d6b55d5497c4ccd1341688ce, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_minits", method_pointer_08ce45b6646f51c2ab8fcdec1a7b3920, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("get_maxits", method_pointer_393d0ec811075e2b93831fd6d8cc63db, "");
    class_5bbb1918edfa5fb49894cb0a6bf46044.def("set_maxits", method_pointer_d60697ce86555d59bf5d869f782c010f, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5bbb1918edfa5fb49894cb0a6bf46044 >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation::Estimator >::Type >();
    }

}