#include "_core.h"



namespace autowig
{
    class Wrap_faed70c01c41556a87ba6c938ce7c777 : public ::statiskit::MultivariateSampleSpace, public boost::python::wrapper< struct ::statiskit::MultivariateSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > > (result);
            }
                        
            virtual struct ::statiskit::UnivariateSampleSpace const * get(::statiskit::Index const & param_0) const
            { return this->get_override("get")(param_0); }
                        
            virtual ::statiskit::Index  size() const
            { return this->get_override("size")(); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_faed70c01c41556a87ba6c938ce7c777 const volatile * get_pointer<autowig::Wrap_faed70c01c41556a87ba6c938ce7c777 const volatile >(autowig::Wrap_faed70c01c41556a87ba6c938ce7c777 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateSampleSpace const volatile * get_pointer<struct ::statiskit::MultivariateSampleSpace const volatile >(struct ::statiskit::MultivariateSampleSpace const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_faed70c01c41556a87ba6c938ce7c777()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::MultivariateSampleSpace::*method_pointer_34b56241180a545dbbc2cc99f5f4650e)() const = &::statiskit::MultivariateSampleSpace::size;
    struct ::statiskit::UnivariateSampleSpace const * (::statiskit::MultivariateSampleSpace::*method_pointer_89faf58ffa485b8fafccbd250d1fe75d)(::statiskit::Index const &) const = &::statiskit::MultivariateSampleSpace::get;
    bool  (::statiskit::MultivariateSampleSpace::*method_pointer_817740fe51f5581ca0b50fe3fdee1e78)(struct ::statiskit::MultivariateEvent const *) const = &::statiskit::MultivariateSampleSpace::is_compatible;
    ::statiskit::Index  (::statiskit::MultivariateSampleSpace::*method_pointer_58045e2837b651c18e64ce6ac4e0be9e)() const = &::statiskit::MultivariateSampleSpace::encode;
    class ::Eigen::Matrix< double, 1, -1, 1, 1, -1 >  (::statiskit::MultivariateSampleSpace::*method_pointer_453c7ae8bd33563d9ea0317dca724475)(struct ::statiskit::MultivariateEvent const &) const = &::statiskit::MultivariateSampleSpace::encode;
    class ::std::unique_ptr< struct ::statiskit::MultivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::MultivariateSampleSpace > >  (::statiskit::MultivariateSampleSpace::*method_pointer_40d149de873956828c7a7bb6efb1b291)() const = &::statiskit::MultivariateSampleSpace::copy;
    boost::python::class_< autowig::Wrap_faed70c01c41556a87ba6c938ce7c777, autowig::Held< autowig::Wrap_faed70c01c41556a87ba6c938ce7c777 >::Type, boost::noncopyable > class_faed70c01c41556a87ba6c938ce7c777("MultivariateSampleSpace", "", boost::python::no_init);
    class_faed70c01c41556a87ba6c938ce7c777.def("__len__", boost::python::pure_virtual(method_pointer_34b56241180a545dbbc2cc99f5f4650e), "");
    class_faed70c01c41556a87ba6c938ce7c777.def("get", boost::python::pure_virtual(method_pointer_89faf58ffa485b8fafccbd250d1fe75d), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_faed70c01c41556a87ba6c938ce7c777.def("is_compatible", method_pointer_817740fe51f5581ca0b50fe3fdee1e78, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("encode", method_pointer_58045e2837b651c18e64ce6ac4e0be9e, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("encode", method_pointer_453c7ae8bd33563d9ea0317dca724475, "");
    class_faed70c01c41556a87ba6c938ce7c777.def("copy", boost::python::pure_virtual(method_pointer_40d149de873956828c7a7bb6efb1b291), "");
    if(autowig::Held< struct ::statiskit::MultivariateSampleSpace >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_faed70c01c41556a87ba6c938ce7c777 >::Type, autowig::Held< struct ::statiskit::MultivariateSampleSpace >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateSampleSpace >::Type >();
    }    

}