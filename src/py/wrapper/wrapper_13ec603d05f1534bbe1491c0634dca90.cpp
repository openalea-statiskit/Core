#include "_core.h"



namespace autowig
{
    class Wrap_13ec603d05f1534bbe1491c0634dca90 : public ::statiskit::MultivariateDispersionEstimation, public boost::python::wrapper< class ::statiskit::MultivariateDispersionEstimation >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & get_dispersion() const
            {
                 ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >* result = this->get_override("get_dispersion")();
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
    template <> autowig::Wrap_13ec603d05f1534bbe1491c0634dca90 const volatile * get_pointer<autowig::Wrap_13ec603d05f1534bbe1491c0634dca90 const volatile >(autowig::Wrap_13ec603d05f1534bbe1491c0634dca90 const volatile *c) { return c; }
    template <> class ::statiskit::MultivariateDispersionEstimation const volatile * get_pointer<class ::statiskit::MultivariateDispersionEstimation const volatile >(class ::statiskit::MultivariateDispersionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_13ec603d05f1534bbe1491c0634dca90()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::MultivariateDispersionEstimation::*method_pointer_ebec9ac7b6a4561290c4d11e2dc97512)() const = &::statiskit::MultivariateDispersionEstimation::get_location;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::MultivariateDispersionEstimation::*method_pointer_f90e89297ac2541ca0716c5f01e71bb0)() const = &::statiskit::MultivariateDispersionEstimation::get_dispersion;
    boost::python::class_< autowig::Wrap_13ec603d05f1534bbe1491c0634dca90, autowig::Held< autowig::Wrap_13ec603d05f1534bbe1491c0634dca90 >::Type, boost::noncopyable > class_13ec603d05f1534bbe1491c0634dca90("MultivariateDispersionEstimation", "", boost::python::no_init);
    class_13ec603d05f1534bbe1491c0634dca90.def("get_location", method_pointer_ebec9ac7b6a4561290c4d11e2dc97512, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_13ec603d05f1534bbe1491c0634dca90.def("get_dispersion", boost::python::pure_virtual(method_pointer_f90e89297ac2541ca0716c5f01e71bb0), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< class ::statiskit::MultivariateDispersionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_13ec603d05f1534bbe1491c0634dca90 >::Type, autowig::Held< class ::statiskit::MultivariateDispersionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::MultivariateDispersionEstimation >::Type >();
    }    

}