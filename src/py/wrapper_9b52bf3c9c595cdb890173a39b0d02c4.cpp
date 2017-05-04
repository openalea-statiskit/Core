#include "_core.h"



namespace autowig
{
    class Wrap_9b52bf3c9c595cdb890173a39b0d02c4 : public ::statiskit::CategoricalUnivariateConditionalDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateConditionalDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4 const volatile * get_pointer<autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4 const volatile >(autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4 const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation const volatile * get_pointer<struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation const volatile >(struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9b52bf3c9c595cdb890173a39b0d02c4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4, autowig::Held< autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4 >::Type, boost::python::bases< struct ::statiskit::UnivariateConditionalDistributionEstimation >, boost::noncopyable > class_9b52bf3c9c595cdb890173a39b0d02c4("CategoricalUnivariateConditionalDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9b52bf3c9c595cdb890173a39b0d02c4 >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateConditionalDistributionEstimation >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation >::Type, struct ::statiskit::CategoricalUnivariateConditionalDistributionEstimation > > >();
    }

}