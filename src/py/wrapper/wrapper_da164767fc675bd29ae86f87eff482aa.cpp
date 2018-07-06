#include "_core.h"



namespace autowig
{
    class Wrap_da164767fc675bd29ae86f87eff482aa : public ::statiskit::DiscreteUnivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::UnivariateConditionalDistributionEstimation > > (result);
            }
                        
            virtual ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_da164767fc675bd29ae86f87eff482aa const volatile * get_pointer<autowig::Wrap_da164767fc675bd29ae86f87eff482aa const volatile >(autowig::Wrap_da164767fc675bd29ae86f87eff482aa const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_da164767fc675bd29ae86f87eff482aa()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_da164767fc675bd29ae86f87eff482aa, autowig::Held< autowig::Wrap_da164767fc675bd29ae86f87eff482aa >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation >, boost::noncopyable > class_da164767fc675bd29ae86f87eff482aa("DiscreteUnivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_da164767fc675bd29ae86f87eff482aa >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type >();
    }

}