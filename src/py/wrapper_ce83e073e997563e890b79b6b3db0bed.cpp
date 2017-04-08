#include "_core.h"



namespace autowig
{
    class Wrap_ce83e073e997563e890b79b6b3db0bed : public ::statiskit::VarianceEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::VarianceEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0, double const & param_1) const
            {
                 ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ce83e073e997563e890b79b6b3db0bed const volatile * get_pointer<autowig::Wrap_ce83e073e997563e890b79b6b3db0bed const volatile >(autowig::Wrap_ce83e073e997563e890b79b6b3db0bed const volatile *c) { return c; }
    template <> struct ::statiskit::VarianceEstimation::Estimator const volatile * get_pointer<struct ::statiskit::VarianceEstimation::Estimator const volatile >(struct ::statiskit::VarianceEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ce83e073e997563e890b79b6b3db0bed()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_99c254a34dca5e70bdf05b701c5b7360 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._variance_estimation");
    boost::python::object module_99c254a34dca5e70bdf05b701c5b7360(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_99c254a34dca5e70bdf05b701c5b7360.c_str()))));
    boost::python::scope().attr("_variance_estimation") = module_99c254a34dca5e70bdf05b701c5b7360;
    boost::python::scope scope_99c254a34dca5e70bdf05b701c5b7360 = module_99c254a34dca5e70bdf05b701c5b7360;
    class ::std::unique_ptr< class ::statiskit::VarianceEstimation, struct ::std::default_delete< class ::statiskit::VarianceEstimation > >  (::statiskit::VarianceEstimation::Estimator::*method_pointer_936ecc0343f558cd886f3f2ef4f8e143)(struct ::statiskit::UnivariateData const &, double const &) const = &::statiskit::VarianceEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::VarianceEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::VarianceEstimation::Estimator > >  (::statiskit::VarianceEstimation::Estimator::*method_pointer_1dbb2c59cd0e59c29b37c6ea1fe7c63c)() const = &::statiskit::VarianceEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_ce83e073e997563e890b79b6b3db0bed, autowig::Held< autowig::Wrap_ce83e073e997563e890b79b6b3db0bed >::Type, boost::noncopyable > class_ce83e073e997563e890b79b6b3db0bed("Estimator", "", boost::python::no_init);
    class_ce83e073e997563e890b79b6b3db0bed.def("__call__", boost::python::pure_virtual(method_pointer_936ecc0343f558cd886f3f2ef4f8e143), "");
    class_ce83e073e997563e890b79b6b3db0bed.def("copy", boost::python::pure_virtual(method_pointer_1dbb2c59cd0e59c29b37c6ea1fe7c63c), "");
    if(autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ce83e073e997563e890b79b6b3db0bed >::Type, autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::VarianceEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type, struct ::statiskit::VarianceEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ce83e073e997563e890b79b6b3db0bed >::Type, autowig::Held< struct ::statiskit::VarianceEstimation::Estimator >::Type >();
    }    

}