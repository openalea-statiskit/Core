#include "_core.h"



namespace autowig
{
    class Wrap_87b566a692cb54b18914b54eb295ef9a : public ::statiskit::UnivariateDispersionEstimation, public boost::python::wrapper< class ::statiskit::UnivariateDispersionEstimation >
    {
        public:
            
            virtual double const & get_dispersion() const
            {
                 double* result = this->get_override("get_dispersion")();
                 return *result;
            }                 
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_87b566a692cb54b18914b54eb295ef9a const volatile * get_pointer<autowig::Wrap_87b566a692cb54b18914b54eb295ef9a const volatile >(autowig::Wrap_87b566a692cb54b18914b54eb295ef9a const volatile *c) { return c; }
    template <> class ::statiskit::UnivariateDispersionEstimation const volatile * get_pointer<class ::statiskit::UnivariateDispersionEstimation const volatile >(class ::statiskit::UnivariateDispersionEstimation const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_87b566a692cb54b18914b54eb295ef9a()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::UnivariateDispersionEstimation::*method_pointer_0301fbd58a7a5c1388ceb1e5f1396915)() const = &::statiskit::UnivariateDispersionEstimation::get_location;
    double const & (::statiskit::UnivariateDispersionEstimation::*method_pointer_a18c7d90bacb538d9895cf5c0091b871)() const = &::statiskit::UnivariateDispersionEstimation::get_dispersion;
    boost::python::class_< autowig::Wrap_87b566a692cb54b18914b54eb295ef9a, autowig::Held< autowig::Wrap_87b566a692cb54b18914b54eb295ef9a >::Type, boost::noncopyable > class_87b566a692cb54b18914b54eb295ef9a("UnivariateDispersionEstimation", "", boost::python::no_init);
    class_87b566a692cb54b18914b54eb295ef9a.def("get_location", method_pointer_0301fbd58a7a5c1388ceb1e5f1396915, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_87b566a692cb54b18914b54eb295ef9a.def("get_dispersion", boost::python::pure_virtual(method_pointer_a18c7d90bacb538d9895cf5c0091b871), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< class ::statiskit::UnivariateDispersionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_87b566a692cb54b18914b54eb295ef9a >::Type, autowig::Held< class ::statiskit::UnivariateDispersionEstimation >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< class ::statiskit::UnivariateDispersionEstimation >::Type >();
    }    

}