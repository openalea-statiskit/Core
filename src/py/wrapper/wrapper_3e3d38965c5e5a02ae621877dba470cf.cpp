#include "_core.h"



namespace autowig
{
    class Wrap_3e3d38965c5e5a02ae621877dba470cf : public ::statiskit::SlopeHeuristicSelector, public boost::python::wrapper< struct ::statiskit::SlopeHeuristicSelector >
    {
        public:
            
            virtual class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  copy() const
            {
                 ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > > (result);
            }
                        
            virtual ::statiskit::Index  operator()(class ::statiskit::SlopeHeuristic const & param_0) const
            { return this->get_override("operator()")(param_0); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf const volatile * get_pointer<autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf const volatile >(autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf const volatile *c) { return c; }
    template <> struct ::statiskit::SlopeHeuristicSelector const volatile * get_pointer<struct ::statiskit::SlopeHeuristicSelector const volatile >(struct ::statiskit::SlopeHeuristicSelector const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_3e3d38965c5e5a02ae621877dba470cf()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    ::statiskit::Index  (::statiskit::SlopeHeuristicSelector::*method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e)(class ::statiskit::SlopeHeuristic const &) const = &::statiskit::SlopeHeuristicSelector::operator();
    class ::std::unique_ptr< struct ::statiskit::SlopeHeuristicSelector, struct ::std::default_delete< struct ::statiskit::SlopeHeuristicSelector > >  (::statiskit::SlopeHeuristicSelector::*method_pointer_b99a360f77cf53eb8f24401404499387)() const = &::statiskit::SlopeHeuristicSelector::copy;
    boost::python::class_< autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf, autowig::Held< autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf >::Type, boost::noncopyable > class_3e3d38965c5e5a02ae621877dba470cf("SlopeHeuristicSelector", "", boost::python::no_init);
    class_3e3d38965c5e5a02ae621877dba470cf.def("__call__", boost::python::pure_virtual(method_pointer_df1ee527da8655d4b2d9d5bb1e30ff8e), "");
    class_3e3d38965c5e5a02ae621877dba470cf.def("copy", boost::python::pure_virtual(method_pointer_b99a360f77cf53eb8f24401404499387), "");
    if(autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_3e3d38965c5e5a02ae621877dba470cf >::Type, autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::Type >();
        boost::python::register_ptr_to_python< autowig::Held< struct ::statiskit::SlopeHeuristicSelector >::Type >();
    }    

}