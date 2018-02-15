#include "_core.h"



namespace autowig
{
    class Wrap_d33d975672ef54f0b9b5e01d57fdf32b : public ::statiskit::UnivariateLocationEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::UnivariateLocationEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > ::element_type* result = this->get_override("operator()")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b const volatile * get_pointer<autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b const volatile >(autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateLocationEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateLocationEstimation::Estimator const volatile >(struct ::statiskit::UnivariateLocationEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d33d975672ef54f0b9b5e01d57fdf32b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c85ee717b61a5378b8f1bc88cdf6c91a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_location_estimation");
    boost::python::object module_c85ee717b61a5378b8f1bc88cdf6c91a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c85ee717b61a5378b8f1bc88cdf6c91a.c_str()))));
    boost::python::scope().attr("_univariate_location_estimation") = module_c85ee717b61a5378b8f1bc88cdf6c91a;
    boost::python::scope scope_c85ee717b61a5378b8f1bc88cdf6c91a = module_c85ee717b61a5378b8f1bc88cdf6c91a;
    class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation > >  (::statiskit::UnivariateLocationEstimation::Estimator::*method_pointer_e340294596125a0b839c5cee432407c7)(struct ::statiskit::UnivariateData const &) const = &::statiskit::UnivariateLocationEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateLocationEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateLocationEstimation::Estimator > >  (::statiskit::UnivariateLocationEstimation::Estimator::*method_pointer_8b9c71aa21be519083da91720a92b999)() const = &::statiskit::UnivariateLocationEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b, autowig::Held< autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b >::Type, boost::noncopyable > class_d33d975672ef54f0b9b5e01d57fdf32b("Estimator", "", boost::python::no_init);
    class_d33d975672ef54f0b9b5e01d57fdf32b.def("__call__", boost::python::pure_virtual(method_pointer_e340294596125a0b839c5cee432407c7), "");
    class_d33d975672ef54f0b9b5e01d57fdf32b.def("copy", boost::python::pure_virtual(method_pointer_8b9c71aa21be519083da91720a92b999), "");
    if(autowig::Held< struct ::statiskit::UnivariateLocationEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d33d975672ef54f0b9b5e01d57fdf32b >::Type, autowig::Held< struct ::statiskit::UnivariateLocationEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateLocationEstimation::Estimator >::Type >();
    }    

}