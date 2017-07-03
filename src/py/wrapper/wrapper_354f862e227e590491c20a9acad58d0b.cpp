#include "_core.h"



namespace autowig
{
    class Wrap_354f862e227e590491c20a9acad58d0b : public ::statiskit::DiscreteUnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateConditionalDistribution >
    {
        public:
            
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_explanatory_space() const
            { return this->get_override("get_explanatory_space")(); }
                        
            virtual struct ::statiskit::UnivariateDistribution const * operator()(struct ::statiskit::MultivariateEvent const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_354f862e227e590491c20a9acad58d0b const volatile * get_pointer<autowig::Wrap_354f862e227e590491c20a9acad58d0b const volatile >(autowig::Wrap_354f862e227e590491c20a9acad58d0b const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteUnivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::DiscreteUnivariateConditionalDistribution const volatile >(struct ::statiskit::DiscreteUnivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_354f862e227e590491c20a9acad58d0b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_354f862e227e590491c20a9acad58d0b, autowig::Held< autowig::Wrap_354f862e227e590491c20a9acad58d0b >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistribution >, boost::noncopyable > class_354f862e227e590491c20a9acad58d0b("DiscreteUnivariateConditionalDistribution", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_354f862e227e590491c20a9acad58d0b >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateConditionalDistribution >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type >();
    }

}