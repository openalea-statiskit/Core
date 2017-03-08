#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05 const volatile * get_pointer<autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05 const volatile >(autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05 const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_c1af1f263c37571f8e1257a72f39fd05 : public ::statiskit::CategoricalMultivariateDistribution, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
            virtual ::std::size_t  get_nb_variables() const
            { return this->get_override("get_nb_variables")(); }
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  get_sample_space() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > ::element_type* result = this->get_override("get_sample_space")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > (result);
            }

        protected:
            

        private:
            

    };

}


void wrapper_c1af1f263c37571f8e1257a72f39fd05()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05, autowig::Held< autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistribution >, boost::noncopyable > class_c1af1f263c37571f8e1257a72f39fd05("CategoricalMultivariateDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalMultivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type, struct ::statiskit::CategoricalMultivariateDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c1af1f263c37571f8e1257a72f39fd05 >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistribution >::Type >();
    }

}