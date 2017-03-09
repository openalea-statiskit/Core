#include "_core.h"



namespace autowig
{
    class Wrap_f09c97b097575bf2b4af254e6faa082c : public ::statiskit::CategoricalMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::CategoricalMultivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::MultivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f09c97b097575bf2b4af254e6faa082c const volatile * get_pointer<autowig::Wrap_f09c97b097575bf2b4af254e6faa082c const volatile >(autowig::Wrap_f09c97b097575bf2b4af254e6faa082c const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f09c97b097575bf2b4af254e6faa082c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_f09c97b097575bf2b4af254e6faa082c, autowig::Held< autowig::Wrap_f09c97b097575bf2b4af254e6faa082c >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation >, boost::noncopyable > class_f09c97b097575bf2b4af254e6faa082c("CategoricalMultivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::CategoricalMultivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type, struct ::statiskit::CategoricalMultivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f09c97b097575bf2b4af254e6faa082c >::Type, autowig::Held< struct ::statiskit::CategoricalMultivariateDistributionEstimation >::Type >();
    }

}