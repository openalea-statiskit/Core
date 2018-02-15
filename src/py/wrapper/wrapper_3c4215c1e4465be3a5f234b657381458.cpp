#include "_core.h"



namespace autowig
{
    class Wrap_3c4215c1e4465be3a5f234b657381458 : public ::statiskit::SingularDistributionEstimation, public boost::python::wrapper< struct ::statiskit::SingularDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::SingularDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_3c4215c1e4465be3a5f234b657381458 const volatile * get_pointer<autowig::Wrap_3c4215c1e4465be3a5f234b657381458 const volatile >(autowig::Wrap_3c4215c1e4465be3a5f234b657381458 const volatile *c) { return c; }
    template <> struct ::statiskit::SingularDistributionEstimation const volatile * get_pointer<struct ::statiskit::SingularDistributionEstimation const volatile >(struct ::statiskit::SingularDistributionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3c4215c1e4465be3a5f234b657381458()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::SingularDistributionEstimation::estimated_type const * (::statiskit::SingularDistributionEstimation::*method_pointer_5a217a5a2172529fb9cae0338394139f)() const = &::statiskit::SingularDistributionEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_3c4215c1e4465be3a5f234b657381458, autowig::Held< autowig::Wrap_3c4215c1e4465be3a5f234b657381458 >::Type, boost::noncopyable > class_3c4215c1e4465be3a5f234b657381458("SingularDistributionEstimation", "", boost::python::no_init);
    class_3c4215c1e4465be3a5f234b657381458.def("get_estimated", boost::python::pure_virtual(method_pointer_5a217a5a2172529fb9cae0338394139f), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::SingularDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3c4215c1e4465be3a5f234b657381458 >::Type, autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SingularDistributionEstimation >::Type >();
    }    

}