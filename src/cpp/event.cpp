/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "event.h"

namespace statiskit
{
    UnivariateEvent::~UnivariateEvent()
    {}

    template<>
    ContinuousEvent::value_type IntervalCensoredEvent< ContinuousEvent >::get_center() const
    { return _bounds.first + get_range()/2.; }
    
    template<>
    DiscreteEvent::value_type IntervalCensoredEvent< DiscreteEvent >::get_center() const
    {
        double range = get_range()/2.;
        int center = _bounds.first + int(range);
        if(range - int(range) > 0.5)
        { ++center; }
        return center; 
    }

    outcome_type CategoricalEvent::get_outcome() const
    { return CATEGORICAL; }

    outcome_type DiscreteEvent::get_outcome() const
    { return DISCRETE; }

    outcome_type ContinuousEvent::get_outcome() const
    { return CONTINUOUS; }
}
