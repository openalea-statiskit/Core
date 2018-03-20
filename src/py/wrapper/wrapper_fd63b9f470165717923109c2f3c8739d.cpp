#include "_core.h"



namespace autowig
{
    class Wrap_fd63b9f470165717923109c2f3c8739d : public ::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >, public boost::python::wrapper< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >
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
    template <> autowig::Wrap_fd63b9f470165717923109c2f3c8739d const volatile * get_pointer<autowig::Wrap_fd63b9f470165717923109c2f3c8739d const volatile >(autowig::Wrap_fd63b9f470165717923109c2f3c8739d const volatile *c) { return c; }
    template <> class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile * get_pointer<class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile >(class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fd63b9f470165717923109c2f3c8739d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_f1f6b8777ce457fb87fe24c4f6005328)() const = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_mindiff;
    void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_e8ce1527b17a5cd6a0feda960df64087)(double const &) = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_mindiff;
    unsigned int  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_bc756bc223d25490810778785eb77d6c)() const = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_minits;
    void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_2375ea1de3d75d1c825b80098ef8f1ca)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_minits;
    unsigned int  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_e2a41672cda65435a42be527972a466f)() const = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::get_maxits;
    void  (::statiskit::Optimization< ::statiskit::SingularDistributionEstimation::Estimator >::*method_pointer_ff652d9240a75b4eba7583ba15a93028)(unsigned int const &) = &::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator >::set_maxits;
    boost::python::class_< autowig::Wrap_fd63b9f470165717923109c2f3c8739d, autowig::Held< autowig::Wrap_fd63b9f470165717923109c2f3c8739d >::Type, boost::python::bases< struct ::statiskit::SingularDistributionEstimation::Estimator >, boost::noncopyable > class_fd63b9f470165717923109c2f3c8739d("_Optimization_fd63b9f470165717923109c2f3c8739d", "", boost::python::no_init);
    class_fd63b9f470165717923109c2f3c8739d.def("get_mindiff", method_pointer_f1f6b8777ce457fb87fe24c4f6005328, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_mindiff", method_pointer_e8ce1527b17a5cd6a0feda960df64087, "");
    class_fd63b9f470165717923109c2f3c8739d.def("get_minits", method_pointer_bc756bc223d25490810778785eb77d6c, "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_minits", method_pointer_2375ea1de3d75d1c825b80098ef8f1ca, "");
    class_fd63b9f470165717923109c2f3c8739d.def("get_maxits", method_pointer_e2a41672cda65435a42be527972a466f, "");
    class_fd63b9f470165717923109c2f3c8739d.def("set_maxits", method_pointer_ff652d9240a75b4eba7583ba15a93028, "");

    if(autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_fd63b9f470165717923109c2f3c8739d >::Type, autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::Optimization< struct ::statiskit::SingularDistributionEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation::Estimator >::Type >();
    }

}