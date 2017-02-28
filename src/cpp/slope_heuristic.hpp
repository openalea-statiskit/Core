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
    template<class D>
        SlopeHeuristicSelection< D >::SlopeHeuristicSelection() : SlopeHeuristic()
        { _models.clear(); }
    
    template<class D>
        SlopeHeuristicSelection< D >::SlopeHeuristicSelection(const std::set< double >& penshapes, const std::vector< double >& scores, const std::shared_ptr< SlopeHeuristicSolver >& solver, const std::shared_ptr< SlopeHeuristicSelector >& selector, const std::vector< std::shared_ptr< D > >& models) : SlopeHeuristic(penshapes, scores, solver, selector)
        {
            if(models.size() != penshapes.size())
            { throw std::runtime_error("invalid"); }
            _models = models;
        }

    template<class D>
        SlopeHeuristicSelection< D >::SlopeHeuristicSelection(const SlopeHeuristicSelection< D >& she) : SlopeHeuristic(she)
        { _models = she._models; }
    
    template<class D>
        const std::shared_ptr< D >& SlopeHeuristicSelection< D >::get_model(const size_t& index) const
        { return _models[index]; }

    template<class D>
        void SlopeHeuristicSelection< D >::add(const double& penshape, const double& score, const std::shared_ptr< D >& model)
        {
            if(boost::math::isfinite(penshape) && boost::math::isfinite(score))
            {
                std::vector< double >::iterator it = std::lower_bound(this->_penshapes.begin(), this->_penshapes.end(), penshape);
                if(it == this->_penshapes.end())
                {
                    this->_penshapes.push_back(penshape);
                    this->_scores.push_back(score);
                    _models.push_back(model);
                }
                else if(*it == penshape)W
                {
                    size_t index = distance(this->_penshapes.begin(), it);
                    if(this->_scores[index] < score)
                    {
                        this->_scores[index] = score;
                        _models[index] = model;
                    }
                }
                else
                {

                    size_t index = distance(this->_penshapes.begin(), it);
                    this->_penshapes.insert(it, penshape);
                    this->_scores.insert(this->_scores.begin() + index, score);
                    _models.insert(_models.begin() + index, model);
                }
            }
        }
}

#endif
