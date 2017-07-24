#include "_core.h"



namespace autowig
{
    class Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 : public ::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > (result);
            }
                        
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
    template <> autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 const volatile * get_pointer<autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 const volatile >(autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_8dfc3c710f0659b1ad1514c2ab1fae26()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_5b1722e9fe685acabb550141779a08f8)() const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::get_nb_states;
    struct ::statiskit::SplittingOperator const * (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_93d2e98fbe9a566596122e22d8486985)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_58d61b05f80a565b961c01c0757fbbe7)(::statiskit::Index const &, struct ::statiskit::SplittingOperator const &) = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_de6f162f1be5553abf8245f1e45ecf75)() const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_70b7b2528e9c56489e8ee7b0b57a53cb)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::set_pi;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_769a58e4df4352d49d0b6aee53b50794)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::posterior;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_5335cd70ed235b738bd806ba4c9a6e2b)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::assignment;
    class ::std::vector< unsigned long int, class ::std::allocator< unsigned long int > >  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_110307ec4e8354aeab7f77498d9ace89)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::assignment;
    double  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_31ed156cf63c5c598db4ca67c021b608)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::uncertainty;
    double  (::statiskit::MixtureDistribution< ::statiskit::SplittingOperator >::*method_pointer_92bb4ea556a95e42bff35de517dc8212)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator >::uncertainty;
    boost::python::class_< autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26, autowig::Held< autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 >::Type, boost::python::bases< struct ::statiskit::SplittingOperator >, boost::noncopyable > class_8dfc3c710f0659b1ad1514c2ab1fae26("_MixtureDistribution_8dfc3c710f0659b1ad1514c2ab1fae26", "", boost::python::no_init);
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("get_nb_states", method_pointer_5b1722e9fe685acabb550141779a08f8, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("get_observation", method_pointer_93d2e98fbe9a566596122e22d8486985, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("set_observation", method_pointer_58d61b05f80a565b961c01c0757fbbe7, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("get_pi", method_pointer_de6f162f1be5553abf8245f1e45ecf75, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("set_pi", method_pointer_70b7b2528e9c56489e8ee7b0b57a53cb, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("posterior", method_pointer_769a58e4df4352d49d0b6aee53b50794, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("assignment", method_pointer_5335cd70ed235b738bd806ba4c9a6e2b, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("assignment", method_pointer_110307ec4e8354aeab7f77498d9ace89, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("uncertainty", method_pointer_31ed156cf63c5c598db4ca67c021b608, "");
    class_8dfc3c710f0659b1ad1514c2ab1fae26.def("uncertainty", method_pointer_92bb4ea556a95e42bff35de517dc8212, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_8dfc3c710f0659b1ad1514c2ab1fae26 >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::SplittingOperator > >::Type, autowig::Held< struct ::statiskit::SplittingOperator >::Type >();
    }

}