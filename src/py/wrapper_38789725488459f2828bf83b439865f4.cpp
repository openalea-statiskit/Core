#include "_core.h"



namespace autowig
{
    class Wrap_38789725488459f2828bf83b439865f4 : public ::statiskit::MeanEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MeanEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > > ::element_type* result = this->get_override("operator()")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_38789725488459f2828bf83b439865f4 const volatile * get_pointer<autowig::Wrap_38789725488459f2828bf83b439865f4 const volatile >(autowig::Wrap_38789725488459f2828bf83b439865f4 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_38789725488459f2828bf83b439865f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_c9a2f82a42795e79b282609850c28571 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mean_estimation");
    boost::python::object module_c9a2f82a42795e79b282609850c28571(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_c9a2f82a42795e79b282609850c28571.c_str()))));
    boost::python::scope().attr("_mean_estimation") = module_c9a2f82a42795e79b282609850c28571;
    boost::python::scope scope_c9a2f82a42795e79b282609850c28571 = module_c9a2f82a42795e79b282609850c28571;
    class ::std::unique_ptr< struct ::statiskit::MeanEstimation, struct ::std::default_delete< struct ::statiskit::MeanEstimation > >  (::statiskit::MeanEstimation::Estimator::*method_pointer_e59574f65d6754c2944cd04867ad019e)(struct ::statiskit::UnivariateData const &) const = &::statiskit::MeanEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MeanEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanEstimation::Estimator > >  (::statiskit::MeanEstimation::Estimator::*method_pointer_3d6a258ff5d45ca6a2bb4726cf25c193)() const = &::statiskit::MeanEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_38789725488459f2828bf83b439865f4, autowig::Held< autowig::Wrap_38789725488459f2828bf83b439865f4 >::Type, boost::noncopyable > class_38789725488459f2828bf83b439865f4("Estimator", "", boost::python::no_init);
    class_38789725488459f2828bf83b439865f4.def("__call__", boost::python::pure_virtual(method_pointer_e59574f65d6754c2944cd04867ad019e), "");
    class_38789725488459f2828bf83b439865f4.def("copy", boost::python::pure_virtual(method_pointer_3d6a258ff5d45ca6a2bb4726cf25c193), "");
    if(autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MeanEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::Type, struct ::statiskit::MeanEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_38789725488459f2828bf83b439865f4 >::Type, autowig::Held< struct ::statiskit::MeanEstimation::Estimator >::Type >();
    }    

}