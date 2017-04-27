#include "_core.h"



namespace autowig
{
    class Wrap_88cb53c05b215504b1f0ee0564765af0 : public ::statiskit::MultivariateData, public boost::python::wrapper< struct ::statiskit::MultivariateData >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  extract(::statiskit::Indices const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > > (result);
            }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  extract(::statiskit::Index const & param_0) const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > ::element_type* result = this->get_override("extract")(param_0);
                 return ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > > (result);
            }
                        
            virtual struct ::statiskit::MultivariateSampleSpace const * get_sample_space() const
            { return this->get_override("get_sample_space")(); }
                        
            virtual class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  generator() const
            {
                 ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > ::element_type* result = this->get_override("generator")();
                 return ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > > (result);
            }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 const volatile * get_pointer<autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 const volatile >(autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 const volatile *c) { return c; }
    template <> struct ::statiskit::MultivariateData const volatile * get_pointer<struct ::statiskit::MultivariateData const volatile >(struct ::statiskit::MultivariateData const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_88cb53c05b215504b1f0ee0564765af0()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData::Generator, struct ::std::default_delete< struct ::statiskit::MultivariateData::Generator > >  (::statiskit::MultivariateData::*method_pointer_facf1de3504b5543b1eed987285d8673)() const = &::statiskit::MultivariateData::generator;
    struct ::statiskit::MultivariateSampleSpace const * (::statiskit::MultivariateData::*method_pointer_2da46638257d59e48fa1636c64d254bf)() const = &::statiskit::MultivariateData::get_sample_space;
    class ::std::unique_ptr< struct ::statiskit::UnivariateData, struct ::std::default_delete< struct ::statiskit::UnivariateData > >  (::statiskit::MultivariateData::*method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549)(::statiskit::Index const &) const = &::statiskit::MultivariateData::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_6458b57af188571eb3d4621eb252540b)(::statiskit::Indices const &) const = &::statiskit::MultivariateData::extract;
    class ::std::unique_ptr< struct ::statiskit::MultivariateData, struct ::std::default_delete< struct ::statiskit::MultivariateData > >  (::statiskit::MultivariateData::*method_pointer_772fe48a3d9157a8866c84dd1f9b5675)() const = &::statiskit::MultivariateData::copy;
    double  (::statiskit::MultivariateData::*method_pointer_21b09584f6625e14abe2acdb420c6b08)() const = &::statiskit::MultivariateData::compute_total;
    boost::python::class_< autowig::Wrap_88cb53c05b215504b1f0ee0564765af0, autowig::Held< autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 >::Type, boost::noncopyable > class_88cb53c05b215504b1f0ee0564765af0("MultivariateData", "", boost::python::no_init);
    class_88cb53c05b215504b1f0ee0564765af0.def("__iter__", boost::python::pure_virtual(method_pointer_facf1de3504b5543b1eed987285d8673), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("get_sample_space", boost::python::pure_virtual(method_pointer_2da46638257d59e48fa1636c64d254bf), boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("extract", boost::python::pure_virtual(method_pointer_03ae26ff6e5c56ac9c1e8dc84d177549), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("extract", boost::python::pure_virtual(method_pointer_6458b57af188571eb3d4621eb252540b), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("copy", boost::python::pure_virtual(method_pointer_772fe48a3d9157a8866c84dd1f9b5675), "");
    class_88cb53c05b215504b1f0ee0564765af0.def("compute_total", method_pointer_21b09584f6625e14abe2acdb420c6b08, "");
    if(autowig::Held< struct ::statiskit::MultivariateData >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 >::Type, autowig::Held< struct ::statiskit::MultivariateData >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::MultivariateData >::Type >();
        //boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::MultivariateData >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::MultivariateData, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::MultivariateData >::Type, struct ::statiskit::MultivariateData > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_88cb53c05b215504b1f0ee0564765af0 >::Type, autowig::Held< struct ::statiskit::MultivariateData >::Type >();
    }    

}