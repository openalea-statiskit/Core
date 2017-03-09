#include "_core.h"



namespace autowig
{
    class Wrap_d795e2008d505a07a0b1806c150970f3 : public ::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >, public boost::python::wrapper< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_d795e2008d505a07a0b1806c150970f3 const volatile * get_pointer<autowig::Wrap_d795e2008d505a07a0b1806c150970f3 const volatile >(autowig::Wrap_d795e2008d505a07a0b1806c150970f3 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d795e2008d505a07a0b1806c150970f3()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_7bfb719e6db655fb96a3367e04517ebb)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_sample_space;
    ::std::size_t  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_e1cae5fb57ba57f49fcaee1f8d436c02)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_variables;
    unsigned int  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_1cbdec6cbdcd5370816774be4afe1acd)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_nb_parameters;
    double  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_1e83894dd86f5229aa0e332a3aa0086b)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::probability;
    struct ::statiskit::ContinuousUnivariateDistribution * (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_f87e0a8b468559d3bb9054c375e1416c)(::std::size_t const &) const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::get_marginal;
    void  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_8eb661b3b4e258598c4fcc057f5d9802)(::std::size_t const &, struct ::statiskit::ContinuousUnivariateDistribution const &) = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::set_marginal;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::IndependentMultivariateDistribution< ::statiskit::ContinuousMultivariateDistribution >::*method_pointer_14a2b9f4f53f557d9b88b7797d598c16)() const = &::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >::simulate;
    boost::python::class_< autowig::Wrap_d795e2008d505a07a0b1806c150970f3, autowig::Held< autowig::Wrap_d795e2008d505a07a0b1806c150970f3 >::Type, boost::python::bases< struct ::statiskit::ContinuousMultivariateDistribution >, boost::noncopyable > class_d795e2008d505a07a0b1806c150970f3("_IndependentMultivariateDistribution_d795e2008d505a07a0b1806c150970f3", "", boost::python::no_init);
    class_d795e2008d505a07a0b1806c150970f3.def("get_sample_space", method_pointer_7bfb719e6db655fb96a3367e04517ebb, "");
    class_d795e2008d505a07a0b1806c150970f3.def("get_nb_variables", method_pointer_e1cae5fb57ba57f49fcaee1f8d436c02, "");
    class_d795e2008d505a07a0b1806c150970f3.def("get_nb_parameters", method_pointer_1cbdec6cbdcd5370816774be4afe1acd, "");
    class_d795e2008d505a07a0b1806c150970f3.def("probability", method_pointer_1e83894dd86f5229aa0e332a3aa0086b, "");
    class_d795e2008d505a07a0b1806c150970f3.def("get_marginal", method_pointer_f87e0a8b468559d3bb9054c375e1416c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_d795e2008d505a07a0b1806c150970f3.def("set_marginal", method_pointer_8eb661b3b4e258598c4fcc057f5d9802, "");
    class_d795e2008d505a07a0b1806c150970f3.def("simulate", method_pointer_14a2b9f4f53f557d9b88b7797d598c16, "");

    if(autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistribution >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution >, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type, class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_d795e2008d505a07a0b1806c150970f3 >::Type, autowig::Held< class ::statiskit::IndependentMultivariateDistribution< struct ::statiskit::ContinuousMultivariateDistribution > >::Type >();
    }

}