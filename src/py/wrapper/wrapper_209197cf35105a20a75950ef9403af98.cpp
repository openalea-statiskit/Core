#include "_core.h"



namespace autowig
{

    void method_decorator_29da0436bbbb536f9bdd0e9542f78919(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > const & instance, const struct ::statiskit::SingularDistributionEstimation & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_209197cf35105a20a75950ef9403af98()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_209197cf35105a20a75950ef9403af98_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > const & unique_ptr_209197cf35105a20a75950ef9403af98)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > & >(unique_ptr_209197cf35105a20a75950ef9403af98).release()).ptr());
            std::shared_ptr< struct ::statiskit::SingularDistributionEstimation  > shared_ptr_209197cf35105a20a75950ef9403af98(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > > & >(unique_ptr_209197cf35105a20a75950ef9403af98)));
            return boost::python::incref(boost::python::object(shared_ptr_209197cf35105a20a75950ef9403af98).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SingularDistributionEstimation, struct ::std::default_delete< struct ::statiskit::SingularDistributionEstimation > >, unique_ptr_209197cf35105a20a75950ef9403af98_to_python >();
}