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
    template<class D, class B> class ShiftedDistributionEstimation : public LazyEstimation< ShiftedDistribution< D >, B >
    {
        public:
            ShiftedDistributionEstimation();
            ShiftedDistributionEstimation(LazyEstimation< D, B >* estimation, const UnivariateDataFrame* data, const typename D::event_type::value_type& shift);
            ShiftedDistributionEstimation(const ShiftedDistributionEstimation< D, B >& estimation);
            virtual ~ShiftedDistributionEstimation();

            const LazyEstimation< D, B >* get_estimation() const;

            class Estimator : public PolymorphicCopy< UnivariateDistributionEstimation::Estimator, Estimator, typename B::Estimator >
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();

                    virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                    typename D::event_type::value_type get_shift() const;
                    void set_shift(const typename D::event_type::value_type& shift);

                    const typename B::Estimator& get_estimator() const;
                    void set_estimator(const typename B::Estimator& estimator);

                protected:
                    typename D::event_type::value_type _shift;
                    typename B::Estimator* _estimator;
            };

        protected:
            LazyEstimation< D, B >* _estimation;
            const UnivariateDataFrame* _data;
    };

    typedef ShiftedDistributionEstimation< DiscreteUnivariateDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateShiftedDistributionEstimation;
    typedef DiscreteUnivariateShiftedDistributionEstimation::Estimator DiscreteUnivariateShiftedDistributionEstimator;

    typedef ShiftedDistributionEstimation< ContinuousUnivariateDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateShiftedDistributionEstimation;
    typedef ContinuousUnivariateShiftedDistributionEstimation::Estimator ContinuousUnivariateShiftedDistributionEstimator;

    template<class D, class B> struct UnivariateFrequencyDistributionEstimation : ActiveEstimation< D, B >
    {
        UnivariateFrequencyDistributionEstimation();
        UnivariateFrequencyDistributionEstimation(D const * estimated, typename B::data_type const * data);
        UnivariateFrequencyDistributionEstimation(const UnivariateFrequencyDistributionEstimation< D, B >& estimation);
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
        PoissonDistributionMLEstimation();
        PoissonDistributionMLEstimation(PoissonDistribution const * estimated, UnivariateData const * data);
        PoissonDistributionMLEstimation(const PoissonDistributionMLEstimation& estimation);
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
        BinomialDistributionMLEstimation();
        BinomialDistributionMLEstimation(BinomialDistribution const * estimated, UnivariateData const * data);            
        BinomialDistributionMLEstimation(const BinomialDistributionMLEstimation& estimation);
        virtual ~BinomialDistributionMLEstimation();

        class STATISKIT_CORE_API Estimator : public OptimizationEstimation<unsigned int, BinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                bool get_force() const;
                void set_force(const bool& force);

            protected:
                bool _force;
        };
    };
    
    struct STATISKIT_CORE_API BinomialDistributionMMEstimation : ActiveEstimation< BinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        BinomialDistributionMMEstimation();
        BinomialDistributionMMEstimation(BinomialDistribution const * estimated, UnivariateData const * data);            
        BinomialDistributionMMEstimation(const BinomialDistributionMMEstimation& estimation);
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

    struct STATISKIT_CORE_API LogarithmicDistributionMLEstimation : OptimizationEstimation<double, LogarithmicDistribution, DiscreteUnivariateDistributionEstimation >
    {
        LogarithmicDistributionMLEstimation();
        LogarithmicDistributionMLEstimation(LogarithmicDistribution const * estimated, UnivariateData const * data);            
        LogarithmicDistributionMLEstimation(const LogarithmicDistributionMLEstimation& estimation);
        virtual ~LogarithmicDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public OptimizationEstimation<double, LogarithmicDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API GeometricDistributionMLEstimation : ActiveEstimation<GeometricDistribution, DiscreteUnivariateDistributionEstimation >
    {
        GeometricDistributionMLEstimation();
        GeometricDistributionMLEstimation(GeometricDistribution const * estimated, UnivariateData const * data);            
        GeometricDistributionMLEstimation(const GeometricDistributionMLEstimation& estimation);
        virtual ~GeometricDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public ActiveEstimation<GeometricDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API NegativeBinomialDistributionMLEstimation : OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        NegativeBinomialDistributionMLEstimation();
        NegativeBinomialDistributionMLEstimation(NegativeBinomialDistribution const * estimated, UnivariateData const * data);            
        NegativeBinomialDistributionMLEstimation(const NegativeBinomialDistributionMLEstimation& estimation);
        virtual ~NegativeBinomialDistributionMLEstimation();

        class STATISKIT_CORE_API Estimator : public OptimizationEstimation<double, NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                bool get_force() const;
                void set_force(const bool& force);
                
            protected:
                bool _force;
        };
    };
    
    struct STATISKIT_CORE_API NegativeBinomialDistributionMMEstimation : ActiveEstimation< NegativeBinomialDistribution, DiscreteUnivariateDistributionEstimation >
    {
        NegativeBinomialDistributionMMEstimation();
        NegativeBinomialDistributionMMEstimation(NegativeBinomialDistribution const * estimated, UnivariateData const * data);            
        NegativeBinomialDistributionMMEstimation(const NegativeBinomialDistributionMMEstimation& estimation);
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
        NormalDistributionMLEstimation();
        NormalDistributionMLEstimation(NormalDistribution const * estimated, UnivariateData const * data);            
        NormalDistributionMLEstimation(const NormalDistributionMLEstimation& estimation);
        virtual ~NormalDistributionMLEstimation();

        struct STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            Estimator();
            virtual ~Estimator();

            virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const; 

            virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;
        };
    };
   
    struct STATISKIT_CORE_API UnivariateHistogramDistributionEstimation : ActiveEstimation< UnivariateHistogramDistribution, ContinuousUnivariateDistributionEstimation >
    {
        UnivariateHistogramDistributionEstimation();
        UnivariateHistogramDistributionEstimation(UnivariateHistogramDistribution const * estimated, UnivariateData const * data);            
        UnivariateHistogramDistributionEstimation(const UnivariateHistogramDistributionEstimation& estimation);
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
        RegularUnivariateHistogramDistributionSlopeHeuristicSelection(const UnivariateData* data);
        RegularUnivariateHistogramDistributionSlopeHeuristicSelection(const RegularUnivariateHistogramDistributionSlopeHeuristicSelection& selection);
        virtual ~RegularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

            protected:
                unsigned int _maxbins;
        }; 
    };

    struct STATISKIT_CORE_API IrregularUnivariateHistogramDistributionSlopeHeuristicSelection : SlopeHeuristicSelection< ContinuousUnivariateDistributionEstimation >
    {
        IrregularUnivariateHistogramDistributionSlopeHeuristicSelection(const UnivariateData* data);
        IrregularUnivariateHistogramDistributionSlopeHeuristicSelection(const IrregularUnivariateHistogramDistributionSlopeHeuristicSelection& selection);
        virtual ~IrregularUnivariateHistogramDistributionSlopeHeuristicSelection();

        class STATISKIT_CORE_API Estimator : public ContinuousUnivariateDistributionEstimation::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< UnivariateDistributionEstimation > operator() (const UnivariateData& data, const bool& lazy=true) const;

                virtual std::unique_ptr< UnivariateDistributionEstimation::Estimator > copy() const;

                const unsigned int& get_maxbins() const;
                void set_maxbins(const unsigned int& maxbins);

                const double& get_constant() const;
                void set_constant(const double& constant);

            protected:
                unsigned int _maxbins;
                double _constant;
        }; 
    };

    template<class E>
    class SplittingDistributionEstimation : public E
    {
        public:
            SplittingDistributionEstimation();
            SplittingDistributionEstimation(typename E::estimated_type const * estimated, MultivariateData const * data);
            SplittingDistributionEstimation(const SplittingDistributionEstimation< E >& estimation);
            virtual ~SplittingDistributionEstimation();

            const DiscreteUnivariateDistributionEstimation* get_sum() const;

            class Estimator : public E::Estimator
            {
                public:
                    Estimator();
                    Estimator(const Estimator& estimator);
                    virtual ~Estimator();

                    const DiscreteUnivariateDistributionEstimation::Estimator* get_sum() const;
                    void set_sum(const DiscreteUnivariateDistributionEstimation::Estimator& sum);

                protected:
                    DiscreteUnivariateDistributionEstimation::Estimator* _sum;

                    class SumData : public UnivariateData
                    {
                        public:
                            SumData(const MultivariateData* data);
                            virtual ~SumData();

                            virtual std::unique_ptr< UnivariateData::Generator > generator() const;

                            const UnivariateSampleSpace* get_sample_space() const;

                            virtual std::unique_ptr< UnivariateData > copy() const;

                        protected:
                            const MultivariateData* _data;

                            class Generator : public UnivariateData::Generator
                            {
                                public:
                                    Generator(const MultivariateData* data);
                                    virtual ~Generator();

                                    virtual bool is_valid() const;

                                    virtual UnivariateData::Generator& operator++();

                                    virtual const UnivariateEvent* event() const;
                                    virtual double weight() const;

                                protected:
                                    mutable DiscreteElementaryEvent* _sum;
                                    MultivariateData::Generator* _generator;
                            };

                    };

                    struct WeightedSumData : public PolymorphicCopy< UnivariateData, WeightedSumData, WeightedUnivariateData >
                    {
                        WeightedSumData(const UnivariateData* data);
                        WeightedSumData(const WeightedSumData& data);
                        virtual ~WeightedSumData();
                    };
            };

        protected:
            DiscreteUnivariateDistributionEstimation* _sum;        
    };

    struct STATISKIT_CORE_API MultinomialSplittingDistributionEstimation : SplittingDistributionEstimation< ActiveEstimation< MultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation > >
    {
        MultinomialSplittingDistributionEstimation();
        MultinomialSplittingDistributionEstimation(MultinomialSplittingDistribution const * estimated, MultivariateData const * data);
        MultinomialSplittingDistributionEstimation(const MultinomialSplittingDistributionEstimation& estimation);
        virtual ~MultinomialSplittingDistributionEstimation();

        struct STATISKIT_CORE_API Estimator : SplittingDistributionEstimation< ActiveEstimation< MultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation > >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API DirichletMultinomialSplittingDistributionEstimation : SplittingDistributionEstimation< OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation > >
    {
        DirichletMultinomialSplittingDistributionEstimation();
        DirichletMultinomialSplittingDistributionEstimation(DirichletMultinomialSplittingDistribution const * estimated, MultivariateData const * data);
        DirichletMultinomialSplittingDistributionEstimation(const DirichletMultinomialSplittingDistributionEstimation& estimation);
        virtual ~DirichletMultinomialSplittingDistributionEstimation();

        struct STATISKIT_CORE_API Estimator : SplittingDistributionEstimation< OptimizationEstimation<Eigen::VectorXd, DirichletMultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation > >::Estimator
        {
            Estimator();
            Estimator(const Estimator& estimator);
            virtual ~Estimator();

            virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

            virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;
        };
    };

    struct STATISKIT_CORE_API NegativeMultinomialDistributionEstimation : public OptimizationEstimation<double, MultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation >
    {
            NegativeMultinomialDistributionEstimation();
            NegativeMultinomialDistributionEstimation(MultinomialSplittingDistribution const * estimated, MultivariateData const * data);
            NegativeMultinomialDistributionEstimation(const NegativeMultinomialDistributionEstimation& estimation);
            virtual ~NegativeMultinomialDistributionEstimation();

            struct STATISKIT_CORE_API WZ99Estimator : OptimizationEstimation<double, MultinomialSplittingDistribution, DiscreteMultivariateDistributionEstimation >::Estimator
            {
                public:
                    WZ99Estimator();
                    WZ99Estimator(const WZ99Estimator& estimator);
                    virtual ~WZ99Estimator();

                    virtual std::unique_ptr< MultivariateDistributionEstimation > operator() (const MultivariateData& data, const bool& lazy=true) const;

                    virtual std::unique_ptr< MultivariateDistributionEstimation::Estimator > copy() const;
            };
    };

    template<class D, class E> class IndependentMultivariateDistributionEstimation : public ActiveEstimation< IndependentMultivariateDistribution< D >, E >
    {
        public:
            IndependentMultivariateDistributionEstimation();
            IndependentMultivariateDistributionEstimation(IndependentMultivariateDistribution< D > const * estimated, typename E::data_type const * data);
            IndependentMultivariateDistributionEstimation(const IndependentMultivariateDistributionEstimation< D, E >& estimation);
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
                    void set_estimator(const Index& index, const typename E::Estimator::marginal_type* estimator);

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

    template<class D, class E> struct MixtureDistributionEMEstimation : OptimizationEstimation< D*, D, E >
    {
        MixtureDistributionEMEstimation();
        MixtureDistributionEMEstimation(D const * estimated, typename E::data_type const * data);            
        MixtureDistributionEMEstimation(const MixtureDistributionEMEstimation< D, E >& estimation);
        virtual ~MixtureDistributionEMEstimation();

        class Estimator : public OptimizationEstimation< D*, D, E >::Estimator
        {
            public:
                Estimator();
                Estimator(const Estimator& estimator);
                virtual ~Estimator();

                virtual std::unique_ptr< typename E::Estimator::estimation_type > operator() (const typename E::Estimator::estimation_type::data_type& data, const bool& lazy=true) const;

                virtual std::unique_ptr< typename E::Estimator::estimation_type::Estimator > copy() const;

                bool get_pi() const;
                void set_pi(const bool& pi);

                const typename E::Estimator* get_default_estimator() const;
                void set_default_estimator(const typename E::Estimator* estimator);

                const typename E::Estimator* get_estimator(const Index& index) const;
                void set_estimator(const Index& index, const typename E::Estimator* estimator);

                const D* get_initializator() const;
                void set_initializator(const D& initializator);

            protected:
                bool _pi;
                D* _initializator;
                typename E::Estimator* _default_estimator;
                std::map< Index, typename E::Estimator* > _estimators;
        };
    };
    
    typedef MixtureDistributionEMEstimation< CategoricalUnivariateMixtureDistribution, CategoricalUnivariateDistributionEstimation > CategoricalUnivariateMixtureDistributionEMEstimation;
    typedef CategoricalUnivariateMixtureDistributionEMEstimation::Estimator CategoricalUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< DiscreteUnivariateMixtureDistribution, DiscreteUnivariateDistributionEstimation > DiscreteUnivariateMixtureDistributionEMEstimation;    
    typedef DiscreteUnivariateMixtureDistributionEMEstimation::Estimator DiscreteUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< ContinuousUnivariateMixtureDistribution, ContinuousUnivariateDistributionEstimation > ContinuousUnivariateMixtureDistributionEMEstimation;
    typedef ContinuousUnivariateMixtureDistributionEMEstimation::Estimator ContinuousUnivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< MixedMultivariateMixtureDistribution, MultivariateDistributionEstimation > MixedMultivariateMixtureDistributionEMEstimation;
    typedef MixedMultivariateMixtureDistributionEMEstimation::Estimator MixedMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< CategoricalMultivariateMixtureDistribution, CategoricalMultivariateDistributionEstimation > CategoricalMultivariateMixtureDistributionEMEstimation;
    typedef CategoricalMultivariateMixtureDistributionEMEstimation::Estimator CategoricalMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< DiscreteMultivariateMixtureDistribution, DiscreteMultivariateDistributionEstimation > DiscreteMultivariateMixtureDistributionEMEstimation;
    typedef DiscreteMultivariateMixtureDistributionEMEstimation::Estimator DiscreteMultivariateMixtureDistributionEMEstimator;

    typedef MixtureDistributionEMEstimation< ContinuousMultivariateMixtureDistribution, ContinuousMultivariateDistributionEstimation > ContinuousMultivariateMixtureDistributionEMEstimation;
    typedef ContinuousMultivariateMixtureDistributionEMEstimation::Estimator ContinuousMultivariateMixtureDistributionEMEstimator;
}

#include "estimator.hpp"
#endif
