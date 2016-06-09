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
        alpha = 0.;
        _delta = arma::zeros< arma::colvec >(sample_space->encode());
    }

    ScalarPredictor::~ScalarPredictor()
    {}

    ScalarPredictor::ScalarPredictor(const ScalarPredictor& predictor)
    {
        _sample_space = predictor._sample_space;
        alpha = predictor.alpha;
        _delta = predictor._delta;
    }
     
    double ScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + (_sample_space->encode(event) * _delta).eval().at(0); }

    const std::shared_ptr< MultivariateSampleSpace >& ScalarPredictor::get_sample_space() const
    { return _sample_space; }

	const arma::colvec& ScalarPredictor::get_delta() const
	{ return _delta; }
	
	void ScalarPredictor::set_delta(const arma::colvec& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }
		_delta = delta;
	}

    
    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const arma::mat& constraint) : ScalarPredictor(sample_space)
    { 
    	if(constraint.n_rows != sample_space->encode())
    	{ throw statiskit::size_error("constraint", constraint.n_rows, sample_space->encode()); } 
    	if(constraint.n_cols <= sample_space->encode())
    	{ throw statiskit::size_error("constraint", constraint.n_cols, sample_space->encode(), statiskit::size_error::size_type::inferior); }     	   
        _delta = arma::zeros< arma::colvec >(constraint.n_cols);    
    	_constraint = constraint; 
    }

    ConstrainedScalarPredictor::~ConstrainedScalarPredictor()
    {}

    ConstrainedScalarPredictor::ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor) : ScalarPredictor(predictor)
    { _constraint = predictor._constraint; }
     
    double ConstrainedScalarPredictor::operator() (const MultivariateEvent& event) const
    { return alpha + (_sample_space->encode(event) * _constraint * _delta).eval().at(0); }
    
    const arma::mat& ConstrainedScalarPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedScalarPredictor::set_constraint(const arma::mat& constraint)
	{
		if(constraint.n_rows != _constraint.n_rows)
		{ throw statiskit::size_error("constraint", constraint.n_rows, _constraint.n_rows); }
		if(constraint.n_cols != _constraint.n_cols)
		{ throw statiskit::size_error("constraint", constraint.n_cols, _constraint.n_cols); }			
		_constraint = constraint;
	}
	
	
    VectorPredictor::VectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols)
    {
    	_sample_space = sample_space;
    	_alpha = arma::zeros< arma::colvec >(nb_cols);     	
    }
  
    VectorPredictor::~VectorPredictor()
    {} 
    
    VectorPredictor::VectorPredictor(const VectorPredictor& predictor)
    {
    	_sample_space = predictor._sample_space; 
    	_alpha = predictor._alpha;
    }
    
    const std::shared_ptr< MultivariateSampleSpace >& VectorPredictor::get_sample_space() const
    { return _sample_space; }
    
	
	const arma::colvec& VectorPredictor::get_alpha() const
	{ return _alpha; }
	
	void VectorPredictor::set_alpha(const arma::colvec& alpha)
	{
		if(alpha.n_rows != _alpha.n_rows)
		{ throw statiskit::size_error("alpha", alpha.n_rows, _alpha.n_rows); }
		_alpha = alpha;
	}    


    CompletePredictor::CompletePredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols) : VectorPredictor(sample_space, nb_cols)
    { _delta = arma::zeros< arma::mat >(sample_space->encode(), _alpha.n_cols); }
    
    CompletePredictor::~CompletePredictor()
    {}
    
    CompletePredictor::CompletePredictor(const CompletePredictor& predictor) : VectorPredictor(predictor)
    { _delta = predictor._delta; }

    arma::colvec CompletePredictor::operator() (const MultivariateEvent& event) const
    { return _alpha + _sample_space->encode(event) * _delta; }
            
    void CompletePredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows * _delta.n_cols)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows * _delta.n_cols); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		for(size_t j=0; j<_alpha.n_rows; ++j)
		{ _delta.submat(0, j, _alpha.n_rows -1, j) = beta.subvec(_alpha.n_rows -1 +j, _alpha.n_rows -1 +j + _delta.n_rows); }
	}
			
	const arma::mat& CompletePredictor::get_delta() const
	{ return _delta; }
	
	void CompletePredictor::set_delta(const arma::mat& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }
		if(delta.n_cols != _delta.n_cols)
		{ throw statiskit::size_error("delta", delta.n_cols, _delta.n_cols); }		
		_delta = delta;
	}
	

    ProportionalPredictor::ProportionalPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols) : VectorPredictor(sample_space, nb_cols)
    { _delta = arma::zeros< arma::colvec >(sample_space->encode()); }
    
    ProportionalPredictor::~ProportionalPredictor()
    {}
    
    ProportionalPredictor::ProportionalPredictor(const ProportionalPredictor& predictor) : VectorPredictor(predictor)
    { _delta = predictor._delta; }

    arma::colvec ProportionalPredictor::operator() (const MultivariateEvent& event) const
    {
    	arma::colvec constant(_alpha.n_rows, arma::fill::ones);   
    	return _alpha + (_sample_space->encode(event) * _delta).eval().at(0) * constant; 
    }
            
    void ProportionalPredictor::set_beta(const arma::colvec& beta)
	{
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		_delta = beta.subvec(_alpha.n_rows -1, _alpha.n_rows -1 + _delta.n_rows);
	}
			
	const arma::colvec& ProportionalPredictor::get_delta() const
	{ return _delta; }
	
	void ProportionalPredictor::set_delta(const arma::colvec& delta)
	{
		if(delta.n_rows != _delta.n_rows)
		{ throw statiskit::size_error("delta", delta.n_rows, _delta.n_rows); }		
		_delta = delta;
	}
	
	    
    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols, const arma::mat& constraint) : VectorPredictor(sample_space, nb_cols)
    { 
    	if(constraint.n_rows != sample_space->encode() * nb_cols)
    	{ throw statiskit::size_error("constraint", constraint.n_rows, sample_space->encode() * nb_cols); }    
    	if(constraint.n_cols <= sample_space->encode() * nb_cols)
    	{ throw statiskit::size_error("constraint", constraint.n_cols, sample_space->encode() * nb_cols, statiskit::size_error::size_type::inferior); }     	
        _delta = arma::zeros< arma::colvec >(constraint.n_cols);    
    	_constraint = constraint; 
    }

    ConstrainedVectorPredictor::~ConstrainedVectorPredictor()
    {}

    ConstrainedVectorPredictor::ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor) : VectorPredictor(predictor)
    {
     	_delta = predictor._delta;
    	_constraint = predictor._constraint; 
    }
     
    arma::colvec ConstrainedVectorPredictor::operator() (const MultivariateEvent& event) const
    {
		arma::mat identity(_alpha.n_rows, _alpha.n_rows, arma::fill::eye);
		return _alpha + kron(identity, _sample_space->encode(event)) * _constraint * _delta;
	}
	
    void ConstrainedVectorPredictor::set_beta(const arma::colvec& beta)
    {
		if(beta.n_rows != _alpha.n_rows + _delta.n_rows)
		{ throw statiskit::size_error("beta", beta.n_rows,  _alpha.n_rows + _delta.n_rows); }
		_alpha = beta.subvec(0, _alpha.n_rows -1);
		_delta = beta.subvec(_alpha.n_rows, _alpha.n_rows + _delta.n_rows);
    }
    
    const arma::mat& ConstrainedVectorPredictor::get_constraint() const
    { return _constraint; }
    
	void ConstrainedVectorPredictor::set_constraint(const arma::mat& constraint)
	{
		if(constraint.n_rows != _constraint.n_rows)
		{ throw statiskit::size_error("constraint", constraint.n_rows, _constraint.n_rows); }
		if(constraint.n_cols != _constraint.n_cols)
		{ throw statiskit::size_error("constraint", constraint.n_cols, _constraint.n_cols); }			
		_constraint = constraint;
	}
	
}
