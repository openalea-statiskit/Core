/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_MOMENT_HPP
#define STATISKIT_CORE_MOMENT_HPP

namespace statiskit
{
    /*template<class E>
        double NaturalMomentEstimator::get_value(const UnivariateData* data, const size_t& index, const bool& na_omit) const
        {
            double value;
            if(index < data->size())
            { value = get_value< E >(data->get_event(index).get(), 0, na_omit); }
            else
            { value = 0; }
            return value;
        }

    template<class E>
        double NaturalMomentEstimator::get_value(const UnivariateData* data, const size_t& index, const double& mean, const bool& na_omit) const
        {
            double value;
            if(index < data->size())
            { value = get_value< E >(data->get_event(index).get(), mean, na_omit); }
            else
            { value = mean; }
            return value;
        }

    template<class E>
        double NaturalMomentEstimator::get_value(const UnivariateEvent* event, const double& completion, const bool& na_omit) const
        {
            double value;
            if(event)
            {
                if(event->get_event() == ELEMENTARY)
                { value = static_cast< const ElementaryEvent< E >* >(event)->get_value(); }
                else
                { value = completion; }
            }
            else
            { value = completion; }
            return value;
        }*/
}

#endif
