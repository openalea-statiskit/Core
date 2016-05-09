/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include <string>
#include <iostream>
#include <limits>
#include <memory>

#include "base.h"

namespace statiskit
{
    not_implemented_error::not_implemented_error() : std::exception()
    {}

    proxy_connection_error::proxy_connection_error() : std::exception()
    {}

    parameter_error::parameter_error(const std::string& parameter, const std::string& error) : std::runtime_error("'" + parameter + "' parameter: " + error)
    {}

    size_error::size_error(const std::string& parameter, const size_t& self, const size_t& other, const size_type& size) : parameter_error(parameter, "size of " + to_string(self) + " instead of " + to_string(other))
    {}

    nullptr_error::nullptr_error(const std::string& parameter) : parameter_error(parameter, "cannot be set to nullptr")
    {}
    
    boost::mt19937 _random_generator = boost::mt19937(0);

    boost::mt19937& get_random_generator()
    { return _random_generator; }

    double get_mindiff()
    { return 1e-4; }

    unsigned int get_maxits()
    { return 1e6; }

    unsigned int get_minits()
    { return 1e2; }
}
