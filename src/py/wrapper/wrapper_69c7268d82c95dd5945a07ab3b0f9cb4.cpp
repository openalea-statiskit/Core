#include "_core.h"



namespace autowig
{
    class Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 : public ::statiskit::SplittingOperatorEstimation, public boost::python::wrapper< struct ::statiskit::SplittingOperatorEstimation >
    {
        public:
            
            virtual ::statiskit::SplittingOperatorEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 const volatile * get_pointer<autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 const volatile >(autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 const volatile *c) { return c; }
    template <> struct ::statiskit::SplittingOperatorEstimation const volatile * get_pointer<struct ::statiskit::SplittingOperatorEstimation const volatile >(struct ::statiskit::SplittingOperatorEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_69c7268d82c95dd5945a07ab3b0f9cb4()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::SplittingOperatorEstimation::estimated_type const * (::statiskit::SplittingOperatorEstimation::*method_pointer_b42ed17ab7d056f18c98969f0cba7564)() const = &::statiskit::SplittingOperatorEstimation::get_estimated;
    boost::python::class_< autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4, autowig::Held< autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 >::Type, boost::noncopyable > class_69c7268d82c95dd5945a07ab3b0f9cb4("SplittingOperatorEstimation", "", boost::python::no_init);
    class_69c7268d82c95dd5945a07ab3b0f9cb4.def("get_estimated", boost::python::pure_virtual(method_pointer_b42ed17ab7d056f18c98969f0cba7564), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    if(autowig::Held< struct ::statiskit::SplittingOperatorEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_69c7268d82c95dd5945a07ab3b0f9cb4 >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SplittingOperatorEstimation >::Type >();
    }    

}