#include "_core.h"


namespace autowig
{
}


void wrapper_a4463e49d7865a6497ec20612e342cbe()
{

    std::string name_fa414b05d29e5f4ea0b6d6cb5cf81b01 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".statiskit");
    boost::python::object module_fa414b05d29e5f4ea0b6d6cb5cf81b01(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fa414b05d29e5f4ea0b6d6cb5cf81b01.c_str()))));
    boost::python::scope().attr("statiskit") = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    boost::python::scope scope_fa414b05d29e5f4ea0b6d6cb5cf81b01 = module_fa414b05d29e5f4ea0b6d6cb5cf81b01;
    unsigned int  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_138e9caff8345e2baa6d1669f52b82b0)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_nb_parameters;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_abe024e04a2f5e8d8680d516ec57220e)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::ldf;
    double  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_8f98ecf0fb715e5ca3d22968f6e406f2)(class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > const &) const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::pdf;
    class ::std::unique_ptr< struct ::statiskit::UnivariateEvent, struct ::std::default_delete< struct ::statiskit::UnivariateEvent > >  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_83255d2ac98452d7872783b5ce4dbdea)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::simulate;
    class ::std::set< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > >, struct ::std::less< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > >, class ::std::allocator< class ::std::basic_string< char, struct ::std::char_traits< char >, class ::std::allocator< char > > > > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_89f13368506858fb8d058c2faab61596)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_values;
    class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const & (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_85fc76a68b3c58e3b87ac05d423a43f9)() const = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::get_pi;
    void  (::statiskit::UnivariateFrequencyDistribution< ::statiskit::CategoricalUnivariateDistribution >::*method_pointer_6583c7196adb5fbb80c8a38e716c6dff)(class ::Eigen::Matrix< double, -1, 1, 0, -1, 1 > const &) = &::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >::set_pi;
    boost::python::class_< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution >, autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, boost::python::bases< struct ::statiskit::CategoricalUnivariateDistribution >, boost::noncopyable > class_a4463e49d7865a6497ec20612e342cbe("_UnivariateFrequencyDistribution_a4463e49d7865a6497ec20612e342cbe", "", boost::python::no_init);
    class_a4463e49d7865a6497ec20612e342cbe.def("get_nb_parameters", method_pointer_138e9caff8345e2baa6d1669f52b82b0, "");
    class_a4463e49d7865a6497ec20612e342cbe.def("ldf", method_pointer_abe024e04a2f5e8d8680d516ec57220e, "");
    class_a4463e49d7865a6497ec20612e342cbe.def("pdf", method_pointer_8f98ecf0fb715e5ca3d22968f6e406f2, "");
    class_a4463e49d7865a6497ec20612e342cbe.def("simulate", method_pointer_83255d2ac98452d7872783b5ce4dbdea, "");
    class_a4463e49d7865a6497ec20612e342cbe.def("get_values", method_pointer_89f13368506858fb8d058c2faab61596, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a4463e49d7865a6497ec20612e342cbe.def("get_pi", method_pointer_85fc76a68b3c58e3b87ac05d423a43f9, boost::python::return_value_policy< boost::python::return_by_value >(), "");
    class_a4463e49d7865a6497ec20612e342cbe.def("set_pi", method_pointer_6583c7196adb5fbb80c8a38e716c6dff, "");

    if(autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::statiskit::UnivariateFrequencyDistribution< struct ::statiskit::CategoricalUnivariateDistribution > >::Type, autowig::Held< struct ::statiskit::CategoricalUnivariateDistribution >::Type >();
    }

}