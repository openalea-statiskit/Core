#include "_core.h"


#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_0f631b8bbb065d39a1378915b306a904 const volatile * get_pointer<autowig::Wrap_0f631b8bbb065d39a1378915b306a904 const volatile >(autowig::Wrap_0f631b8bbb065d39a1378915b306a904 const volatile *c) { return c; }
}
    #endif
#endif

namespace autowig
{
    class Wrap_0f631b8bbb065d39a1378915b306a904 : public ::statiskit::UnivariateSampleSpace, public boost::python::wrapper< struct ::statiskit::UnivariateSampleSpace >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > > (result);
            }
            virtual bool  is_compatible(struct ::statiskit::UnivariateEvent const * param_0) const
            { return this->get_override("is_compatible")(param_0); }
            virtual enum ::statiskit::ordering_type  get_ordering() const
            { return this->get_override("get_ordering")(); }
            virtual enum ::statiskit::outcome_type  get_outcome() const
            { return this->get_override("get_outcome")(); }

        protected:
            

        private:
            

    };

}


void wrapper_0f631b8bbb065d39a1378915b306a904()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    enum ::statiskit::outcome_type  (::statiskit::UnivariateSampleSpace::*method_pointer_2875d281654d56729645a2393c5d7ae3)() const = &::statiskit::UnivariateSampleSpace::get_outcome;
    enum ::statiskit::ordering_type  (::statiskit::UnivariateSampleSpace::*method_pointer_a5c2538f602650ca89c7d30ba94848b9)() const = &::statiskit::UnivariateSampleSpace::get_ordering;
    bool  (::statiskit::UnivariateSampleSpace::*method_pointer_aabfe8c337085d58a1ab73066415dd66)(struct ::statiskit::UnivariateEvent const *) const = &::statiskit::UnivariateSampleSpace::is_compatible;
    class ::std::unique_ptr< struct ::statiskit::UnivariateSampleSpace, struct ::std::default_delete< struct ::statiskit::UnivariateSampleSpace > >  (::statiskit::UnivariateSampleSpace::*method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360)() const = &::statiskit::UnivariateSampleSpace::copy;
    boost::python::class_< autowig::Wrap_0f631b8bbb065d39a1378915b306a904, autowig::Held< autowig::Wrap_0f631b8bbb065d39a1378915b306a904 >::Type, boost::noncopyable > class_0f631b8bbb065d39a1378915b306a904("UnivariateSampleSpace", "", boost::python::no_init);
    class_0f631b8bbb065d39a1378915b306a904.def("get_outcome", boost::python::pure_virtual(method_pointer_2875d281654d56729645a2393c5d7ae3), "");
    class_0f631b8bbb065d39a1378915b306a904.def("get_ordering", boost::python::pure_virtual(method_pointer_a5c2538f602650ca89c7d30ba94848b9), "");
    class_0f631b8bbb065d39a1378915b306a904.def("is_compatible", boost::python::pure_virtual(method_pointer_aabfe8c337085d58a1ab73066415dd66), "");
    class_0f631b8bbb065d39a1378915b306a904.def("copy", boost::python::pure_virtual(method_pointer_a90fb1d3b5f75154bbd9fec1e0bee360), "");
    if(autowig::Held< struct ::statiskit::UnivariateSampleSpace >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type, boost::python::objects::make_ptr_instance< struct ::statiskit::UnivariateSampleSpace, boost::python::objects::pointer_holder< autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type, struct ::statiskit::UnivariateSampleSpace > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_0f631b8bbb065d39a1378915b306a904 >::Type, autowig::Held< struct ::statiskit::UnivariateSampleSpace >::Type >();
    }    

}