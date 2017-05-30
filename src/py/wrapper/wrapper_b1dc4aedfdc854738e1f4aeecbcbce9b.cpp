#include "_core.h"



namespace autowig
{
    class Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b : public ::statiskit::CovarianceMatrixEstimation, public boost::python::wrapper< class ::statiskit::CovarianceMatrixEstimation >
    {
        public:
            
            virtual class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & get_covariance() const
            {
                 ::Eigen::Matrix< double, -1, -1, 0, -1, -1 >* result = this->get_override("get_covariance")();
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
    template <> autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b const volatile * get_pointer<autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b const volatile >(autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b const volatile *c) { return c; }
    template <> class ::statiskit::CovarianceMatrixEstimation const volatile * get_pointer<class ::statiskit::CovarianceMatrixEstimation const volatile >(class ::statiskit::CovarianceMatrixEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_b1dc4aedfdc854738e1f4aeecbcbce9b()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::CovarianceMatrixEstimation::*method_pointer_ab9e48aad4885e5bafd88adadb101a60)() const = &::statiskit::CovarianceMatrixEstimation::get_mean;
    class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & (::statiskit::CovarianceMatrixEstimation::*method_pointer_2943394537835969b9602aab7f80b3c3)() const = &::statiskit::CovarianceMatrixEstimation::get_covariance;
    boost::python::class_< autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b, autowig::Held< autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b >::Type, boost::noncopyable > class_b1dc4aedfdc854738e1f4aeecbcbce9b("CovarianceMatrixEstimation", "", boost::python::no_init);
    class_b1dc4aedfdc854738e1f4aeecbcbce9b.def("get_mean", method_pointer_ab9e48aad4885e5bafd88adadb101a60, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_b1dc4aedfdc854738e1f4aeecbcbce9b.def("get_covariance", boost::python::pure_virtual(method_pointer_2943394537835969b9602aab7f80b3c3), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< class ::statiskit::CovarianceMatrixEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_b1dc4aedfdc854738e1f4aeecbcbce9b >::Type, autowig::Held< class ::statiskit::CovarianceMatrixEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::CovarianceMatrixEstimation >::Type >();
    }    

}