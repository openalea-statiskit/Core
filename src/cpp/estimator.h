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
#include "estimation.h"

namespace statiskit
{

    struct STATISKIT_CORE_API CategoricalUnivariateDistributionEstimation::Estimator : UnivariateDistributionEstimation::Estimator
    {
        Estimator();
        Estimator(const Estimator& estimator);
        virtual ~Estimator();

        virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const; 

        virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
    };

    template<class D, class B> struct UnivariateFrequencyDistributionEstimation : ActiveEstimation< D, B>
    {
        using ActiveEstimation< D, B >::ActiveEstimation;
        virtual ~UnivariateFrequencyDistributionEstimation();

        struct Estimator : B::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
    
    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateFrequencyDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateFrequencyDistributionEstimation;
    typedef UnivariateFrequencyDistributionEstimation< DiscreteUnivariateFrequencyDistribution, DiscreteUnivariateDistributionEstimation >::Estimator DiscreteUnivariateFrequencyDistributionEstimator;

    struct STATISKIT_CORE_API PoissonDistributionMLEstimation : ActiveEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< PoissonDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;
        virtual ~PoissonDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : DiscreteUnivariateDistributionEstimation::Estimator
        { 
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API BinomialDistributionMLEstimation : OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >::OptimizationEstimation;
        virtual ~BinomialDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            using OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator::Estimator;
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;
        virtual ~BinomialDistributionMMEstimation();

        class STATISKIT_CORE_API Estimator : public DiscreteUnivariateDistributionEstimation::Estimator
        { 
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                MeanEstimation::Estimator* get_mean();
                void set_mean(const MeanEstimation::Estimator& mean);

                VarianceEstimation::Estimator* get_variance();
                void set_variance(const VarianceEstimation::Estimator& variance);

            protected:
                MeanEstimation::Estimator* _mean;
                VarianceEstimation::Estimator* _variance;
        };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::OptimizationEstimation;
        virtual ~NegativeBinomialDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            using OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator::Estimator;
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        using ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::ActiveEstimation;
        virtual ~NegativeBinomialDistributionMMEstimation();

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
        class STATISKIT_CORE_API Estimator : public DiscreteUnivariateDistributionEstimation::Estimator
        { 
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();
                
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
                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                MeanEstimation::Estimator* get_mean();
                void set_mean(const MeanEstimation::Estimator& mean);

                VarianceEstimation::Estimator* get_variance();
                void set_variance(const VarianceEstimation::Estimator& variance);

            protected:
                MeanEstimation::Estimator* _mean;
                VarianceEstimation::Estimator* _variance;
        };
    };
    
    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateFrequencyDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateFrequencyDistributionEstimation;
    typedef UnivariateFrequencyDistributionEstimation< ContinuousUnivariateFrequencyDistribution, ContinuousUnivariateDistributionEstimation >::Estimator ContinuousUnivariateFrequencyDistributionEstimator;

    struct STATISKIT_CORE_API NormalDistributionMLEstimation : ActiveEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation >
    {
        using ActiveEstimation< NormalDistribution, ContinuousUnivariateDistributionEstimation >::ActiveEstimation;
        virtual ~NormalDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const; 

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >
    {
        using ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >::ActiveEstimation;
        virtual ~UnivariateHistogramDistributionEstimation();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_nb_bins() const;
                void set_nb_bins(const unsigned int& nb_bins);

            protected:
                unsigned int _nb_bins;
        };
    };

    struct STATISKIT_CORE_API RegularUnivariateHistogramDistributionSlopeHeuristicSelection : SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >
    {
        using SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >::SlopeHeuristicSelection;
        virtual ~RegularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_max_bins() const;
                void set_max_bins(const unsigned int& max_bins);

            protected:
                unsigned int _max_bins;
        }; 
    };

    struct STATISKIT_CORE_API IrregularUnivariateHistogramDistributionSlopeHeuristicSelection : SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >
    {
        using SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >::SlopeHeuristicSelection;
        virtual ~IrregularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_max_bins() const;
                void set_max_bins(const unsigned int& max_bins);

                const double& get_constant() const;
                void set_constant(const double& constant);

            protected:
                unsigned int _max_bins;
                double _constant;
        }; 
    };

    template<class D, class E> class IndependentMultivariateDistributionEstimation : public ActiveEstimation< IndependentMultivariateDistribution< D >, E >
    {
        public:
            using ActiveEstimation< IndependentMultivariateDistribution< D >, E >::ActiveEstimation;
            virtual ~IndependentMultivariateDistributionEstimation();
            
            Index size() const;

            const UnivariateDistributionEstimation* get_estimation(const Index& index) const;

            class Estimator : public E::Estimator
            {
                public:                    
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();
        
                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;
                    
                    virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;

                    const typename E::Estimator::marginal_type* get_default_estimator() const;
                    void set_default_estimator(const typename E::Estimator::marginal_type& estimator);

                    const typename E::Estimator::marginal_type* get_estimator(const Index& index) const;
                    void unset_estimator(const Index& index);
                    void set_estimator(const Index& index, const typename E::Estimator::marginal_type& estimator);

                protected:
                    typename E::Estimator::marginal_type* _default_estimator;
                    std::map< Index, typename E::Estimator::marginal_type* > _estimators;
            };

        protected:
            std::vector< UnivariateDistributionEstimation* > _estimations;
    };
    
    typedef IndependentMultivariateDistributionEstimation< MultivariateDistribution, MultivariateDistributionEstimation > MixedIndependentMultivariateDistributionEstimation;

    typedef IndependentMultivariateDistributionEstimation< CategoricalMultivariateDistribution, CategoricalMultivariateDistributionEstimation > CategoricalIndependentMultivariateDistributionEstimation;

    typedef IndependentMultivariateDistributionEstimation< DiscreteMultivariateDistribution, DiscreteMultivariateDistributionEstimation > DiscreteIndependentMultivariateDistributionEstimation;

    typedef IndependentMultivariateDistributionEstimation< ContinuousMultivariateDistribution, ContinuousMultivariateDistributionEstimation > ContinuousIndependentMultivariateDistributionEstimation;
}

#include "estimator.hpp"
#endif
