#include "_core.h"



namespace autowig
{
    class Wrap_b14b3594a74c5ccc968141047b5145f4 : public ::statiskit::DiscreteMultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteMultivariateDistributionEstimation >
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
    template <> autowig::Wrap_b14b3594a74c5ccc968141047b5145f4 const volatile * get_pointer<autowig::Wrap_b14b3594a74c5ccc968141047b5145f4 const volatile >(autowig::Wrap_b14b3594a74c5ccc968141047b5145f4 const volatile *c) { return c; }
    template <> struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile * get_pointer<struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile >(struct ::statiskit::DiscreteMultivariateDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b14b3594a74c5ccc968141047b5145f4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_b14b3594a74c5ccc968141047b5145f4, autowig::Held< autowig::Wrap_b14b3594a74c5ccc968141047b5145f4 >::Type, boost::python::bases< struct ::statiskit::MultivariateDistributionEstimation >, boost::noncopyable > class_b14b3594a74c5ccc968141047b5145f4("DiscreteMultivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b14b3594a74c5ccc968141047b5145f4 >::Type, autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteMultivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }

}