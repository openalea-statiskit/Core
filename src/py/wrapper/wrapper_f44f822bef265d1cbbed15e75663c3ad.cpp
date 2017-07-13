#include "_core.h"



namespace autowig
{
    class Wrap_f44f822bef265d1cbbed15e75663c3ad : public ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator >, public boost::python::wrapper< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > >  operator()(::statiskit::SplittingOperatorEstimation::data_type const & param_0, bool const & param_1) const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > ::element_type* result = this->get_override("operator()")(param_0, param_1);
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperatorEstimation, struct ::std::default_delete< struct ::statiskit::SplittingOperatorEstimation > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad const volatile * get_pointer<autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad const volatile >(autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad const volatile *c) { return c; }
    template <> struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile * get_pointer<struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile >(struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_f44f822bef265d1cbbed15e75663c3ad()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::class_< autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad, autowig::Held< autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad >::Type, boost::python::bases< struct ::statiskit::SplittingOperatorEstimation::Estimator >, boost::noncopyable > class_f44f822bef265d1cbbed15e75663c3ad("_PolymorphicCopy_f44f822bef265d1cbbed15e75663c3ad", "", boost::python::no_init);

    if(autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_f44f822bef265d1cbbed15e75663c3ad >::Type, autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type >();
        boost::python::implicitly_convertible< autowig::Held< struct ::statiskit::PolymorphicCopy< struct ::statiskit::SplittingOperatorEstimation::Estimator, struct ::statiskit::MultinomialSplittingOperatorEstimation::Estimator, struct ::statiskit::SplittingOperatorEstimation::Estimator > >::Type, autowig::Held< struct ::statiskit::SplittingOperatorEstimation::Estimator >::Type >();
    }

}