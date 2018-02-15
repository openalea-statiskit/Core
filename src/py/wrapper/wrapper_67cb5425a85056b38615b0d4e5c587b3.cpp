#include "_core.h"



namespace autowig
{
    class Wrap_67cb5425a85056b38615b0d4e5c587b3 : public ::statiskit::SingularDistributionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::SingularDistributionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  operator()(::statiskit::SingularDistributionEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3 const volatile * get_pointer<autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3 const volatile >(autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3 const volatile *c) { return c; }
    template <> struct ::statiskit::SingularDistributionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::SingularDistributionEstimation::Estimator const volatile >(struct ::statiskit::SingularDistributionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_67cb5425a85056b38615b0d4e5c587b3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_3c4215c1e4465be3a5f234b657381458 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._singular_distribution_estimation");
    boost::python::object module_3c4215c1e4465be3a5f234b657381458(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_3c4215c1e4465be3a5f234b657381458.c_str()))));
    boost::python::scope().attr("_singular_distribution_estimation") = module_3c4215c1e4465be3a5f234b657381458;
    boost::python::scope scope_3c4215c1e4465be3a5f234b657381458 = module_3c4215c1e4465be3a5f234b657381458;
    class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >  (::statiskit::SingularDistributionEstimation::Estimator::*method_pointer_ef6596d10b575b13b141d8bcf05ac09a)(::statiskit::SingularDistributionEstimation::data_type const &, bool const &) const = &::statiskit::SingularDistributionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation::Estimator > >  (::statiskit::SingularDistributionEstimation::Estimator::*method_pointer_8b02691f7b535adda732068708b90596)() const = &::statiskit::SingularDistributionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3, autowig::Held< autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3 >::Type, boost::python::bases< class ::statiskit::Estimator >, boost::noncopyable > class_67cb5425a85056b38615b0d4e5c587b3("Estimator", "", boost::python::no_init);
    class_67cb5425a85056b38615b0d4e5c587b3.def("__call__", boost::python::pure_virtual(method_pointer_ef6596d10b575b13b141d8bcf05ac09a), "");
    class_67cb5425a85056b38615b0d4e5c587b3.def("copy", boost::python::pure_virtual(method_pointer_8b02691f7b535adda732068708b90596), "");

    if(autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_67cb5425a85056b38615b0d4e5c587b3 >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type, autowig::Held< class ::statiskit::Estimator >::Type >();
    }

}