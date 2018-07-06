#include "_core.h"



namespace autowig
{
    class Wrap_a004a7cf0d095bdeadf276d9713e024f : public ::statiskit::CategoricalMultivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateConditionalDistributionEstimation, struct ::std::default_delete< struct ::statiskit::MultivariateConditionalDistributionEstimation > > (result);
            }
                        
            virtual ::statiskit::MultivariateConditionalDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f const volatile * get_pointer<autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f const volatile >(autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a004a7cf0d095bdeadf276d9713e024f()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f, autowig::Held< autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f >::Type, boost::python::bases< struct ::statiskit::MultivariateConditionalDistributionEstimation >, boost::noncopyable > class_a004a7cf0d095bdeadf276d9713e024f("CategoricalMultivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_a004a7cf0d095bdeadf276d9713e024f >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateConditionalDistributionEstimation >::Type >();
    }

}