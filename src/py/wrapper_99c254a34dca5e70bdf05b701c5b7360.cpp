#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360 const volatile * get_pointer<autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360 const volatile >(autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360 const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_99c254a34dca5e70bdf05b701c5b7360 : public ::statiskit::VarianceEstimation, public boost::python::wrapper< class ::statiskit::VarianceEstimation >
    {
        public:
            
            virtual double const & get_variance() const
            { return this->get_override("get_variance")(); }

        protected:
            

        private:
            

    };

}


void wrapper_99c254a34dca5e70bdf05b701c5b7360()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    double const & (::statiskit::VarianceEstimation::*method_pointer_60973a4a73425290a455a2d2a65eaf21)() const = &::statiskit::VarianceEstimation::get_mean;
    double const & (::statiskit::VarianceEstimation::*method_pointer_af6fd74a0de15abbb34a83f63ed1939b)() const = &::statiskit::VarianceEstimation::get_variance;
    boost::python::class_< autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360, autowig::Held< autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360 >::Type, boost::noncopyable > class_99c254a34dca5e70bdf05b701c5b7360("VarianceEstimation", "", boost::python::no_init);
    class_99c254a34dca5e70bdf05b701c5b7360.def("get_mean", method_pointer_60973a4a73425290a455a2d2a65eaf21, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_99c254a34dca5e70bdf05b701c5b7360.def("get_variance", boost::python::pure_virtual(method_pointer_af6fd74a0de15abbb34a83f63ed1939b), boost::python::return_value_policy< boost::python::return_by_value >(), "");
    if(autowig::Held< class ::statiskit::VarianceEstimation >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::VarianceEstimation >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::VarianceEstimation, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::VarianceEstimation >::Type, class ::statiskit::VarianceEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_99c254a34dca5e70bdf05b701c5b7360 >::Type, autowig::Held< class ::statiskit::VarianceEstimation >::Type >();
    }    

}