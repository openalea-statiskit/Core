/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_ESTIMATOR_H
#define STATISKIT_CORE_ESTIMATOR_H

#include "base.h"
#include "distribution.h"
#include "moment.h"
#include "slope_heuristic.h"
#include "optimization.h"

namespace statiskit
{
    struct STATISKIT_CORE_API sample_size_error : parameter_error
    { sample_size_error(const std::string& parameter, const unsigned int& minsize); };

    struct STATISKIT_CORE_API UnivariateDistributionEstimation
    {
        typedef UnivariateData data_type;
        typedef UnivariateDistribution estimated_type;

        virtual std::shared_ptr< estimated_type > get_estimated() const = 0;
        
        struct STATISKIT_CORE_API Estimator
        { 
            typedef UnivariateDistributionEstimation estimation_type;

            virtual std::shared_ptr< estimation_type > operator() (const std::shared_ptr< data_type >& data, const bool& lazy=true) const = 0; 
        };
    };

    template<class D, class B>
    class LazyEstimation : public B
    {
        public:
            LazyEstimation();
            LazyEstimation(const std::shared_ptr< D >& estimated);
            LazyEstimation(const LazyEstimation< D, B >& estimation);

            virtual std::shared_ptr< typename B::estimated_type > get_estimated() const;

        protected:
            std::shared_ptr< D > _estimated;
    };

    template<class D, class B> class ActiveEstimation : public LazyEstimation< D, B >
    {
        public:
            ActiveEstimation();
            ActiveEstimation(const std::shared_ptr< D >& estimated, const std::shared_ptr< typename B::data_type >& data);
            ActiveEstimation(const ActiveEstimation< D, B >& estimation);

            const std::shared_ptr< typename B::data_type >& get_data() const;

        protected:
            std::shared_ptr< typename B::data_type > _data;

            void set_data(const std::shared_ptr< typename B::data_type >& data);
    };
    
    template<class D, class B, class R> class ConditionalActiveEstimation : public ActiveEstimation< D, B >
    {
        public:
            ConditionalActiveEstimation();
            ConditionalActiveEstimation(const std::shared_ptr< D >& estimated, const std::shared_ptr< typename B::data_type >& data, const R& response, const std::set< size_t >& explanatories);
            ConditionalActiveEstimation(const ConditionalActiveEstimation< D, B, R >& estimation);

			const R get_response() const;
			const std::set< size_t > get_explanatories() const;

        protected:
        	R _response;
            std::set< size_t > _explanatories;
    };    

    template<class D, class B> class ListEstimation : public ActiveEstimation< D, B >
    {
        public:
            ListEstimation();
            ListEstimation(const ListEstimation< D, B >& estimation);

            virtual std::shared_ptr< typename B::estimated_type > get_estimated() const;

            const std::vector< std::shared_ptr< B > >& get_estimations() const;

            const std::vector< double >& get_scores() const;

            class Estimator : public B::Estimator
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                  
                    virtual std::shared_ptr< typename B::estimation_type > operator() (const std::shared_ptr< typename B::estimation_type::data_type >& data, const bool& lazy=true) const;

                    const std::vector< std::shared_ptr< typename B::Estimator > >& get_estimators() const;
                    void set_estimators(const std::vector< std::shared_ptr< typename B::Estimator > >& estimators);

                protected:
                    std::vector< std::shared_ptr< typename B::Estimator > > _estimators;

                    virtual double scoring(const size_t& index, const typename B::estimation_type::estimated_type& estimated, const typename B::estimation_type::data_type& data) const = 0;
            };

