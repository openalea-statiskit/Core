#include "_core.h"



namespace autowig
{
    class Wrap_9b1c85d3df8e5cba922fb88752a0d746 : public ::statiskit::MultivariateDispersionEstimation::Estimator, public boost::python::wrapper< struct ::statiskit::MultivariateDispersionEstimation::Estimator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > > (result);
            }
                        
            virtual class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  operator()(struct ::statiskit::MultivariateData const & param_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_1) const
            {
                 ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746 const volatile * get_pointer<autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746 const volatile >(autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateDispersionEstimation::Estimator const volatile * get_pointer<struct ::statiskit::MultivariateDispersionEstimation::Estimator const volatile >(struct ::statiskit::MultivariateDispersionEstimation::Estimator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_9b1c85d3df8e5cba922fb88752a0d746()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    std::string name_13ec603d05f1534bbe1491c0634dca90 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._multivariate_dispersion_estimation");
    boost::python::object module_13ec603d05f1534bbe1491c0634dca90(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_13ec603d05f1534bbe1491c0634dca90.c_str()))));
    boost::python::scope().attr("_multivariate_dispersion_estimation") = module_13ec603d05f1534bbe1491c0634dca90;
    boost::python::scope scope_13ec603d05f1534bbe1491c0634dca90 = module_13ec603d05f1534bbe1491c0634dca90;
    class ::std::unique_ptr< class ::statiskit::MultivariateDispersionEstimation, struct ::std::default_delete< class ::statiskit::MultivariateDispersionEstimation > >  (::statiskit::MultivariateDispersionEstimation::Estimator::*method_pointer_362d225b055b59faab2c348f93722cb7)(struct ::statiskit::MultivariateData const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::MultivariateDispersionEstimation::Estimator::operator();
    class ::std::unique_ptr< struct ::statiskit::MultivariateDispersionEstimation::Estimator, struct ::std::default_delete< struct ::statiskit::MultivariateDispersionEstimation::Estimator > >  (::statiskit::MultivariateDispersionEstimation::Estimator::*method_pointer_fd8c28a661ec58aba7edb069108b96b4)() const = &::statiskit::MultivariateDispersionEstimation::Estimator::copy;
    boost::python::class_< autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746, autowig::Held< autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746 >::Type, boost::noncopyable > class_9b1c85d3df8e5cba922fb88752a0d746("Estimator", "", boost::python::no_init);
    class_9b1c85d3df8e5cba922fb88752a0d746.def("__call__", boost::python::pure_virtual(method_pointer_362d225b055b59faab2c348f93722cb7), "");
    class_9b1c85d3df8e5cba922fb88752a0d746.def("copy", boost::python::pure_virtual(method_pointer_fd8c28a661ec58aba7edb069108b96b4), "");
    if(autowig::Held< struct ::statiskit::MultivariateDispersionEstimation::Estimator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_9b1c85d3df8e5cba922fb88752a0d746 >::Type, autowig::Held< struct ::statiskit::MultivariateDispersionEstimation::Estimator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateDispersionEstimation::Estimator >::Type >();
    }    

}