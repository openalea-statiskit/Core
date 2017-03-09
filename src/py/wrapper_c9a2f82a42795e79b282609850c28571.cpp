#include "_core.h"



namespace autowig
{
    class Wrap_c9a2f82a42795e79b282609850c28571 : public ::statiskit::MeanEstimation, public boost::python::wrapper< struct ::statiskit::MeanEstimation >
    {
        public:
            
            virtual double const & get_mean() const
            {
                 double* result = this->get_override("get_mean")();
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
    template <> autowig::Wrap_c9a2f82a42795e79b282609850c28571 const volatile * get_pointer<autowig::Wrap_c9a2f82a42795e79b282609850c28571 const volatile >(autowig::Wrap_c9a2f82a42795e79b282609850c28571 const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_c9a2f82a42795e79b282609850c28571()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::MeanEstimation::*method_pointer_84ec59a1ad2b5bd0a929a94ebc54efe3)() const = &::statiskit::MeanEstimation::get_mean;
    boost::python::class_< autowig::Wrap_c9a2f82a42795e79b282609850c28571, autowig::Held< autowig::Wrap_c9a2f82a42795e79b282609850c28571 >::Type, boost::noncopyable > class_c9a2f82a42795e79b282609850c28571("MeanEstimation", "", boost::python::no_init);
    class_c9a2f82a42795e79b282609850c28571.def("get_mean", boost::python::pure_virtual(method_pointer_84ec59a1ad2b5bd0a929a94ebc54efe3), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< struct ::statiskit::MeanEstimation >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MeanEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MeanEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MeanEstimation >::Type, struct ::statiskit::MeanEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_c9a2f82a42795e79b282609850c28571 >::Type, autowig::Held< struct ::statiskit::MeanEstimation >::Type >();
    }    

}