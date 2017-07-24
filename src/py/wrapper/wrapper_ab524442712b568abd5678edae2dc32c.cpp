#include "_core.h"



namespace autowig
{
    class Wrap_ab524442712b568abd5678edae2dc32c : public ::statiskit::SplittingOperator, public boost::python::wrapper< struct ::statiskit::SplittingOperator >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  simulate(unsigned int  param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > ::element_type* result = this->get_override("simulate")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > > (result);
            }
                        
            virtual double  probability(struct ::statiskit::MultivariateEvent const * param_0, bool const & param_1) const
            { return this->get_override("probability")(param_0, param_1); }
                        
            virtual unsigned int  get_nb_parameters() const
            { return this->get_override("get_nb_parameters")(); }
                        
            virtual ::statiskit::Index  get_nb_components() const
            { return this->get_override("get_nb_components")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_ab524442712b568abd5678edae2dc32c const volatile * get_pointer<autowig::Wrap_ab524442712b568abd5678edae2dc32c const volatile >(autowig::Wrap_ab524442712b568abd5678edae2dc32c const volatile *c) { return c; }
    template <> struct ::statiskit::SplittingOperator const volatile * get_pointer<struct ::statiskit::SplittingOperator const volatile >(struct ::statiskit::SplittingOperator const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_ab524442712b568abd5678edae2dc32c()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::SplittingOperator::*method_pointer_d1cab49f6990567fa30d88c43e7bab0d)() const = &::statiskit::SplittingOperator::get_nb_components;
    unsigned int  (::statiskit::SplittingOperator::*method_pointer_d1dabf55a37a5a758dad414bbf896af8)() const = &::statiskit::SplittingOperator::get_nb_parameters;
    double  (::statiskit::SplittingOperator::*method_pointer_1f87f52a31005a5fba59e09e9a1c5ad0)(struct ::statiskit::MultivariateEvent const *, bool const &) const = &::statiskit::SplittingOperator::probability;
    double  (::statiskit::SplittingOperator::*method_pointer_d975667392b25062936997f194070050)(struct ::statiskit::MultivariateData const &) const = &::statiskit::SplittingOperator::loglikelihood;
    class ::std::unique_ptr< struct ::statiskit::MultivariateEvent, struct ::std::default_delete< struct ::statiskit::MultivariateEvent > >  (::statiskit::SplittingOperator::*method_pointer_291dc5efdb0f513c9addda00e11041c6)(unsigned int ) const = &::statiskit::SplittingOperator::simulate;
    class ::std::unique_ptr< struct ::statiskit::SplittingOperator, struct ::std::default_delete< struct ::statiskit::SplittingOperator > >  (::statiskit::SplittingOperator::*method_pointer_eccd9a8a9bb55465ab06d9688c6819ef)() const = &::statiskit::SplittingOperator::copy;
    boost::python::class_< autowig::Wrap_ab524442712b568abd5678edae2dc32c, autowig::Held< autowig::Wrap_ab524442712b568abd5678edae2dc32c >::Type, boost::noncopyable > class_ab524442712b568abd5678edae2dc32c("SplittingOperator", "", boost::python::no_init);
    class_ab524442712b568abd5678edae2dc32c.def("get_nb_components", boost::python::pure_virtual(method_pointer_d1cab49f6990567fa30d88c43e7bab0d), "");
    class_ab524442712b568abd5678edae2dc32c.def("get_nb_parameters", boost::python::pure_virtual(method_pointer_d1dabf55a37a5a758dad414bbf896af8), "");
    class_ab524442712b568abd5678edae2dc32c.def("probability", boost::python::pure_virtual(method_pointer_1f87f52a31005a5fba59e09e9a1c5ad0), "");
    class_ab524442712b568abd5678edae2dc32c.def("loglikelihood", method_pointer_d975667392b25062936997f194070050, "");
    class_ab524442712b568abd5678edae2dc32c.def("simulate", boost::python::pure_virtual(method_pointer_291dc5efdb0f513c9addda00e11041c6), "");
    class_ab524442712b568abd5678edae2dc32c.def("copy", boost::python::pure_virtual(method_pointer_eccd9a8a9bb55465ab06d9688c6819ef), "");
    if(autowig::Held< struct ::statiskit::SplittingOperator >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_ab524442712b568abd5678edae2dc32c >::Type, autowig::Held< struct ::statiskit::SplittingOperator >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SplittingOperator >::Type >();
    }    

}