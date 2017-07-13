#include "_core.h"



namespace autowig
{

    void method_decorator_6578260366ef5649b2f2d0dc0027e9a9(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > const & instance, const struct ::statiskit::SplittingOperatorEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_6c58d6314c175fde996541b6bc07e35f()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_6c58d6314c175fde996541b6bc07e35f_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > const & unique_ptr_6c58d6314c175fde996541b6bc07e35f)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > & >(unique_ptr_6c58d6314c175fde996541b6bc07e35f).release()).ptr());
            std::shared_ptr< struct ::statiskit::SplittingOperatorEstimation  > shared_ptr_6c58d6314c175fde996541b6bc07e35f(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > & >(unique_ptr_6c58d6314c175fde996541b6bc07e35f)));
            return boost::python::incref(boost::python::object(shared_ptr_6c58d6314c175fde996541b6bc07e35f).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >, unique_ptr_6c58d6314c175fde996541b6bc07e35f_to_python >();
}