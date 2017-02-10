/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_BASE_H
#define STATISKIT_CORE_BASE_H

#include <boost/random/mersenne_twister.hpp>
#include <boost/math/constants/constants.hpp>
#include <type_traits>
#include <map>
#include <exception>
#include <assert.h>
#include <iostream>
#include <memory>

#if defined WIN32 || defined _WIN32 || defined __CYGWIN__
  #ifdef LIBSTATISKIT_CORE
    #ifdef __GNUC__
      #define STATISKIT_CORE_API __attribute__ ((dllexport))
    #else
      #define STATISKIT_CORE_API __declspec(dllexport)
    #endif
  #else
    #ifdef __GNUC__
      #define STATISKIT_CORE_API __attribute__ ((dllimport))
    #else
      #define STATISKIT_CORE_API __declspec(dllimport)
    #endif
  #endif
#else
  #if __GNUC__ >= 4
    #define STATISKIT_CORE_API __attribute__ ((visibility ("default")))
  #else
    #define STATISKIT_CORE_API
  #endif
#endif

namespace statiskit
{
    struct STATISKIT_CORE_API not_implemented_error : std::exception
    { not_implemented_error(); };

    struct STATISKIT_CORE_API proxy_connection_error : std::exception
    { proxy_connection_error(); };

    struct STATISKIT_CORE_API parameter_error : std::runtime_error
    { parameter_error(const std::string& parameter, const std::string& error); };

    struct STATISKIT_CORE_API size_error : parameter_error
    {
        enum size_type {
            inferior,
            equal,
            superior,
        };

        size_error(const std::string& parameter, const size_t& self, const size_t& other, const size_type& size=size_type::equal);
    };

    struct STATISKIT_CORE_API nullptr_error : parameter_error
    { nullptr_error(const std::string& parameter); };

    struct STATISKIT_CORE_API lower_bound_error : parameter_error
    { template<typename T, typename L> lower_bound_error(const std::string& parameter, const T& value, const L& lower, const bool& strict); };

    struct STATISKIT_CORE_API upper_bound_error : parameter_error
    { template<typename T, typename U> upper_bound_error(const std::string& parameter, const T& value, const U& upper, const bool& strict); };

    struct STATISKIT_CORE_API interval_error : parameter_error
    { template<typename T, typename L, typename U> interval_error(const std::string& parameter, const T& value, const L& lower, const U& upper, const std::pair<bool, bool>& strict); };

    struct STATISKIT_CORE_API duplicated_value_error : parameter_error
    { template<typename T> duplicated_value_error(const std::string& parameter, const T& value); };
    
    /** Get the random generator
     * 
     * The random generator used is the <a href="http://www.boost.org/doc/libs/1_60_0/doc/html/boost/random/mt19937.html">Mersenne Twister</a> random generator of the Boost.Random library
     */
    STATISKIT_CORE_API boost::mt19937& get_random_generator();

    STATISKIT_CORE_API double get_mindiff();

    STATISKIT_CORE_API unsigned int get_minits();

    STATISKIT_CORE_API unsigned int get_maxits();

    //typedef std::float_round_style round_type;

    /*template<class N, typename O> struct Converter
    { N operator() (const O& o) const; };
    
    template<typename N> struct Converter<N, std::string>
    { N operator() (const std::string& o) const; };
    
    template<typename O> struct Converter<std::string, O>
    { std::string operator() (const O& o) const; };*/
    
    template<class T> std::string to_string(const T& t, const unsigned int& width=0);

    template<typename T> T normalize(const T& input, const bool& logarithm=false);

    template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last);

    /*template <typename T> struct empty_delete
    {
        empty_delete() noexcept;
        
        template <typename U> empty_delete(const empty_delete<U>&, typename std::enable_if< std::is_convertible<U*, T*>::value >::type* = nullptr) noexcept;
        
        void operator()(T* const) const noexcept;
    };

    template< class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator< std::pair<const Key,T> > > class default_map : public std::map< Key, T, Compare, Alloc >
    {
        public:
            default_map();
            default_map(const T& _default);
            default_map(const default_map< Key, T, Compare, Alloc >& map);

            virtual const T& operator[] (const Key& key) const;
            virtual T& operator[] (const Key& key);

            const T& get_default() const;
            void set_default(const T& _default);

        protected:
            T __default;
    };*/

    /*enum solver_type 
    {
        partialPivLu,
        fullPivLu,
        householderQr,
        colPivHouseholderQr,
        fullPivHouseholderQr,
        LLT,
        LDLT,
        jacobiSvd
    };

    Eigen::VectorXd solve();*/
}

namespace std
{

    #if defined(_WIN32) || defined(WIN32)

    template<class Type>
        struct default_delete
        {};

    template<class Type, class Del = default_delete< Type > >
        struct unique_ptr : auto_ptr< Type > 
        {
            unique_ptr(Type* p = NULL) : auto_ptr< Type >(p) {}
            unique_ptr(unique_ptr< Type, Del >& r) : auto_ptr< Type >(r) {}
            template<class OType, class ODel > unique_ptr(unique_ptr< OType, ODel > & r) : auto_ptr< Type >(r) {}

            operator bool() const { return (bool)(this->get()); }
        };

    template <typename T> inline unique_ptr< T > make_unique() { return unique_ptr< T >(new T()) ; }
    template <typename T, typename T_0> inline unique_ptr< T > make_unique(const T_0 & p_0) { return unique_ptr< T >(new T(p_0)) ; }
    template <typename T, typename T_0, typename T_1> inline unique_ptr< T > make_unique(const T_0 & p_0, const T_1 & p_1) { return unique_ptr< T >(new T(p_0, p_1)) ; }

    #else

    template<typename T, typename... Args> unique_ptr<T> make_unique(Args&&... args);

    #endif
}

#include "base.hpp"
#endif
