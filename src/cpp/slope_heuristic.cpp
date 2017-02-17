/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#include "slope_heuristic.h"

namespace statiskit
{
    Eigen::VectorXd SlopeHeuristicOLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    { return (X.transpose() * X).llt().solve(X.transpose() * y); }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver()
    { 
        _epsilon = get_epsilon();
        _maxits = 10;//get_maxits();
    }

    SlopeHeuristicIWLSSolver::SlopeHeuristicIWLSSolver(const SlopeHeuristicIWLSSolver& shs)
    { 
        _epsilon = shs._epsilon;
        _maxits = shs._maxits;
    }

    Eigen::VectorXd SlopeHeuristicIWLSSolver::operator() (const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::MatrixXd W = (Eigen::VectorXd::Ones(y.rows())).asDiagonal();
        Eigen::VectorXd bp, bc = (X.transpose() * X).llt().solve(X.transpose() * y);
        unsigned int its = 0;
        do
        {
            bp = bc;
            update(bp, W, X, y);
            bc = (X.transpose() * W * X).llt().solve(X.transpose() * W * y);
            ++its;
        } while(((bc - bp).cwiseQuotient(bp)).squaredNorm() > _epsilon && its < _maxits);
        return bc;
    }
    
    const double& SlopeHeuristicIWLSSolver::get_epsilon() const
    { return _epsilon; }

    void SlopeHeuristicIWLSSolver::set_epsilon(const double& epsilon)
    { _epsilon = epsilon; }
    
    const unsigned int& SlopeHeuristicIWLSSolver::get_maxits() const
    { return _maxits; }

    void SlopeHeuristicIWLSSolver::set_maxits(const unsigned int& maxits)
    { _maxits = maxits; }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver() : SlopeHeuristicIWLSSolver()
    { _k = 1.345; }

