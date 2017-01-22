/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_SLOPE_HEURISTIC_H
#define STATISKIT_CORE_SLOPE_HEURISTIC_H

#include "base.h"

#include <set>
#include <map>
// #include <armadillo>
#include <memory>

namespace statiskit
{
    struct SlopeHeuristicSolver
    { 
        // virtual arma::colvec operator() (const arma::mat& X, const arma::colvec& y) const = 0;
    };

    struct SlopeHeuristicOLSSolver : SlopeHeuristicSolver
    {
        // virtual arma::colvec operator() (const arma::mat& X, const arma::colvec& y) const; 
    };

    class SlopeHeuristicIWLSSolver : public SlopeHeuristicSolver
    {
        public:
            SlopeHeuristicIWLSSolver();
            SlopeHeuristicIWLSSolver(const SlopeHeuristicIWLSSolver& shs);

            // virtual arma::colvec operator() (const arma::mat& X, const arma::colvec& y) const;

            const double& get_epsilon() const;
            void set_epsilon(const double& epsilon);

            const unsigned int& get_maxits() const;
            void set_maxits(const unsigned int& maxits);

        protected:
            double _epsilon;
            unsigned int _maxits;

            // virtual void update(const arma::colvec& beta, arma::mat& W, const arma::mat& X, const arma::colvec& y) const = 0;
    };

    class SlopeHeuristicHuberSolver : public SlopeHeuristicIWLSSolver
    {
        public:
            SlopeHeuristicHuberSolver();
            SlopeHeuristicHuberSolver(const SlopeHeuristicHuberSolver& shs);

            const double& get_k() const;
            void set_k(const double& k);

        protected:
            double _k;

            // virtual void update(const arma::colvec& beta, arma::mat& W, const arma::mat& X, const arma::colvec& y) const;
    };

    class SlopeHeuristicBiSquareSolver : public SlopeHeuristicIWLSSolver
    {
         public:
            SlopeHeuristicBiSquareSolver();
            SlopeHeuristicBiSquareSolver(const SlopeHeuristicBiSquareSolver& shs);

            const double& get_k() const;
            void set_k(const double& k);
         
         protected:
            double _k;

            // virtual void update(const arma::colvec& beta, arma::mat& W, const arma::mat& X, const arma::colvec& y) const;
    };

    class SlopeHeuristic;

    struct SlopeHeuristicSelector
    { virtual size_t operator() (const SlopeHeuristic& sh) const = 0; };

    struct SlopeHeuristicMaximalSelector : SlopeHeuristicSelector
    { virtual size_t operator() (const SlopeHeuristic& sh) const; };

    class SlopeHeuristicSuperiorSelector : public SlopeHeuristicSelector
    {
        public:
            SlopeHeuristicSuperiorSelector();
            SlopeHeuristicSuperiorSelector(const SlopeHeuristicSuperiorSelector& selector);

            virtual size_t operator() (const SlopeHeuristic& sh) const;

            const double& get_threshold() const;
            void set_threshold(const double& threshold);

        protected:
            double _threshold;
    };

    class SlopeHeuristic
    {
        public:
            SlopeHeuristic();
            SlopeHeuristic(const std::set< double >& penshapes, const std::vector< double >& scores, const std::shared_ptr< SlopeHeuristicSolver >& solver, const std::shared_ptr< SlopeHeuristicSelector >& selector);
            SlopeHeuristic(const SlopeHeuristic& sh);

            size_t size() const;

            const double& get_score(const size_t& index) const;

            const double& get_penshape(const size_t& index) const;

            const double& get_intercept(const size_t& index) const;

            const double& get_slope(const size_t& index) const;

            const size_t& get_selected(const size_t& index) const;

            const std::shared_ptr< SlopeHeuristicSolver >& get_solver() const;
            void set_solver(const std::shared_ptr< SlopeHeuristicSolver >& solver);

            const std::shared_ptr< SlopeHeuristicSelector >& get_selector() const;
            void set_selector(const std::shared_ptr< SlopeHeuristicSelector >& _selector);
            
        protected:
            std::vector< double > _penshapes;
            std::vector< double > _scores;
            std::vector< double > _intercepts;
            std::vector< double > _slopes;
            std::vector< size_t > _selected;
            std::shared_ptr< SlopeHeuristicSolver > _solver;
            std::shared_ptr< SlopeHeuristicSelector > _selector;

            void finalize();
    };

    template<class D> class SlopeHeuristicEstimation : public SlopeHeuristic
    {
        public:
            SlopeHeuristicEstimation();
            SlopeHeuristicEstimation(const std::set< double >& penshapes, const std::vector< double >& scores, const std::shared_ptr< SlopeHeuristicSolver >& solver, const std::shared_ptr< SlopeHeuristicSelector >& selector, const std::vector< std::shared_ptr< D > >& models);
            SlopeHeuristicEstimation(const SlopeHeuristicEstimation< D >& she);

            const std::shared_ptr< D >& get_model(const size_t& index) const;
            
        protected:
            std::vector< std::shared_ptr< D > > _models;

            void add(const double& penshape, const double& score, const std::shared_ptr< D >& model);
    };
}

#include "slope_heuristic.hpp"
#endif
