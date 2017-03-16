#include "_core.h"



namespace autowig
{
    class Wrap_6923aecde43059bd8a00d1bd199ffa8d : public ::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >, public boost::python::wrapper< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >
    {
        public:
            
            virtual double  get_variance() const
            { return this->get_override("get_variance")(); }
                        
            virtual double  get_mean() const
            { return this->get_override("get_mean")(); }
                        
            virtual double  quantile(double const & param_0) const
            { return this->get_override("quantile")(param_0); }
                        
            virtual double  cdf(double const & param_0) const
            { return this->get_override("cdf")(param_0); }
                        
            virtual double  pdf(double const & param_0) const
            { return this->get_override("pdf")(param_0); }
                        
            virtual double  ldf(double const & param_0) const
            { return this->get_override("ldf")(param_0); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateDistribution, struct ::std::default_delete< struct ::statiskit::UnivariateDistribution > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  simulate() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > ::element_type* result = this->get_override("simulate")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d const volatile * get_pointer<autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d const volatile >(autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d const volatile *c) { return c; }
    template <> class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile * get_pointer<class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile >(class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6923aecde43059bd8a00d1bd199ffa8d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_043c7276ccec54e889284f954f337b87)() const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_nb_parameters;
    ::statiskit::Index  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_2a504856d2c858cca8491fe9463d0520)() const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_nb_states;
    struct ::statiskit::ContinuousUnivariateDistribution const * (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_44658d1974bf53e8a85fea9cdfa12d12)(::statiskit::Index const &) const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_observation;
    void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_fe72b6c262c3548dacae3bf46cc847fe)(::statiskit::Index const &, struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_observation;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_c8a88e488e405d65a5050e025ffcdfed)() const = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::get_pi;
    void  (::statiskit::MixtureDistribution< ::statiskit::ContinuousUnivariateDistribution >::*method_pointer_1157cb20a6ba50f4ac122a4073e4d233)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >::set_pi;
    boost::python::class_< autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d, autowig::Held< autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d >::Type, boost::python::bases< struct ::statiskit::ContinuousUnivariateDistribution >, boost::noncopyable > class_6923aecde43059bd8a00d1bd199ffa8d("_MixtureDistribution_6923aecde43059bd8a00d1bd199ffa8d", "", boost::python::no_init);
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_nb_parameters", method_pointer_043c7276ccec54e889284f954f337b87, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_nb_states", method_pointer_2a504856d2c858cca8491fe9463d0520, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_observation", method_pointer_44658d1974bf53e8a85fea9cdfa12d12, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("set_observation", method_pointer_fe72b6c262c3548dacae3bf46cc847fe, "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("get_pi", method_pointer_c8a88e488e405d65a5050e025ffcdfed, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_6923aecde43059bd8a00d1bd199ffa8d.def("set_pi", method_pointer_1157cb20a6ba50f4ac122a4073e4d233, "");

    if(autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_6923aecde43059bd8a00d1bd199ffa8d >::Type, autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistribution >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > >::Type, class ::statiskit::MixtureDistribution< struct ::statiskit::ContinuousUnivariateDistribution > > > >();
    }

}