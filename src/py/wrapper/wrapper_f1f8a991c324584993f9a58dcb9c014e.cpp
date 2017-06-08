#include "_core.h"



namespace autowig
{
    class Wrap_f1f8a991c324584993f9a58dcb9c014e : public ::statiskit::ContinuousMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::ContinuousMultivariateDistributionEstimation >
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
    template <> autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e const volatile * get_pointer<autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e const volatile >(autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e const volatile *c) { return c; }
    template <> struct ::statiskit::ContinuousMultivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::ContinuousMultivariateDistributionEstimation const volatile >(struct ::statiskit::ContinuousMultivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f1f8a991c324584993f9a58dcb9c014e()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e, autowig::Held< autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation >, boost::noncopyable > class_f1f8a991c324584993f9a58dcb9c014e("ContinuousMultivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f1f8a991c324584993f9a58dcb9c014e >::Type, autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::ContinuousMultivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }

}