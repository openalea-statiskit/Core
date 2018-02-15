#include "_core.h"



namespace autowig
{
    class Wrap_484cc9c9d3f856c7aa18f642966f14a9 : public ::statiskit::UnivariateDispersionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::UnivariateDispersionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  operator()(struct ::statiskit::UnivariateData const & param_0, double const & param_1) const
            {
                 ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9 const volatile * get_pointer<autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9 const volatile >(autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9 const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateDispersionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::UnivariateDispersionEstimation::Estimator const volatile >(struct ::statiskit::UnivariateDispersionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_484cc9c9d3f856c7aa18f642966f14a9()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_87b566a692cb54b18914b54eb295ef9a = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._univariate_dispersion_estimation");
    boost::python::object module_87b566a692cb54b18914b54eb295ef9a(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_87b566a692cb54b18914b54eb295ef9a.c_str()))));
    boost::python::scope().attr("_univariate_dispersion_estimation") = module_87b566a692cb54b18914b54eb295ef9a;
    boost::python::scope scope_87b566a692cb54b18914b54eb295ef9a = module_87b566a692cb54b18914b54eb295ef9a;
    class ::std::unique_ptr< class ::statiskit::UnivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::UnivariateDispersionEstimation > >  (::statiskit::UnivariateDispersionEstimation::Estimator::*method_pointer_4e882ea0348e56a2816e3f3d20b8b14f)(struct ::statiskit::UnivariateData const &, double const &) const = &::statiskit::UnivariateDispersionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::UnivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::UnivariateDispersionEstimation::Estimator > >  (::statiskit::UnivariateDispersionEstimation::Estimator::*method_pointer_8f20422aab135f9fb601488df3d82cfa)() const = &::statiskit::UnivariateDispersionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9, autowig::Held< autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9 >::Type, boost::noncopyable > class_484cc9c9d3f856c7aa18f642966f14a9("Estimator", "", boost::python::no_init);
    class_484cc9c9d3f856c7aa18f642966f14a9.def("__call__", boost::python::pure_virtual(method_pointer_4e882ea0348e56a2816e3f3d20b8b14f), "");
    class_484cc9c9d3f856c7aa18f642966f14a9.def("copy", boost::python::pure_virtual(method_pointer_8f20422aab135f9fb601488df3d82cfa), "");
    if(autowig::Held< struct ::statiskit::UnivariateDispersionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_484cc9c9d3f856c7aa18f642966f14a9 >::Type, autowig::Held< struct ::statiskit::UnivariateDispersionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateDispersionEstimation::Estimator >::Type >();
    }    

}