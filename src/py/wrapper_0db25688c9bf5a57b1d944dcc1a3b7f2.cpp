#include "_core.h"



namespace autowig
{
    class Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 : public ::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
            virtual int  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
            virtual double  cdf(int const & param_0) const
            { return this->get_override("cdf")(param_0); }
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 const volatile * get_pointer<autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 const volatile >(autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_0db25688c9bf5a57b1d944dcc1a3b7f2()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_11ac2b9e2041511595a9554076d9bb30)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_nb_parameters;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_0c7621818b33548e866bb39bbb4e2157)(int const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::ldf;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_e1babe464b835687aea3395298d710d6)(int const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::pdf;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_c1e704385f9e54c89913f36b04d0775a)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::simulate;
    class ::std::set< int, struct ::std::less< int >, class ::std::allocator< int > > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_ff0fdbf1911859b386bd2e6729ed5dab)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_values;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_8242d0fe52705f359e32b878263759b8)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::get_pi;
    void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::DiscreteUnivariateDistribution >::*method_pointer_3d5a80eee94a5718ad99cdb71df3839c)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >::set_pi;
    boost::python::class_< autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2, autowig::Held< autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 >::Type, boost::python::bases< struct ::statiskit::DiscreteUnivariateDistribution >, boost::noncopyable > class_0db25688c9bf5a57b1d944dcc1a3b7f2("_UnivariateFrequencyDistribution_0db25688c9bf5a57b1d944dcc1a3b7f2", "", boost::python::no_init);
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("get_nb_parameters", method_pointer_11ac2b9e2041511595a9554076d9bb30, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("ldf", method_pointer_0c7621818b33548e866bb39bbb4e2157, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("pdf", method_pointer_e1babe464b835687aea3395298d710d6, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("simulate", method_pointer_c1e704385f9e54c89913f36b04d0775a, "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("get_values", method_pointer_ff0fdbf1911859b386bd2e6729ed5dab, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("get_pi", method_pointer_8242d0fe52705f359e32b878263759b8, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_0db25688c9bf5a57b1d944dcc1a3b7f2.def("set_pi", method_pointer_3d5a80eee94a5718ad99cdb71df3839c, "");

    if(autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type, class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0db25688c9bf5a57b1d944dcc1a3b7f2 >::Type, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::DiscreteUnivariateDistribution > >::Type >();
    }

}