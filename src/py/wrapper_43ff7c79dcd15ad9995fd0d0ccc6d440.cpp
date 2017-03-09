#include "_core.h"



namespace autowig
{
    class Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 : public ::statiskit::MultivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::MultivariateDistributionEstimation >
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
    template <> autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 const volatile * get_pointer<autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 const volatile >(autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_43ff7c79dcd15ad9995fd0d0ccc6d440()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::MultivariateDistributionEstimation::estimated_type const * (::statiskit::MultivariateDistributionEstimation::*method_pointer_123ca6ff048a55c3916851be0f12a662)() const = &::statiskit::MultivariateDistributionEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440, autowig::Held< autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 >::Type, boost::noncopyable > class_43ff7c79dcd15ad9995fd0d0ccc6d440("MultivariateDistributionEstimation", "", boost::python::no_init);
    class_43ff7c79dcd15ad9995fd0d0ccc6d440.def("get_estimated", boost::python::pure_virtual(method_pointer_123ca6ff048a55c3916851be0f12a662), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type, struct ::statiskit::MultivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_43ff7c79dcd15ad9995fd0d0ccc6d440 >::Type, autowig::Held< struct ::statiskit::MultivariateDistributionEstimation >::Type >();
    }    

}