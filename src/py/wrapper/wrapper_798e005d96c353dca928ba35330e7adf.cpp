#include "_core.h"



namespace autowig
{
    class Wrap_798e005d96c353dca928ba35330e7adf : public ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
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
    template <> autowig::Wrap_798e005d96c353dca928ba35330e7adf const volatile * get_pointer<autowig::Wrap_798e005d96c353dca928ba35330e7adf const volatile >(autowig::Wrap_798e005d96c353dca928ba35330e7adf const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_798e005d96c353dca928ba35330e7adf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_798e005d96c353dca928ba35330e7adf, autowig::Held< autowig::Wrap_798e005d96c353dca928ba35330e7adf >::Type, boost::python::bases< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >, boost::noncopyable > class_798e005d96c353dca928ba35330e7adf("_PolymorphicCopy_798e005d96c353dca928ba35330e7adf", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_798e005d96c353dca928ba35330e7adf >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperator, struct ::statiskit::SplittingMixtureOperator, class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > > >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >::Type >();
    }

}