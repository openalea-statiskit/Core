#include "_core.h"



namespace autowig
{

    void method_decorator_31c7f97c949c53f4a1235eadd8026005(class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > const & instance, const class ::statiskit::CauchyDistribution & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > const volatile >(class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ce183f8233945456bfe68bbd4e38c60c()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_ce183f8233945456bfe68bbd4e38c60c_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > const & unique_ptr_ce183f8233945456bfe68bbd4e38c60c)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > & >(unique_ptr_ce183f8233945456bfe68bbd4e38c60c).release()).ptr());
            std::shared_ptr< class ::statiskit::CauchyDistribution  > shared_ptr_ce183f8233945456bfe68bbd4e38c60c(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > > & >(unique_ptr_ce183f8233945456bfe68bbd4e38c60c)));
            return boost::python::incref(boost::python::object(shared_ptr_ce183f8233945456bfe68bbd4e38c60c).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::CauchyDistribution, struct ::std::default_delete< class ::statiskit::CauchyDistribution > >, unique_ptr_ce183f8233945456bfe68bbd4e38c60c_to_python >();
}