/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "predictor.h"

namespace statiskit
{
    ScalarPredictor::ScalarPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space)
    {
        _sample_space = sample_space;
        _alpha = 0.;
        _delta = arma::zeros< arma::colvec >(sample_space->encode());
    }

    ScalarPredictor::~ScalarPredictor()
    {}

    ScalarPredictor::ScalarPredictor(const ScalarPredictor& predictor)
    {
        _sample_space = predictor._sample_space;
        _alpha = predictor._alpha;
        _delta = predictor._delta;
    }
     
    double ScalarPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + (_sample_space->encode(event) * _delta).eval().at(0); }

    const std::shared_ptr< MultivariateSampleSpace >& ScalarPredictor::get_sample_space() const
    { return _sample_space; }

    const double& ScalarPredictor::get_alpha() const
    { return _alpha; }

    void ScalarPredictor::set_alpha(const double& alpha)
    { _alpha = alpha; }

    size_t ScalarPredictor::size() const
    { return _delta.n_rows; }

    const double& ScalarPredictor::get_delta(const size_t& index) const
    { return _delta(index); }

    void ScalarPredictor::set_delta(const size_t& index, const double& delta)
    { _delta(index) = delta; }

    
    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const arma::mat& constraint) : ScalarPredictor(sample_space)
    { 
    	if(constraint.n_rows != sample_space->encode())
    	{ throw statiskit::size_error("constraint", constraint.n_rows, sample_space->encode()); }    
        _delta = arma::zeros< arma::colvec >(constraint.n_cols);    
    	_constraint = constraint; 
    }

    ConstrainedScalarPredictor::~ConstrainedScalarPredictor()
    {}

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor) : ScalarPredictor(predictor)
    { _constraint = predictor._constraint; }
     
    double ConstrainedScalarPredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + (_sample_space->encode(event) * _constraint * _delta).eval().at(0); }    
}
