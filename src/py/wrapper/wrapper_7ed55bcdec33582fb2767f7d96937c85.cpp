#include "_core.h"



namespace autowig
{
    class Wrap_7ed55bcdec33582fb2767f7d96937c85 : public ::statiskit::UnivariateConditionalDistribution, public boost::python::wrapper< struct ::statiskit::UnivariateConditionalDistribution >
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
    template <> autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85 const volatile * get_pointer<autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85 const volatile >(autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85 const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateConditionalDistribution const volatile * get_pointer<struct ::statiskit::UnivariateConditionalDistribution const volatile >(struct ::statiskit::UnivariateConditionalDistribution const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7ed55bcdec33582fb2767f7d96937c85()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    struct ::statiskit::UnivariateDistribution const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_53f978a20dca5ccd9144b1aeb74559b6)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::UnivariateConditionalDistribution::operator();
    double  (::statiskit::UnivariateConditionalDistribution::*method_pointer_8dba0d01abc159cf8681ca1cca6dbacb)(class ::statiskit::UnivariateConditionalData const &) const = &::statiskit::UnivariateConditionalDistribution::loglikelihood;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::UnivariateConditionalDistribution::*method_pointer_152a627d69cd5b35837e015943fc1e75)() const = &::statiskit::UnivariateConditionalDistribution::get_explanatory_space;
    unsigned int  (::statiskit::UnivariateConditionalDistribution::*method_pointer_a19605344e725c65ab302819d1663dbe)() const = &::statiskit::UnivariateConditionalDistribution::get_nb_parameters;
    boost::python::class_< autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85, autowig::Held< autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85 >::Type, boost::noncopyable > class_7ed55bcdec33582fb2767f7d96937c85("UnivariateConditionalDistribution", "", boost::python::no_init);
    class_7ed55bcdec33582fb2767f7d96937c85.def("__call__", boost::python::pure_virtual(method_pointer_53f978a20dca5ccd9144b1aeb74559b6), boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Parameter:\n    `event` (:py:class:`statiskit.core.statiskit.MultivariateEvent`) - Undocumented\n\n:Return Type:\n    :py:class:`statiskit.core.statiskit.UnivariateDistribution`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("loglikelihood", method_pointer_8dba0d01abc159cf8681ca1cca6dbacb, "");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_explanatory_space", boost::python::pure_virtual(method_pointer_152a627d69cd5b35837e015943fc1e75), boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`statiskit.core.statiskit.MultivariateSampleSpace`\n\n");
    class_7ed55bcdec33582fb2767f7d96937c85.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_a19605344e725c65ab302819d1663dbe), ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    if(autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_7ed55bcdec33582fb2767f7d96937c85 >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateConditionalDistribution >::Type >();
    }    

}