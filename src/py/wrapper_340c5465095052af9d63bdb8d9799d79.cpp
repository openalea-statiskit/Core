#include "_core.h"



namespace autowig
{
    class Wrap_340c5465095052af9d63bdb8d9799d79 : public ::statiskit::UnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::UnivariateDistributionEstimation >
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
    template <> autowig::Wrap_340c5465095052af9d63bdb8d9799d79 const volatile * get_pointer<autowig::Wrap_340c5465095052af9d63bdb8d9799d79 const volatile >(autowig::Wrap_340c5465095052af9d63bdb8d9799d79 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_340c5465095052af9d63bdb8d9799d79()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::UnivariateDistributionEstimation::estimated_type const * (::statiskit::UnivariateDistributionEstimation::*method_pointer_bd794e40246350b583a72b6a11ca75d8)() const = &::statiskit::UnivariateDistributionEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_340c5465095052af9d63bdb8d9799d79, autowig::Held< autowig::Wrap_340c5465095052af9d63bdb8d9799d79 >::Type, boost::noncopyable > class_340c5465095052af9d63bdb8d9799d79("UnivariateDistributionEstimation", "", boost::python::no_init);
    class_340c5465095052af9d63bdb8d9799d79.def("get_estimated", boost::python::pure_virtual(method_pointer_bd794e40246350b583a72b6a11ca75d8), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::UnivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type, struct ::statiskit::UnivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_340c5465095052af9d63bdb8d9799d79 >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
    }    

}