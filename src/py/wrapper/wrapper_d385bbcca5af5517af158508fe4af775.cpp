#include "_core.h"



namespace autowig
{
    class Wrap_d385bbcca5af5517af158508fe4af775 : public ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) 
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d385bbcca5af5517af158508fe4af775 const volatile * get_pointer<autowig::Wrap_d385bbcca5af5517af158508fe4af775 const volatile >(autowig::Wrap_d385bbcca5af5517af158508fe4af775 const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d385bbcca5af5517af158508fe4af775()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_d385bbcca5af5517af158508fe4af775, autowig::Held< autowig::Wrap_d385bbcca5af5517af158508fe4af775 >::Type, boost::python::bases< struct ::statiskit::SplittingOperator >, boost::noncopyable > class_d385bbcca5af5517af158508fe4af775("_PolymorphicCopy_d385bbcca5af5517af158508fe4af775", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d385bbcca5af5517af158508fe4af775 >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, class ::statiskit::MultinomialSplittingOperator, struct ::statiskit::SplittingOperator > >::Type, autowig::Held< struct ::statiskit::SplittingOperator >::Type >();
    }

}