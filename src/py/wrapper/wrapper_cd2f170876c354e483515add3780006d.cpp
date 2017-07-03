#include "_core.h"



namespace autowig
{

    void method_decorator_c6aacc928d995dce9ba6a5eadd9d85f4(class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > const & instance, const struct ::statiskit::MultivariateEvent & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > const volatile >(class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_cd2f170876c354e483515add3780006d()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_cd2f170876c354e483515add3780006d_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > const & unique_ptr_cd2f170876c354e483515add3780006d)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > & >(unique_ptr_cd2f170876c354e483515add3780006d).release()).ptr());
            std::shared_ptr< struct ::statiskit::MultivariateEvent  > shared_ptr_cd2f170876c354e483515add3780006d(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > & >(unique_ptr_cd2f170876c354e483515add3780006d)));
            return boost::python::incref(boost::python::object(shared_ptr_cd2f170876c354e483515add3780006d).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >, unique_ptr_cd2f170876c354e483515add3780006d_to_python >();
}