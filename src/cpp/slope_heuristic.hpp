/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_SLOPE_HEURISTIC_HPP
#define STATISKIT_CORE_SLOPE_HEURISTIC_HPP

namespace statiskit
{
    template<class E>
        SlopeHeuristicSelection< E >::SlopeHeuristicSelection(const typename E::data_type* data) : SlopeHeuristic()
        { 
            _estimated.clear();
            if(data)
            { _data = data->copy().release(); }
            else
            { _data = nullptr; }
        }

    template<class E>
        SlopeHeuristicSelection< E >::SlopeHeuristicSelection(const SlopeHeuristicSelection< E >& she) : SlopeHeuristic(she)
        {
            _estimated = std::vector< typename E::estimated_type* >(she._estimated.size(), nullptr);
            for(size_t index = 0, max_index = _estimated.size(); index < max_index; ++index)
            { _estimated[index] = static_cast< typename E::estimated_type* >(she._estimated[index]->copy().release()); }
            if(she._data)
            { _data = static_cast< typename E::data_type* >(she._data->copy().release()); }
            else
            { _data = nullptr; }
        }

    // template<class E>
    //     SlopeHeuristicSelection< E >::SlopeHeuristicSelection(const std::set< double >& penshapes, const std::vector< double >& scores, const std::shared_ptr< SlopeHeuristicSolver >& solver, const std::shared_ptr< SlopeHeuristicSelector >& selector, const std::vector< std::shared_ptr< E > >& estimated) : SlopeHeuristic(penshapes, scores, solver, selector)
    //     {
    //         if(estimated.size() != penshapes.size())
    //         { throw std::runtime_error("invalid"); }
    //         _estimated = estimated;
    //     }

    template<class E>
        SlopeHeuristicSelection< E >::~SlopeHeuristicSelection()
        { 
            for(size_t index = 0, max_index = _estimated.size(); index < max_index; ++index)
            {
                delete _estimated[index];
                _estimated[index] = nullptr;
            }
            _estimated.clear();
            if(_data)
            {
                delete _data;
                _data = nullptr;
            }
        }
    
    template<class E>
        typename E::estimated_type const * SlopeHeuristicSelection< E >::get_estimated() const
        { 
            typename E::estimated_type* estimated;
            if(this->_selected.size() > 0)
            { estimated = _estimated[this->_selected[(*this->_selector)(*this)]]; }
            return estimated;
        }

    template<class E>
        const typename E::estimated_type* SlopeHeuristicSelection< E >::get_estimated(const size_t& index) const
        { return _estimated[index]; }

    template<class E>
        const typename E::data_type* SlopeHeuristicSelection< E >::get_data() const
        { return _data; }

    template<class E>
        void SlopeHeuristicSelection< E >::add(const double& penshape, const double& score, typename E::estimated_type* estimated)
        {
            if(boost::math::isfinite(penshape) && boost::math::isfinite(score))
            {
                std::vector< double >::iterator it = std::lower_bound(this->_penshapes.begin(), this->_penshapes.end(), penshape);
                if(it == this->_penshapes.end())
                {
                    this->_penshapes.push_back(penshape);
                    this->_scores.push_back(score);
                    _estimated.push_back(estimated);
                }
                else if(*it == penshape)
                {
                    size_t index = distance(this->_penshapes.begin(), it);
                    if(this->_scores[index] < score)
                    {
                        this->_scores[index] = score;
                        _estimated[index] = estimated;
                    }
                }
                else
                {
                    size_t index = distance(this->_penshapes.begin(), it);
                    this->_penshapes.insert(it, penshape);
                    this->_scores.insert(this->_scores.begin() + index, score);
                    _estimated.insert(_estimated.begin() + index, estimated);
                }
            }
        }
}

#endif
