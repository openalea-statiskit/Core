#include "_core.h"



namespace autowig
{
    class Wrap_c4726473069d576fbb9e53aacbf298ea : public ::statiskit::CategoricalUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalUnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_c4726473069d576fbb9e53aacbf298ea const volatile * get_pointer<autowig::Wrap_c4726473069d576fbb9e53aacbf298ea const volatile >(autowig::Wrap_c4726473069d576fbb9e53aacbf298ea const volatile *c) { return c; }
    template <> struct ::statiskit::CategoricalUnivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::CategoricalUnivariateDistributionEstimation const volatile >(struct ::statiskit::CategoricalUnivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c4726473069d576fbb9e53aacbf298ea()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_c4726473069d576fbb9e53aacbf298ea, autowig::Held< autowig::Wrap_c4726473069d576fbb9e53aacbf298ea >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation >, boost::noncopyable > class_c4726473069d576fbb9e53aacbf298ea("CategoricalUnivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalUnivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type, struct ::statiskit::CategoricalUnivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c4726473069d576fbb9e53aacbf298ea >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistributionEstimation >::Type >();
    }

}