    SlopeHeuristicHuberSolver::SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs) : SlopeHeuristicIWLSSolver(shs)
    { _k = shs._k; }

    const double& SlopeHeuristicHuberSolver::get_k() const
    { return _k; }

    void SlopeHeuristicHuberSolver::set_k(const double& k)
    { _k = k; }

    void SlopeHeuristicHuberSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = _k * errors.squaredNorm() / sqrt(y.size() - 1);
        errors = errors.cwiseAbs();
        for(size_t index = 0, max_index = y.size(); index < max_index; ++index)
        {
            if(errors(index) <= sigma)
            { W(index, index) = 1; }
            else
            { W(index, index) = sigma / errors(index); }
        }
    }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver() : SlopeHeuristicIWLSSolver()
    { _k = 4.685; }

    SlopeHeuristicBiSquareSolver::SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs) : SlopeHeuristicIWLSSolver(shs)
    { _k = shs._k; }

    const double& SlopeHeuristicBiSquareSolver::get_k() const
    { return _k; }

    void SlopeHeuristicBiSquareSolver::set_k(const double& k)
    { _k = k; }

    void SlopeHeuristicBiSquareSolver::update(const Eigen::VectorXd& beta, Eigen::MatrixXd& W, const Eigen::MatrixXd& X, const Eigen::VectorXd& y) const
    {
        Eigen::VectorXd errors = y - X * beta;
        double sigma = _k * errors.squaredNorm() / sqrt(y.size() - 1);
        errors = errors.cwiseAbs();
        for(size_t index = 0, max_index = y.size(); index < max_index; ++index)
        {
            if(errors(index) <= sigma)
            { W(index, index) = pow(1-pow(errors(index) / sigma, 2), 2); }
            else
            { W(index, index) = 0.; }
        }
    }

    size_t SlopeHeuristicMaximalSelector::operator() (const SlopeHeuristic& sh) const
    {
        size_t index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        size_t length = 0;
        while(upper < max_index)
        {
            while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
            { ++upper; }
            if(upper - lower >= length)
            {
                length = upper - lower;
                index = lower;
            }
            lower = upper;
            ++upper;
        }
        return index;
    }

    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector()
    { _threshold = .20; }

    SlopeHeuristicSuperiorSelector::SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector)
    { _threshold = selector._threshold; }

    size_t SlopeHeuristicSuperiorSelector::operator() (const SlopeHeuristic& sh) const
    {
        size_t index, lower = 0, upper = 1, max_index = sh.size();
        index = max_index;
        while(index == max_index && upper < max_index)
        {
            while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
            { ++upper; }
            if(upper - lower > int(_threshold * max_index))
            { index = lower; }
            lower = upper;
            ++upper;
        }
        if(index == max_index)
        {
            lower = 0, upper = 1;
            size_t length = 0;
            while(upper < max_index)
            {
                while(upper < max_index && sh.get_selected(lower) == sh.get_selected(upper))
                { ++upper; }
                if(upper - lower > length)
                {
                    length = upper - lower;
                    index = lower;
                }
                lower = upper;
                ++upper;
            }
        }
        return index;
    }

    const double& SlopeHeuristicSuperiorSelector::get_threshold() const
    { return _threshold; }

    void SlopeHeuristicSuperiorSelector::set_threshold(const double& threshold)
    { _threshold = threshold; }

    SlopeHeuristic::SlopeHeuristic()
    {
        _penshapes.clear();
        _scores.clear();
        _intercepts.clear();
        _slopes.clear();
        _selected.clear();
        _solver = std::make_shared< SlopeHeuristicBiSquareSolver >();
        _selector = std::make_shared< SlopeHeuristicSuperiorSelector >();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores)
    {
        _penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if(scores.size() != penshapes.size())
        { throw size_error("scores", scores.size(), penshapes.size()); }
        _scores = scores;
        _solver = std::make_shared< SlopeHeuristicBiSquareSolver >();
        _selector = std::make_shared< SlopeHeuristicSuperiorSelector >();
        finalize();
    }

    SlopeHeuristic::SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores, const std::shared_ptr< SlopeHeuristicSolver >& solver, const std::shared_ptr< SlopeHeuristicSelector >& selector)
    {
        _penshapes = std::vector< double >(penshapes.cbegin(), penshapes.cend());
        if(scores.size() != penshapes.size())
        { throw size_error("scores", scores.size(), penshapes.size()); }
        _scores = scores;
        if(!solver)
        { throw nullptr_error("solver"); }
        _solver = solver;
        if(!selector)
        { throw nullptr_error("selector"); }
        _selector = selector;
        finalize();
    }

    SlopeHeuristic::SlopeHeuristic(const SlopeHeuristic& sh)
    {
        _penshapes = sh._penshapes;
        _scores = sh._scores;
        _intercepts = sh._intercepts;
        _slopes = sh._slopes;
        _selected = sh._selected;
        _solver = sh._solver;
        _selector = sh._selector;
    }

    size_t SlopeHeuristic::size() const
    { return _penshapes.size(); }

    const double& SlopeHeuristic::get_score(const size_t& index) const
    { return _scores[index]; }

    const double& SlopeHeuristic::get_penshape(const size_t& index) const
    { return _penshapes[index]; }

    const double& SlopeHeuristic::get_intercept(const size_t& index) const
    { return _intercepts[index]; }

    const double& SlopeHeuristic::get_slope(const size_t& index) const
    { return _slopes[index]; }

    const size_t& SlopeHeuristic::get_selected(const size_t& index) const
    { return _selected[index]; }

    const std::shared_ptr< SlopeHeuristicSolver >& SlopeHeuristic::get_solver() const
    { return _solver; }

    void SlopeHeuristic::set_solver(const std::shared_ptr< SlopeHeuristicSolver >& solver)
    { 
        _solver = solver;
        finalize();
    }

    const std::shared_ptr< SlopeHeuristicSelector >& SlopeHeuristic::get_selector() const
    { return _selector; }

    void SlopeHeuristic::set_selector(const std::shared_ptr< SlopeHeuristicSelector >& selector)
    { _selector = selector; }

    void SlopeHeuristic::finalize() 
    {
        _intercepts = std::vector< double >(size(), std::numeric_limits< double >::quiet_NaN());
        _slopes = std::vector< double >(size(), std::numeric_limits< double >::quiet_NaN());
        for(size_t index = 2, max_index = size(); index < max_index; ++index)
        {
            Eigen::MatrixXd X(index, 2);//, arma::fill::ones);
            Eigen::VectorXd y(index);//, arma::fill::zeros);
            for(size_t shift = 0; shift < index; ++shift)
            {
                X(shift, 0) = 1;
                X(shift, 1) = _penshapes[max_index - shift - 1];
                y(shift) = _scores[max_index - shift - 1];
            }
            try
            {
                Eigen::VectorXd beta = (*_solver)(X, y);
                _intercepts[index - 1] = beta(0);
                _slopes[index - 1] = beta(1);
            }
            catch(const std::exception& error)
            {}
        }
        _selected = std::vector< size_t >(_slopes.size());
        for(size_t index = 1, max_index = size(); index < max_index; ++index)
        {
            std::pair< double, size_t > max = std::make_pair(-1*std::numeric_limits< double >::infinity(), size());
            if(boost::math::isfinite(_slopes[index]))
            {
                for(size_t shift = 0; shift < max_index; ++shift)
                {
                    double score = _scores[shift] - 2 * _slopes[index] * _penshapes[shift];                        
                    if(boost::math::isfinite(score) && score > max.first)
                    {
                        max.first = score;
                        max.second = shift;
                    }
                }
            }
            _selected[index] = max.second;
        }
    }
}
