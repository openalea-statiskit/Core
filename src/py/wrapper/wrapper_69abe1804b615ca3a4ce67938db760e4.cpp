#include "_core.h"



namespace autowig
{

    void method_decorator_772fb7f4f26a55c2bfcd3c0e2ed2d85f(class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > const & instance, const struct ::statiskit::SplittingOperator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_69abe1804b615ca3a4ce67938db760e4()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_69abe1804b615ca3a4ce67938db760e4_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > const & unique_ptr_69abe1804b615ca3a4ce67938db760e4)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > & >(unique_ptr_69abe1804b615ca3a4ce67938db760e4).release()).ptr());
            std::shared_ptr< struct ::statiskit::SplittingOperator  > shared_ptr_69abe1804b615ca3a4ce67938db760e4(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > & >(unique_ptr_69abe1804b615ca3a4ce67938db760e4)));
            return boost::python::incref(boost::python::object(shared_ptr_69abe1804b615ca3a4ce67938db760e4).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > >, unique_ptr_69abe1804b615ca3a4ce67938db760e4_to_python >();
}