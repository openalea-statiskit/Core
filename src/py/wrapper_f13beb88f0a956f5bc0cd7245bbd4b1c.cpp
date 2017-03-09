#include "_core.h"



namespace autowig
{
    class Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c : public ::statiskit::ContinuousUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousUnivariateDistributionEstimation >
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
    template <> autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c const volatile * get_pointer<autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c const volatile >(autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f13beb88f0a956f5bc0cd7245bbd4b1c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c, autowig::Held< autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation >, boost::noncopyable > class_f13beb88f0a956f5bc0cd7245bbd4b1c("ContinuousUnivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::ContinuousUnivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type, struct ::statiskit::ContinuousUnivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f13beb88f0a956f5bc0cd7245bbd4b1c >::Type, autowig::Held< struct ::statiskit::ContinuousUnivariateDistributionEstimation >::Type >();
    }

}