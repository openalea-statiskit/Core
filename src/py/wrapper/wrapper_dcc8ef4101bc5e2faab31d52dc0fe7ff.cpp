#include "_core.h"



namespace autowig
{

    void method_decorator_088c9d4a4ea65ef4a87e10e1b478f0f5(class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > const & instance, const struct ::statiskit::UnivariateSampleSpace & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > const volatile >(class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_dcc8ef4101bc5e2faab31d52dc0fe7ff()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > const & unique_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > & >(unique_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff).release()).ptr());
            std::shared_ptr< struct ::statiskit::UnivariateSampleSpace  > shared_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > & >(unique_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff)));
            return boost::python::incref(boost::python::object(shared_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >, unique_ptr_dcc8ef4101bc5e2faab31d52dc0fe7ff_to_python >();
}