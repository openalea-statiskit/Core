/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_BASE_HPP
#define STATISKIT_CORE_BASE_HPP

#include <iomanip>
#include <boost/lexical_cast.hpp>

namespace statiskit
{
    namespace __impl
    {
        template<class T>
            std::string to_string(const T& t, const unsigned int& width)
            {
                std::ostringstream oss;
                if(width == 0)
                { oss << t; }
                else
                { oss << std::setfill('0') << std::setw(width) << t; }
                return oss.str();
            }

        template<class T>
            T normalize(const T& input, const bool& logarithm)
            {
                T output = T(input.begin(), input.end());
                if(logarithm)
                { 
                    typename T::const_iterator it_m = std::max_element(input.begin(), input.end());
                    for(typename T::iterator it_c = output.begin(), it_e = output.end(); it_c != it_e; ++it_c)
                    {
                        *it_c -= *it_m;
                        *it_c = exp(*it_c);
                    }
                }
                typename T::value_type sum = 0.;
                for(typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it)
                {
                    if(*it < 0)
                    { throw std::exception(); }
                    sum += *it;
                }
                for(typename T::iterator it = output.begin(), it_end = output.end(); it != it_end; ++it)
                { *it /= sum; }
                return output;
            } 

        template<class InputIterator, class OutputIterator, class SubsetIterator> void subset(InputIterator input_first, InputIterator input_last, OutputIterator result, SubsetIterator keep_first, SubsetIterator keep_last)
        {
            InputIterator input_current = input_first;
            while(input_first != input_last && keep_first != keep_last)
            {
                while(distance(input_first, input_current) != *keep_first)
                { ++input_current; }
                *result = *input_current;
                ++result;
                ++input_current;
                ++keep_first;
            }
        }
    }

    template<typename T, typename L>
        lower_bound_error::lower_bound_error(const std::string& parameter, const T& value, const L& lower, const bool& strict) : parameter_error(parameter, __impl::to_string(value) +  "not " + std::string("strictly", 0, 8*strict) + " superior to " + __impl::to_string(lower))
        {}

    template<typename T, typename U>
        upper_bound_error::upper_bound_error(const std::string& parameter, const T& value, const U& upper, const bool& strict) : parameter_error(parameter, __impl::to_string(value) + " not " + std::string("strictly", 0, 8*strict) + " inferior to " + __impl::to_string(upper))
        {}

    template<typename T, typename L, typename U>
        interval_error::interval_error(const std::string& parameter, const T& value, const L& lower, const U& upper, const std::pair<bool, bool>& strict) : parameter_error(parameter, __impl::to_string(value) + " not " + std::string("strictly", 0, 8*strict.first) + " superior to " + __impl::to_string(lower) + " and " + std::string("strictly", 0, 8*strict.second) + " inferior to " + __impl::to_string(upper))
        {}

    template<typename T>
        duplicated_value_error::duplicated_value_error(const std::string& parameter, const T& value) : parameter_error(parameter, "contains multiples " + __impl::to_string(value))
        {}
}

#if !defined(_WIN32) && !defined(WIN32)
namespace std
{
    template<typename T, typename... Args>
        std::unique_ptr<T> make_unique(Args&&... args)
        { return std::unique_ptr<T>(new T(std::forward<Args>(args)...)); }
}
#endif

#endif
