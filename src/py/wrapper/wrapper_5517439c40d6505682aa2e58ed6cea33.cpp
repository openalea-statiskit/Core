#include "_core.h"



namespace autowig
{
    class Wrap_5517439c40d6505682aa2e58ed6cea33 : public ::statiskit::MultivariateLocationEstimation, public boost::python::wrapper< struct ::statiskit::MultivariateLocationEstimation >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & get_location() const
            {
                 ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >* result = this->get_override("get_location")();
                 return *result;
            }                 
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5517439c40d6505682aa2e58ed6cea33 const volatile * get_pointer<autowig::Wrap_5517439c40d6505682aa2e58ed6cea33 const volatile >(autowig::Wrap_5517439c40d6505682aa2e58ed6cea33 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateLocationEstimation const volatile * get_pointer<struct ::statiskit::MultivariateLocationEstimation const volatile >(struct ::statiskit::MultivariateLocationEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5517439c40d6505682aa2e58ed6cea33()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultivariateLocationEstimation::*method_pointer_79a5b0a58645590a8356a14195e34da5)() const = &::statiskit::MultivariateLocationEstimation::get_location;
    boost::python::class_< autowig::Wrap_5517439c40d6505682aa2e58ed6cea33, autowig::Held< autowig::Wrap_5517439c40d6505682aa2e58ed6cea33 >::Type, boost::noncopyable > class_5517439c40d6505682aa2e58ed6cea33("MultivariateLocationEstimation", "", boost::python::no_init);
    class_5517439c40d6505682aa2e58ed6cea33.def("get_location", boost::python::pure_virtual(method_pointer_79a5b0a58645590a8356a14195e34da5), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< struct ::statiskit::MultivariateLocationEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5517439c40d6505682aa2e58ed6cea33 >::Type, autowig::Held< struct ::statiskit::MultivariateLocationEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateLocationEstimation >::Type >();
    }    

}