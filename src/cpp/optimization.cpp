/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "optimization.h"

namespace statiskit
{
    Optimization::Optimization()
    {
        _mindiff = 1e-5;
        _minits = 10e2;
        _maxits = 10e6;
    }

    Optimization::Optimization(const Optimization& optimization)
    {
        _mindiff = optimization._mindiff;
        _maxits = optimization._maxits;
    }

    bool Optimization::run(const unsigned int& iteration, const double& prev, const double& curr) const
    { 
        bool status = true;
        if(!boost::math::isfinite(curr) || curr < prev || iteration > _maxits)
        { status = false; }
        else if(fabs(curr-prev) < _mindiff * fabs(prev))
        { status = false; }
        return status;
    }

    const double& Optimization::get_mindiff() const
    { return _mindiff; }
    
    void Optimization::set_mindiff(const double& mindiff)
    { _mindiff = mindiff; }

    unsigned int Optimization::get_minits() const
    { return _minits; }
    
    void Optimization::set_minits(const unsigned int& minits)
    { _minits = minits; }

    unsigned int Optimization::get_maxits() const
    { return _maxits; }

    void Optimization::set_maxits(const unsigned int& maxits)
    { _maxits = maxits; }
}
