#include "_core.h"



namespace autowig
{
    class Wrap_176ad7b821255b478820451a70624393 : public ::statiskit::MultivariateLocationEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateLocationEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  operator()(struct ::statiskit::MultivariateData const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > ::element_type* result = this->get_override("operator()")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_176ad7b821255b478820451a70624393 const volatile * get_pointer<autowig::Wrap_176ad7b821255b478820451a70624393 const volatile >(autowig::Wrap_176ad7b821255b478820451a70624393 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateLocationEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateLocationEstimation::Estimator const volatile >(struct ::statiskit::MultivariateLocationEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_176ad7b821255b478820451a70624393()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_5517439c40d6505682aa2e58ed6cea33 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_location_estimation");
    boost::python::object module_5517439c40d6505682aa2e58ed6cea33(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_5517439c40d6505682aa2e58ed6cea33.c_str()))));
    boost::python::scope().attr("_multivariate_location_estimation") = module_5517439c40d6505682aa2e58ed6cea33;
    boost::python::scope scope_5517439c40d6505682aa2e58ed6cea33 = module_5517439c40d6505682aa2e58ed6cea33;
    class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation > >  (::statiskit::MultivariateLocationEstimation::Estimator::*method_pointer_e9ba7deeca0056cb9754cfd757b7c670)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MultivariateLocationEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateLocationEstimation::Estimator > >  (::statiskit::MultivariateLocationEstimation::Estimator::*method_pointer_8c923ab987815d75950c21bd5ebe0e9a)() const = &::statiskit::MultivariateLocationEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_176ad7b821255b478820451a70624393, autowig::Held< autowig::Wrap_176ad7b821255b478820451a70624393 >::Type, boost::noncopyable > class_176ad7b821255b478820451a70624393("Estimator", "", boost::python::no_init);
    class_176ad7b821255b478820451a70624393.def("__call__", boost::python::pure_virtual(method_pointer_e9ba7deeca0056cb9754cfd757b7c670), "");
    class_176ad7b821255b478820451a70624393.def("copy", boost::python::pure_virtual(method_pointer_8c923ab987815d75950c21bd5ebe0e9a), "");
    if(autowig::Held< struct ::statiskit::MultivariateLocationEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_176ad7b821255b478820451a70624393 >::Type, autowig::Held< struct ::statiskit::MultivariateLocationEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateLocationEstimation::Estimator >::Type >();
    }    

}