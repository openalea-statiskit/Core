#include "_core.h"



namespace autowig
{

    void method_decorator_e35fd10b122551e1a3365f5e1c54e412(class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > const & instance, const class ::statiskit::WeightedMultivariateData & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > const volatile * get_pointer<class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > const volatile >(class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_27d3f2e69a9d575c86a41e9ae1f55289()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_27d3f2e69a9d575c86a41e9ae1f55289_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > const & unique_ptr_27d3f2e69a9d575c86a41e9ae1f55289)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > & >(unique_ptr_27d3f2e69a9d575c86a41e9ae1f55289).release()).ptr());
            std::shared_ptr< class ::statiskit::WeightedMultivariateData  > shared_ptr_27d3f2e69a9d575c86a41e9ae1f55289(std::move(const_cast< class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > > & >(unique_ptr_27d3f2e69a9d575c86a41e9ae1f55289)));
            return boost::python::incref(boost::python::object(shared_ptr_27d3f2e69a9d575c86a41e9ae1f55289).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< class ::statiskit::WeightedMultivariateData, struct ::std::default_delete< class ::statiskit::WeightedMultivariateData > >, unique_ptr_27d3f2e69a9d575c86a41e9ae1f55289_to_python >();
}