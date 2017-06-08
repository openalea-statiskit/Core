#include "_core.h"



namespace autowig
{
    class Wrap_853f9a4da37d570fb720964c982ff0c7 : public ::statiskit::MeanVectorEstimation, public boost::python::wrapper< struct ::statiskit::MeanVectorEstimation >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & get_mean() const
            {
                 ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >* result = this->get_override("get_mean")();
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
    template <> autowig::Wrap_853f9a4da37d570fb720964c982ff0c7 const volatile * get_pointer<autowig::Wrap_853f9a4da37d570fb720964c982ff0c7 const volatile >(autowig::Wrap_853f9a4da37d570fb720964c982ff0c7 const volatile *c) { return c; }
    template <> struct ::statiskit::MeanVectorEstimation const volatile * get_pointer<struct ::statiskit::MeanVectorEstimation const volatile >(struct ::statiskit::MeanVectorEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_853f9a4da37d570fb720964c982ff0c7()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MeanVectorEstimation::*method_pointer_c941eefa12ff51849f417db1429c2860)() const = &::statiskit::MeanVectorEstimation::get_mean;
    boost::python::class_< autowig::Wrap_853f9a4da37d570fb720964c982ff0c7, autowig::Held< autowig::Wrap_853f9a4da37d570fb720964c982ff0c7 >::Type, boost::noncopyable > class_853f9a4da37d570fb720964c982ff0c7("MeanVectorEstimation", "", boost::python::no_init);
    class_853f9a4da37d570fb720964c982ff0c7.def("get_mean", boost::python::pure_virtual(method_pointer_c941eefa12ff51849f417db1429c2860), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< struct ::statiskit::MeanVectorEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_853f9a4da37d570fb720964c982ff0c7 >::Type, autowig::Held< struct ::statiskit::MeanVectorEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MeanVectorEstimation >::Type >();
    }    

}