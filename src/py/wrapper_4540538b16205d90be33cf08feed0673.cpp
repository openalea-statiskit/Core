#include "_core.h"



namespace autowig
{
    class Wrap_4540538b16205d90be33cf08feed0673 : public ::statiskit::MultivariateDistribution, public boost::python::wrapper< struct ::statiskit::MultivariateDistribution >
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

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_4540538b16205d90be33cf08feed0673 const volatile * get_pointer<autowig::Wrap_4540538b16205d90be33cf08feed0673 const volatile >(autowig::Wrap_4540538b16205d90be33cf08feed0673 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4540538b16205d90be33cf08feed0673()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  (::statiskit::MultivariateDistribution::*method_pointer_f4dbd4e02f095d4d9217adfff6fad3e1)() const = &::statiskit::MultivariateDistribution::get_sample_space;
    ::std::size_t  (::statiskit::MultivariateDistribution::*method_pointer_b2ce3869dd2f5372a8ffa3386ff2e5be)() const = &::statiskit::MultivariateDistribution::get_nb_variables;
    unsigned int  (::statiskit::MultivariateDistribution::*method_pointer_d6b37eb7a2815c508032d7111fe27b25)() const = &::statiskit::MultivariateDistribution::get_nb_parameters;
    double  (::statiskit::MultivariateDistribution::*method_pointer_1b1aa04affe25769a45aa61f808a0a19)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::MultivariateDistribution::probability;
    double  (::statiskit::MultivariateDistribution::*method_pointer_6285df200fdc5073aaa5aab9a61032f1)(struct ::statiskit::MultivariateData const &) const = &::statiskit::MultivariateDistribution::loglikelihood;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::MultivariateDistribution::*method_pointer_4ea4050829d754ffad293bbb7a971a31)() const = &::statiskit::MultivariateDistribution::simulate;
    class ::std::unique_ptr< struct ::statiskit::MultivariateDistribution, struct ::std::default_delete< struct ::statiskit::MultivariateDistribution > >  (::statiskit::MultivariateDistribution::*method_pointer_bfcc78e34f6259b6a33f959f459c73aa)() const = &::statiskit::MultivariateDistribution::copy;
    boost::python::class_< autowig::Wrap_4540538b16205d90be33cf08feed0673, autowig::Held< autowig::Wrap_4540538b16205d90be33cf08feed0673 >::Type, boost::noncopyable > class_4540538b16205d90be33cf08feed0673("MultivariateDistribution", "", boost::python::no_init);
    class_4540538b16205d90be33cf08feed0673.def("get_sample_space", boost::python::pure_virtual(method_pointer_f4dbd4e02f095d4d9217adfff6fad3e1), "Get the sample space of the distribution.\n\n:Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::MultivariateSampleSpace, struct ::std::default\\_delete<\n    struct ::statiskit::MultivariateSampleSpace > >\n\n");
    class_4540538b16205d90be33cf08feed0673.def("get_nb_variables", boost::python::pure_virtual(method_pointer_b2ce3869dd2f5372a8ffa3386ff2e5be), "Get the number of variables of the distribution.\n\n:Return Type:\n    :cpp:any:`unsigned` long int\n\n");
    class_4540538b16205d90be33cf08feed0673.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_d6b37eb7a2815c508032d7111fe27b25), "Get the number of parameters of the distribution.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_4540538b16205d90be33cf08feed0673.def("probability", boost::python::pure_virtual(method_pointer_1b1aa04affe25769a45aa61f808a0a19), "");
    class_4540538b16205d90be33cf08feed0673.def("loglikelihood", method_pointer_6285df200fdc5073aaa5aab9a61032f1, "Compute the log-likelihood of an univariate dataset according to the\nconsidered multiivariate distribution.\n\n:Parameter:\n    `data` (:py:class:`.statiskit.MultivariateData`) - The considered multivariate dataset.\n\n:Return Type:\n    :cpp:any:`double`\n\n");
    class_4540538b16205d90be33cf08feed0673.def("simulate", boost::python::pure_virtual(method_pointer_4ea4050829d754ffad293bbb7a971a31), ":Return Type:\n    :cpp:any:`::std::unique_ptr<` struct\n    ::statiskit::MultivariateEvent, struct ::std::default\\_delete< struct\n    ::statiskit::MultivariateEvent > >\n\n");
    class_4540538b16205d90be33cf08feed0673.def("copy", boost::python::pure_virtual(method_pointer_bfcc78e34f6259b6a33f959f459c73aa), "");
    if(autowig::Held< struct ::statiskit::MultivariateDistribution >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateDistribution >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateDistribution, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateDistribution >::Type, struct ::statiskit::MultivariateDistribution > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_4540538b16205d90be33cf08feed0673 >::Type, autowig::Held< struct ::statiskit::MultivariateDistribution >::Type >();
    }    

}