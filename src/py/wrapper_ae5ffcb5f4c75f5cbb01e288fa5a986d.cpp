#include "_core.h"



namespace autowig
{
    class Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d : public ::statiskit::DiscreteUnivariateDistributionEstimation, public boost::python::wrapper< struct ::statiskit::DiscreteUnivariateDistributionEstimation >
    {
        public:
            
            virtual ::statiskit::UnivariateDistributionEstimation::estimated_type const * get_estimated() const
            { return this->get_override("get_estimated")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d const volatile * get_pointer<autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d const volatile >(autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ae5ffcb5f4c75f5cbb01e288fa5a986d()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d, autowig::Held< autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d >::Type, boost::python::bases< struct ::statiskit::UnivariateDistributionEstimation >, boost::noncopyable > class_ae5ffcb5f4c75f5cbb01e288fa5a986d("DiscreteUnivariateDistributionEstimation", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, autowig::Held< struct ::statiskit::UnivariateDistributionEstimation >::Type >();
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::DiscreteUnivariateDistributionEstimation, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type, struct ::statiskit::DiscreteUnivariateDistributionEstimation > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ae5ffcb5f4c75f5cbb01e288fa5a986d >::Type, autowig::Held< struct ::statiskit::DiscreteUnivariateDistributionEstimation >::Type >();
    }

}