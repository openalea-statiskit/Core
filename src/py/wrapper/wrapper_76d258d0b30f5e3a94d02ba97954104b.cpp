#include "_core.h"



namespace autowig
{
    class Wrap_76d258d0b30f5e3a94d02ba97954104b : public ::statiskit::SingularDistribution, public boost::python::wrapper< struct ::statiskit::SingularDistribution >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
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
    template <> autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b const volatile * get_pointer<autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b const volatile >(autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b const volatile *c) { return c; }
    template <> struct ::statiskit::SingularDistribution const volatile * get_pointer<struct ::statiskit::SingularDistribution const volatile >(struct ::statiskit::SingularDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_76d258d0b30f5e3a94d02ba97954104b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::SingularDistribution::*method_pointer_0d6cc8e9b1fb50da9e07aa24ca7b9901)() const = &::statiskit::SingularDistribution::get_nb_components;
    unsigned int  (::statiskit::SingularDistribution::*method_pointer_2c1d7ed64e3e5d1aa53e91bf74bfffd9)() const = &::statiskit::SingularDistribution::get_nb_parameters;
    double  (::statiskit::SingularDistribution::*method_pointer_acdea368f48f572bb000ce0a3e887539)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::SingularDistribution::probability;
    double  (::statiskit::SingularDistribution::*method_pointer_9d50c70c78205c91abef868dba68faaf)(struct ::statiskit::MultivariateData const &) const = &::statiskit::SingularDistribution::loglikelihood;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::SingularDistribution::*method_pointer_48a21906343659d38a01df937deeb28c)(unsigned int ) const = &::statiskit::SingularDistribution::simulate;
    class ::std::unique_ptr< struct ::statiskit::SingularDistribution, struct ::std::default_delete< struct ::statiskit::SingularDistribution > >  (::statiskit::SingularDistribution::*method_pointer_807318768a675f8fa96d2eb54a36c4df)() const = &::statiskit::SingularDistribution::copy;
    boost::python::class_< autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b, autowig::Held< autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b >::Type, boost::noncopyable > class_76d258d0b30f5e3a94d02ba97954104b("SingularDistribution", "", boost::python::no_init);
    class_76d258d0b30f5e3a94d02ba97954104b.def("get_nb_components", boost::python::pure_virtual(method_pointer_0d6cc8e9b1fb50da9e07aa24ca7b9901), "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_2c1d7ed64e3e5d1aa53e91bf74bfffd9), "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("probability", boost::python::pure_virtual(method_pointer_acdea368f48f572bb000ce0a3e887539), "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("loglikelihood", method_pointer_9d50c70c78205c91abef868dba68faaf, "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("simulate", boost::python::pure_virtual(method_pointer_48a21906343659d38a01df937deeb28c), "");
    class_76d258d0b30f5e3a94d02ba97954104b.def("copy", boost::python::pure_virtual(method_pointer_807318768a675f8fa96d2eb54a36c4df), "");
    if(autowig::Held< struct ::statiskit::SingularDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_76d258d0b30f5e3a94d02ba97954104b >::Type, autowig::Held< struct ::statiskit::SingularDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SingularDistribution >::Type >();
    }    

}