#include "_core.h"



namespace autowig
{
    class Wrap_c85ee717b61a5378b8f1bc88cdf6c91a : public ::statiskit::UnivariateLocationEstimation, public boost::python::wrapper< struct ::statiskit::UnivariateLocationEstimation >
    {
        public:
            
            virtual double const & get_location() const
            {
                 double* result = this->get_override("get_location")();
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
    template <> autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a const volatile * get_pointer<autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a const volatile >(autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a const volatile *c) { return c; }
    template <> struct ::statiskit::UnivariateLocationEstimation const volatile * get_pointer<struct ::statiskit::UnivariateLocationEstimation const volatile >(struct ::statiskit::UnivariateLocationEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c85ee717b61a5378b8f1bc88cdf6c91a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::UnivariateLocationEstimation::*method_pointer_9dde6f7d86c45ddd8e7676fbf005dcc2)() const = &::statiskit::UnivariateLocationEstimation::get_location;
    boost::python::class_< autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a, autowig::Held< autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a >::Type, boost::noncopyable > class_c85ee717b61a5378b8f1bc88cdf6c91a("UnivariateLocationEstimation", "", boost::python::no_init);
    class_c85ee717b61a5378b8f1bc88cdf6c91a.def("get_location", boost::python::pure_virtual(method_pointer_9dde6f7d86c45ddd8e7676fbf005dcc2), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< struct ::statiskit::UnivariateLocationEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c85ee717b61a5378b8f1bc88cdf6c91a >::Type, autowig::Held< struct ::statiskit::UnivariateLocationEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::UnivariateLocationEstimation >::Type >();
    }    

}