        protected:
            std::vector< std::shared_ptr< B > > _estimations;
            std::vector< double > _scores;
    };

    template<class D, class B> class OptimizationEstimation : public ActiveEstimation< D, B >
    {
        public:
            OptimizationEstimation();
            OptimizationEstimation(const OptimizationEstimation< D, B >& estimation);

            virtual std::shared_ptr< typename B::estimated_type > get_estimated() const;

            const std::vector< std::shared_ptr< D > >& get_iterations() const;

            const std::vector< double >& get_scores() const;

            const bool& has_converged() const;

        protected:
            std::vector< std::shared_ptr< D > > _iterations;
            std::vector< double > _scores;
            bool _converged;
    };

    template<class D, class B> struct UnivariateFrequencyDistributionEstimation : ActiveEstimation< D, B>
    {
        using ActiveEstimation< D, B >::ActiveEstimation;

        struct Estimator : B::Estimator
        { virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator
        { virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; };
    };

    typedef LazyEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionLazyEstimation;
    typedef ActiveEstimation< CategoricalUnivariateDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateDistributionActiveEstimation;

    struct STATISKIT_CORE_API DiscreteUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator
        { using UnivariateDistributionEstimation::Estimator::Estimator; };
    };

    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateFrequencyDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateFrequencyDistributionEstimation;
    typedef DiscreteUnivariateFrequencyDistributionEstimation::Estimator DiscreteUnivariateFrequencyDistributionEstimationEstimator;

    struct STATISKIT_CORE_API PoissonDistributionMLEstimation : ActiveEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator
        { virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; };
    };

    struct STATISKIT_CORE_API BinomialDistributionMLEstimation : OptimizationEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using OptimizationEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >::OptimizationEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator, Optimization
        {
            using Optimization::Optimization;

            virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const;
        };
    };
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator
        { virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : OptimizationEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using OptimizationEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::OptimizationEstimation;

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator, Optimization
        {
            using Optimization::Optimization;

            virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const;
        };
    };
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;

        /** \brief This class NegativeBinomialDistribution represents a Maximum Likelihood Estimator (MLE) of negative binomial distribution parameters \f$\kappa\f$ and \f$\pi\f$.
         *
         * \details This MLE prededure is described in \cite DBB13.
         *          Note that in their paper, the negative binomial distribution probability distribution function is given by
         *          \f[
         *              P\left(X = x\right) = \frac{\Gamma\left(x+\kappa\right)}{x! \Gamma\left(\kappa\right)} \left(\frac{\mu}{\mu + \kappa}\right)^{x} \left(\frac{\kappa}{\kappa + \mu}\right)^{\kappa}.
         *          \f]
         *          This is a reparametrization of the negative binomial distribution described by parameters \f$\kappa\f$ and \f$\pi\f$ with 
         *          \f[
         *              \pi = \frac{\mu}{\mu + \kappa}
         *          \f]
         *
         * \see \ref ::statiskit::NegativeBinomialDistribution.
         * */
        class STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator
        { 
            /** \brief Update parameters \f$\kappa\f$ and \f$\pi\f$
             *
             * \details \f$\kappa = \alpha^{-1}\f$ if given by the formula
             *          \f[
             *              \alpha = \frac{\log\left(1 + \alpha \bar{x} \right) }{\bar{x} - \frac{\alpha}{n} \sum_{i = 0}^{n}\sum_{\nu = 0}^{x^{ \left(i \right) }-1} \frac{\nu}{1 + \alpha \nu}},
             *          \f]
             *          and 
             *          \f[
             *              \pi = \frac{\bar{x}}{\bar{x} + \alpha^{-1}}
             *          \f]
             * */
            virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; 
        };
    };

    struct STATISKIT_CORE_API ContinuousUnivariateDistributionEstimation : UnivariateDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateDistributionEstimation::Estimator
        { using UnivariateDistributionEstimation::Estimator::Estimator; };
    };
    
    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateFrequencyDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateFrequencyDistributionEstimation;
    typedef ContinuousUnivariateFrequencyDistributionEstimation::Estimator ContinuousUnivariateFrequencyDistributionEstimationEstimator;

    struct STATISKIT_CORE_API NormalDistributionMLEstimation : ActiveEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation >
    {
        using ActiveEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation >::ActiveEstimation;

        struct STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        { virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const; };
    };

    /*struct NormalDistributionMMEstimation : NormalDistributionLazyEstimation
    {
        using NormalDistributionLazyEstimation::NormalDistributionLazyEstimation;

        class Estimator : public NormalDistributionMLEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                
                virtual std::shared_ptr< UnivariateEstimation > operator() (const std::shared_ptr< UnivariateData > data, const bool& lazy=true) const;
                
                const std::shared_ptr< MomentEstimator >& get_moment_estimator() const;
                void set_moment_estimator(const std::shared_ptr< MomentEstimator >& moment);
                
            protected:
                std::shared_ptr< MomentEstimator > _moment_estimator;
        };
    };*/
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >
    {
        using ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >::ActiveEstimation;

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const;

                const unsigned int& get_nb_bins() const;
                void set_nb_bins(const unsigned int& nb_bins);

            protected:
                unsigned int _nb_bins;
        };
    };

    struct STATISKIT_CORE_API RegularUnivariateHistogramDistributionSlopeHeuristicEstimation : ContinuousUnivariateDistributionEstimation, SlopeHeuristicEstimation< UnivariateHistogramDistribution >
    {
        using SlopeHeuristicEstimation< UnivariateHistogramDistribution >::SlopeHeuristicEstimation;

        virtual std::shared_ptr< UnivariateDistribution > get_estimated() const;

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const;

                const unsigned int& get_max_bins() const;
                void set_max_bins(const unsigned int& max_bins);

            protected:
                unsigned int _max_bins;
        }; 
    };

    struct STATISKIT_CORE_API IrregularUnivariateHistogramDistributionSlopeHeuristicEstimation : ContinuousUnivariateDistributionEstimation, SlopeHeuristicEstimation< UnivariateHistogramDistribution >
    {
        using SlopeHeuristicEstimation< UnivariateHistogramDistribution >::SlopeHeuristicEstimation;

        virtual std::shared_ptr< UnivariateDistribution > get_estimated() const;

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::shared_ptr< UnivariateDistributionEstimation > operator() (const std::shared_ptr< UnivariateData >& data, const bool& lazy=true) const;

                const unsigned int& get_max_bins() const;
                void set_max_bins(const unsigned int& max_bins);

                const double& get_constant() const;
                void set_constant(const double& constant);

            protected:
                unsigned int _max_bins;
                double _constant;
        }; 
    };
 
    struct STATISKIT_CORE_API UnivariateConditionalDistributionEstimation
    {
        typedef MultivariateData data_type;
        typedef ::statiskit::UnivariateConditionalDistribution estimated_type;
        
        virtual std::shared_ptr< estimated_type > get_estimated() const = 0;

        class STATISKIT_CORE_API Estimator
        { 
            public:
                typedef UnivariateConditionalDistributionEstimation estimation_type;
                
                virtual std::shared_ptr< estimation_type > operator() (const std::shared_ptr< data_type >& data, const size_t& response, const std::set< size_t >& explanatories, const bool& lazy=true) const = 0; 

            protected:

                inline void check_indices(const data_type& data, const size_t& response, const std::set< size_t >& explanatories) const;
        };
    };

    struct STATISKIT_CORE_API CategoricalUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };

    struct STATISKIT_CORE_API DiscreteUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };

    struct STATISKIT_CORE_API ContinuousUnivariateConditionalDistributionEstimation : UnivariateConditionalDistributionEstimation
    {
        struct STATISKIT_CORE_API Estimator : UnivariateConditionalDistributionEstimation::Estimator
        {};
    };


    /*struct MultivariateDistributionEstimation
    {
        typedef MultivariateDataFrame data_type;
        typedef MultivariateDistribution estimated_type;
        typedef UnivariateDistributionEstimation marginal_type;

        virtual std::shared_ptr< estimated_type > get_estimated() const = 0;
        
        struct Estimator
        {
            typedef MultivariateDistributionEstimation estimation_type;

            virtual std::shared_ptr< estimation_type > operator() (const std::shared_ptr< data_type >& data, const bool& lazy=true) const = 0;
        };
    };

    template<class D, class E> class IndependentMultivariateDistributionEstimation : public ActiveEstimation< IndependentMultivariateDistribution< D >, E >
    {
        public:
            using ActiveEstimation< IndependentMultivariateDistribution< D >, E >::ActiveEstimation;
            
            class Estimator : public E::Estimator
            {
                public:
                    typedef default_map< size_t, std::shared_ptr< typename E::marginal_type::Estimator > > marginal_type;
                    
                    Estimator();
                    Estimator(const Estimator& estimator);
                    
                    virtual std::shared_ptr< MultivariateDistributionEstimation > operator() (const std::shared_ptr< MultivariateDataFrame >& data, const bool& lazy=true) const;
                    
                    const marginal_type& get_marginal() const;
                    void set_marginal(const marginal_type& marginal);
                    
                protected:
                    marginal_type _marginal;
            };

            const std::vector< std::shared_ptr< UnivariateDistributionEstimation > >& get_marginals() const;

        protected:
            std::vector< std::shared_ptr< UnivariateDistributionEstimation > > _marginals;
    };
    
    typedef IndependentMultivariateDistributionEstimation< MultivariateDistribution, MultivariateDistributionEstimation > MixedIndependentMultivariateDistributionEstimation;

    struct CategoricalMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef CategoricalUnivariateDistributionEstimation marginal_type;

        struct Estimator : MultivariateDistributionEstimation::Estimator
        {
        };
    };

    typedef IndependentMultivariateDistributionEstimation< CategoricalMultivariateDistribution, CategoricalMultivariateDistributionEstimation > CategoricalIndependentMultivariateDistributionEstimation;

    struct DiscreteMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef DiscreteUnivariateDistributionEstimation marginal_type;

        struct Estimator : MultivariateDistributionEstimation::Estimator
        {
            using MultivariateDistributionEstimation::Estimator::Estimator;
        };
    };

    typedef IndependentMultivariateDistributionEstimation< DiscreteMultivariateDistribution, DiscreteMultivariateDistributionEstimation > DiscreteIndependentMultivariateDistributionEstimation;

    struct ContinuousMultivariateDistributionEstimation : MultivariateDistributionEstimation
    {
        typedef ContinuousUnivariateDistributionEstimation marginal_type;

        struct Estimator : MultivariateDistributionEstimation::Estimator
        { 
            using MultivariateDistributionEstimation::Estimator::Estimator; 
        };
    };

    typedef IndependentMultivariateDistributionEstimation< ContinuousMultivariateDistribution, ContinuousMultivariateDistributionEstimation > ContinuousIndependentMultivariateDistributionEstimation;

    template<class T> std::shared_ptr< T > get_default_estimator();
    template<> std::shared_ptr< UnivariateDistributionEstimation::Estimator > get_default_estimator< UnivariateDistributionEstimation::Estimator >();
    template<> std::shared_ptr< CategoricalUnivariateDistributionEstimation::Estimator > get_default_estimator< CategoricalUnivariateDistributionEstimation::Estimator >();
    template<> std::shared_ptr< DiscreteUnivariateDistributionEstimation::Estimator > get_default_estimator< DiscreteUnivariateDistributionEstimation::Estimator >();
    template<> std::shared_ptr< ContinuousUnivariateDistributionEstimation::Estimator > get_default_estimator< ContinuousUnivariateDistributionEstimation::Estimator >();*/
}

#include "estimator.hpp"
#endif
