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
    namespace __impl
    {
        double reldiff(const double& prev, const double& curr)
        { return fabs(curr-prev) / fabs(prev); }

        double reldiff(const Eigen::VectorXd& prev, const Eigen::VectorXd& curr)
        { return (curr-prev).norm() / prev.norm(); }

        double reldiff(const Eigen::MatrixXd& prev, const Eigen::MatrixXd& curr)
        { return (curr-prev).norm() / prev.norm(); }

        boost::mt19937 _random_generator = boost::mt19937(0);

        boost::mt19937& get_random_generator()
        { return _random_generator; }
    }

    void set_seed()
    { __impl::_random_generator.seed(); }

    void set_seed(const Index& seed)
    { __impl::_random_generator.seed(seed); }

    not_implemented_error::not_implemented_error(const std::string& function) : std::runtime_error("'" + function + "' is not yet implemented")
    {}

    proxy_connection_error::proxy_connection_error() : std::exception()
    {}

    parameter_error::parameter_error(const std::string& parameter, const std::string& error) : std::runtime_error("'" + parameter + "' parameter: " + error)
    {}

    member_error::member_error(const std::string& member, const std::string& error) : std::runtime_error("'" + member + "' member: " + error)
    {}

    size_error::size_error(const std::string& parameter, const Index& self, const Index& other, const size_type& size) : parameter_error(parameter, "size of " + __impl::to_string(self) + " instead of " + __impl::to_string(other))
    {}

    nullptr_error::nullptr_error(const std::string& parameter) : parameter_error(parameter, "cannot be set to nullptr")
    {}
}
