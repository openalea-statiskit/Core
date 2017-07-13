#include "_core.h"



namespace autowig
{
    class Wrap_f059ae7517ca5f96bf5fcb51169c2c69 : public ::statiskit::SplittingOperatorEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::SplittingOperatorEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >  operator()(::statiskit::SplittingOperatorEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69 const volatile * get_pointer<autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69 const volatile >(autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69 const volatile *c) { return c; }
    template <> struct ::statiskit::SplittingOperatorEstimation::Estimator const volatile * get_pointer<struct ::statiskit::SplittingOperatorEstimation::Estimator const volatile >(struct ::statiskit::SplittingOperatorEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f059ae7517ca5f96bf5fcb51169c2c69()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_69c7268d82c95dd5945a07ab3b0f9cb4 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._splitting_operator_estimation");
    boost::python::object module_69c7268d82c95dd5945a07ab3b0f9cb4(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_69c7268d82c95dd5945a07ab3b0f9cb4.c_str()))));
    boost::python::scope().attr("_splitting_operator_estimation") = module_69c7268d82c95dd5945a07ab3b0f9cb4;
    boost::python::scope scope_69c7268d82c95dd5945a07ab3b0f9cb4 = module_69c7268d82c95dd5945a07ab3b0f9cb4;
    class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >  (::statiskit::SplittingOperatorEstimation::Estimator::*method_pointer_1760c3e7aaad5c94a734d7aa7473fbdc)(::statiskit::SplittingOperatorEstimation::data_type const &, bool const &) const = &::statiskit::SplittingOperatorEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >  (::statiskit::SplittingOperatorEstimation::Estimator::*method_pointer_b69a0dc2de2d53ae91b128eeaa1612e0)() const = &::statiskit::SplittingOperatorEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69, autowig::Held< autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69 >::Type, boost::noncopyable > class_f059ae7517ca5f96bf5fcb51169c2c69("Estimator", "", boost::python::no_init);
    class_f059ae7517ca5f96bf5fcb51169c2c69.def("__call__", boost::python::pure_virtual(method_pointer_1760c3e7aaad5c94a734d7aa7473fbdc), "");
    class_f059ae7517ca5f96bf5fcb51169c2c69.def("copy", boost::python::pure_virtual(method_pointer_b69a0dc2de2d53ae91b128eeaa1612e0), "");
    if(autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f059ae7517ca5f96bf5fcb51169c2c69 >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
    }    

}