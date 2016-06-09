/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_PREDICTOR_H
#define STATISKIT_CORE_PREDICTOR_H

#include "sample_space.h"

namespace statiskit
{
    class ScalarPredictor
    {
        public:
            ScalarPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space);
            virtual ~ScalarPredictor();
            ScalarPredictor(const ScalarPredictor& predictor);

            double operator() (const MultivariateEvent& event) const;

            const std::shared_ptr< MultivariateSampleSpace >& get_sample_space() const;
            
            double alpha;

			const arma::colvec& get_delta() const;
			void set_delta(const arma::colvec& delta);
			
        protected:
            std::shared_ptr< MultivariateSampleSpace > _sample_space;
            arma::colvec _delta;
    };
    
    class ConstrainedScalarPredictor : ScalarPredictor
    {
        public:
            ConstrainedScalarPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const arma::mat& constraint);
            virtual ~ConstrainedScalarPredictor();
            ConstrainedScalarPredictor(const ConstrainedScalarPredictor& predictor);

            double operator() (const MultivariateEvent& event) const;
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);            

        protected:
            arma::mat _constraint;
    };      

    class VectorPredictor
    {
        public:
            VectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols);
            virtual ~VectorPredictor();
			VectorPredictor(const VectorPredictor& predictor);
			
            virtual arma::colvec operator() (const MultivariateEvent& event) const = 0;

            const std::shared_ptr< MultivariateSampleSpace >& get_sample_space() const;
            
            const arma::colvec& get_alpha() const;
			void set_alpha(const arma::colvec& alpha);

			virtual void set_beta(const arma::colvec& beta) = 0;
			
        protected:
            std::shared_ptr< MultivariateSampleSpace > _sample_space;	
            arma::colvec _alpha;	
    };

    class CompletePredictor : VectorPredictor
    {
        public:
            CompletePredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols);
            virtual ~CompletePredictor();
            CompletePredictor(const CompletePredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
			
			const arma::mat& get_delta() const;
			void set_delta(const arma::mat& delta);
			
        protected:
            arma::mat _delta;
    };    
    
    class ProportionalPredictor : VectorPredictor
    {
        public:
            ProportionalPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols);
            virtual ~ProportionalPredictor();
            ProportionalPredictor(const ProportionalPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
			
			const arma::colvec& get_delta() const;
			void set_delta(const arma::colvec& delta);
			
        protected:
            arma::colvec _delta;
    }; 

    class ConstrainedVectorPredictor : VectorPredictor
    {
        public:
            ConstrainedVectorPredictor(const std::shared_ptr< MultivariateSampleSpace >& sample_space, const size_t& nb_cols, const arma::mat& constraint);
            virtual ~ConstrainedVectorPredictor();
            ConstrainedVectorPredictor(const ConstrainedVectorPredictor& predictor);

            virtual arma::colvec operator() (const MultivariateEvent& event) const;
            
            virtual void set_beta(const arma::colvec& beta);
            
			const arma::mat& get_constraint() const;
			void set_constraint(const arma::mat& constraint);            

        protected:
        	arma::colvec _delta;
            arma::mat _constraint;
    };    
};

#endif
