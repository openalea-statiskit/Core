#include "_core.h"



namespace autowig
{
    class Wrap_5eab1e1ff40e54ffa634680dff2f958b : public ::statiskit::MeanVectorEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MeanVectorEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation > >  operator()(struct ::statiskit::MultivariateData const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation > > ::element_type* result = this->get_override("operator()")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b const volatile * get_pointer<autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b const volatile >(autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b const volatile *c) { return c; }
    template <> struct ::statiskit::MeanVectorEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MeanVectorEstimation::Estimator const volatile >(struct ::statiskit::MeanVectorEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5eab1e1ff40e54ffa634680dff2f958b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_853f9a4da37d570fb720964c982ff0c7 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._mean_vector_estimation");
    boost::python::object module_853f9a4da37d570fb720964c982ff0c7(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_853f9a4da37d570fb720964c982ff0c7.c_str()))));
    boost::python::scope().attr("_mean_vector_estimation") = module_853f9a4da37d570fb720964c982ff0c7;
    boost::python::scope scope_853f9a4da37d570fb720964c982ff0c7 = module_853f9a4da37d570fb720964c982ff0c7;
    class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation > >  (::statiskit::MeanVectorEstimation::Estimator::*method_pointer_84efa5cb28595f08ab610f5692d0c71f)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MeanVectorEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MeanVectorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MeanVectorEstimation::Estimator > >  (::statiskit::MeanVectorEstimation::Estimator::*method_pointer_4f691f2af75e5f73bc6901e6a00c2198)() const = &::statiskit::MeanVectorEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b, autowig::Held< autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b >::Type, boost::noncopyable > class_5eab1e1ff40e54ffa634680dff2f958b("Estimator", "", boost::python::no_init);
    class_5eab1e1ff40e54ffa634680dff2f958b.def("__call__", boost::python::pure_virtual(method_pointer_84efa5cb28595f08ab610f5692d0c71f), "");
    class_5eab1e1ff40e54ffa634680dff2f958b.def("copy", boost::python::pure_virtual(method_pointer_4f691f2af75e5f73bc6901e6a00c2198), "");
    if(autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b >::Type, autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MeanVectorEstimation::Estimator, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type, struct ::statiskit::MeanVectorEstimation::Estimator > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5eab1e1ff40e54ffa634680dff2f958b >::Type, autowig::Held< struct ::statiskit::MeanVectorEstimation::Estimator >::Type >();
    }    

}