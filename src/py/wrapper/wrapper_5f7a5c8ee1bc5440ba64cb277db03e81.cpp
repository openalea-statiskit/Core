#include "_core.h"



namespace autowig
{

    void method_decorator_2ec04d51d3d9575586b2587fad5d87f1(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > const & instance, const struct ::statiskit::SplittingOperatorEstimation::Estimator & param_out) { instance.operator*() = param_out; }
}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > const volatile * get_pointer<class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > const volatile >(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5f7a5c8ee1bc5440ba64cb277db03e81()
{

    std::string name_a5e4e9231d6351ccb0e06756b389f0af = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".std");
    boost::python::object module_a5e4e9231d6351ccb0e06756b389f0af(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_a5e4e9231d6351ccb0e06756b389f0af.c_str()))));
    boost::python::scope().attr("std") = module_a5e4e9231d6351ccb0e06756b389f0af;
    boost::python::scope scope_a5e4e9231d6351ccb0e06756b389f0af = module_a5e4e9231d6351ccb0e06756b389f0af;
    struct unique_ptr_5f7a5c8ee1bc5440ba64cb277db03e81_to_python
    {
        static PyObject* convert(class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > const & unique_ptr_5f7a5c8ee1bc5440ba64cb277db03e81)
        {
            //return boost::python::incref(boost::python::object(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > & >(unique_ptr_5f7a5c8ee1bc5440ba64cb277db03e81).release()).ptr());
            std::shared_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator  > shared_ptr_5f7a5c8ee1bc5440ba64cb277db03e81(std::move(const_cast< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > > & >(unique_ptr_5f7a5c8ee1bc5440ba64cb277db03e81)));
            return boost::python::incref(boost::python::object(shared_ptr_5f7a5c8ee1bc5440ba64cb277db03e81).ptr());
        }
    };

    boost::python::to_python_converter< class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation::Estimator > >, unique_ptr_5f7a5c8ee1bc5440ba64cb277db03e81_to_python >();
}