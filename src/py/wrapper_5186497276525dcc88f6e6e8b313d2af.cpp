#include "_core.h"



namespace autowig
{
    class Wrap_5186497276525dcc88f6e6e8b313d2af : public ::statiskit::SlopeHeuristicSolver, public boost::python::wrapper< class ::statiskit::SlopeHeuristicSolver >
    {
        public:
            
            virtual class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  copy() const
            {
                 ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > ::element_type* result = this->get_override("copy")();
                 return ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > > (result);
            }
                        
            virtual class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  operator()(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const & param_0, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & param_1) const
            { return this->get_override("operator()")(param_0, param_1); }
                        

        protected:
            

        private:
            

    };

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> autowig::Wrap_5186497276525dcc88f6e6e8b313d2af const volatile * get_pointer<autowig::Wrap_5186497276525dcc88f6e6e8b313d2af const volatile >(autowig::Wrap_5186497276525dcc88f6e6e8b313d2af const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_5186497276525dcc88f6e6e8b313d2af()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 >  (::statiskit::SlopeHeuristicSolver::*method_pointer_d3975f18eb9652cea17c1ce078741a5e)(class ::Eigen::Matrix< double, -1, -1, 0, -1, -1 > const &, class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) const = &::statiskit::SlopeHeuristicSolver::operator();
    enum ::statiskit::linalg::solver_type  (::statiskit::SlopeHeuristicSolver::*method_pointer_e2027001cec65258ab1966e1325b44c2)() const = &::statiskit::SlopeHeuristicSolver::get_solver;
    void  (::statiskit::SlopeHeuristicSolver::*method_pointer_c07c88e004175e6dba65e49fe6738a69)(enum ::statiskit::linalg::solver_type const &) = &::statiskit::SlopeHeuristicSolver::set_solver;
    class ::std::unique_ptr< class ::statiskit::SlopeHeuristicSolver, struct ::std::default_delete< class ::statiskit::SlopeHeuristicSolver > >  (::statiskit::SlopeHeuristicSolver::*method_pointer_c193a50a08b25a91813276a3c5fd5c33)() const = &::statiskit::SlopeHeuristicSolver::copy;
    boost::python::class_< autowig::Wrap_5186497276525dcc88f6e6e8b313d2af, autowig::Held< autowig::Wrap_5186497276525dcc88f6e6e8b313d2af >::Type, boost::noncopyable > class_5186497276525dcc88f6e6e8b313d2af("SlopeHeuristicSolver", "", boost::python::no_init);
    class_5186497276525dcc88f6e6e8b313d2af.def("__call__", boost::python::pure_virtual(method_pointer_d3975f18eb9652cea17c1ce078741a5e), "");
    class_5186497276525dcc88f6e6e8b313d2af.def("get_solver", method_pointer_e2027001cec65258ab1966e1325b44c2, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("set_solver", method_pointer_c07c88e004175e6dba65e49fe6738a69, "");
    class_5186497276525dcc88f6e6e8b313d2af.def("copy", boost::python::pure_virtual(method_pointer_c193a50a08b25a91813276a3c5fd5c33), "");
    if(autowig::Held< class ::statiskit::SlopeHeuristicSolver >::is_class)
    {
        boost::python::objects::class_value_wrapper< autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type, boost::python::objects::make_ptr_instance< class ::statiskit::SlopeHeuristicSolver, boost::python::objects::pointer_holder< autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type, class ::statiskit::SlopeHeuristicSolver > > >();
        //boost::python::implicitly_convertible< autowig::Held< autowig::Wrap_5186497276525dcc88f6e6e8b313d2af >::Type, autowig::Held< class ::statiskit::SlopeHeuristicSolver >::Type >();
    }    

}