#ifndef STATISKIT_CORE_MOMENT_H
#define STATISKIT_CORE_MOMENT_H

#include "data.h"
#include "estimation.h"

namespace statiskit
{
    struct STATISKIT_CORE_API qualitative_sample_space_error : parameter_error
    { qualitative_sample_space_error(); };

    struct STATISKIT_CORE_API MeanEstimation
    { 
        virtual const double& get_mean() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            virtual std::unique_ptr< MeanEstimation > operator() (const UnivariateData& data) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    struct STATISKIT_CORE_API MeanVectorEstimation
    {
        virtual const Eigen::VectorXd& get_mean() const = 0;

        struct STATISKIT_CORE_API Estimator
        { 
            virtual std::unique_ptr< MeanVectorEstimation > operator() (const MultivariateData& data) const = 0;

            virtual std::unique_ptr< Estimator > copy() const = 0;
        };
    };

    class STATISKIT_CORE_API NaturalMeanEstimation : public MeanEstimation
    {
        public:
            NaturalMeanEstimation(const double& mean);
            NaturalMeanEstimation(const NaturalMeanEstimation& estimation);

            virtual const double& get_mean() const;
         
            struct STATISKIT_CORE_API Estimator : MeanEstimation::Estimator
            { 
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::unique_ptr< MeanEstimation > operator() (const UnivariateData& data) const;

                virtual std::unique_ptr< MeanEstimation::Estimator > copy() const;
            };
            
        protected:
            double _mean;
    };

    class STATISKIT_CORE_API NaturalMeanVectorEstimation : public MeanVectorEstimation
    {
        public:
            NaturalMeanVectorEstimation(const Eigen::VectorXd& mean);
            NaturalMeanVectorEstimation(const NaturalMeanVectorEstimation& estimation);

            virtual const Eigen::VectorXd& get_mean() const;

            struct STATISKIT_CORE_API Estimator : MeanVectorEstimation::Estimator
            { 
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::unique_ptr< MeanVectorEstimation > operator() (const MultivariateData& data) const;

                virtual std::unique_ptr< MeanVectorEstimation::Estimator > copy() const;
            };

        protected:
            Eigen::VectorXd _mean;
    };

    class STATISKIT_CORE_API VarianceEstimation
    {
        public:
            VarianceEstimation(const double& mean);
            VarianceEstimation(const VarianceEstimation& estimation);

            const double& get_mean() const;

            virtual const double& get_variance() const = 0;
           
            struct STATISKIT_CORE_API Estimator
            {
                virtual std::unique_ptr< VarianceEstimation > operator() (const UnivariateData& data, const double& mean) const = 0;

                virtual std::unique_ptr< Estimator > copy() const = 0;
            };

        protected:
            double _mean;
    };

    class STATISKIT_CORE_API CovarianceMatrixEstimation
    {
        public:
            CovarianceMatrixEstimation(const Eigen::VectorXd& mean);
            CovarianceMatrixEstimation(const CovarianceMatrixEstimation& estimation);

            const Eigen::VectorXd& get_mean() const;

            virtual const Eigen::MatrixXd& get_covariance() const = 0;

            struct STATISKIT_CORE_API Estimator
            { 
                virtual std::unique_ptr< CovarianceMatrixEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& mean) const = 0;

                virtual std::unique_ptr< Estimator > copy() const = 0;
            };

        protected:
            Eigen::VectorXd _mean;
    };

    class STATISKIT_CORE_API NaturalVarianceEstimation : public VarianceEstimation
    { 
        public:
            NaturalVarianceEstimation(const double& mean, const bool& bias, const double& variance);
            NaturalVarianceEstimation(const NaturalVarianceEstimation& estimation);

            const bool& get_bias() const;

            virtual const double& get_variance() const;

            class STATISKIT_CORE_API Estimator : public VarianceEstimation::Estimator
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                      
                    virtual std::unique_ptr< VarianceEstimation > operator() (const UnivariateData& data, const double& mean) const;

                    virtual std::unique_ptr< VarianceEstimation::Estimator > copy() const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;
            };

        protected:
            bool _bias;
            double _variance;
    };

    class STATISKIT_CORE_API NaturalCovarianceMatrixEstimation : public CovarianceMatrixEstimation
    { 
        public:
            NaturalCovarianceMatrixEstimation(const Eigen::VectorXd& mean, const Eigen::MatrixXd& covariance, const bool& bias);
            NaturalCovarianceMatrixEstimation(const NaturalCovarianceMatrixEstimation& estimation);

            const bool& get_bias() const;

            virtual const Eigen::MatrixXd& get_covariance() const;

            class STATISKIT_CORE_API Estimator : public CovarianceMatrixEstimation::Estimator
            {
                public:
                    Estimator();
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                      
                    virtual std::unique_ptr< CovarianceMatrixEstimation > operator() (const MultivariateData& data, const Eigen::VectorXd& mean) const;

                    virtual std::unique_ptr< CovarianceMatrixEstimation::Estimator > copy() const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;

                    double compute(const MultivariateData& data, const Eigen::VectorXd& mean, const Index& i, const Index& j) const;
            };

        protected:
            bool _bias;
            Eigen::MatrixXd _covariance;
    };

    /*class CoVarianceEstimation
    {
        public:
            CoVarianceEstimation(const std::array< double, 2 >& means);
            CoVarianceEstimation(const CoVarianceEstimation& estimation);

            const std::array< double, 2 >& get_means() const;

            virtual const double& get_covariance() const = 0;
           
            struct Estimator
            {
                std::unique_ptr< CoVarianceEstimation > operator() (const UnivariateData& data) const;
                std::unique_ptr< CoVarianceEstimation > operator() (const UnivariateData& data, const double& mean) const;
                std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data) const;
                virtual std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& means) const = 0;            
            };

        protected:
            std::array< double, 2 > _means;
    };

    class NaturalCoVarianceEstimation : public CoVarianceEstimation
    { 
        public:
            NaturalCoVarianceEstimation(const std::array< double, 2 >& means, const double& covariance, const bool& bias);
            NaturalCoVarianceEstimation(const NaturalCoVarianceEstimation& estimation);

            const bool& get_bias() const;

            virtual const double& get_covariance() const;

            class Estimator : public CoVarianceEstimation::Estimator
            {
                public:
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                      
                    using CoVarianceEstimation::Estimator::operator();
                    virtual std::unique_ptr< CoVarianceEstimation > operator() (const Index& i, const Index& j, const std::unique_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& means) const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;
            };

        protected:
            double _covariance;
            bool _bias;
    };*/

    /*struct CoSkewnessEstimator
    {
        virtual double operator() (const UnivariateData& df) const;
        virtual double operator() (const Index& i, const Index& j, const Index& k, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
    };

    struct CoKurtosisEstimator
    {
        virtual double operator() (const UnivariateData& df, const bool& na_omit=true) const;
        virtual double operator() (const Index& i, const Index& j, const Index& k, const Index& l, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
    };*/

    /*struct MomentEstimator
    {
        virtual double operator() (const UnivariateData* df, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const std::array<double, 2>& mean, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& mean, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& mean, const std::array<double, 3>& stderror, const bool& na_omit=true) const = 0;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& mean, const bool& na_omit=true) const;
        virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& mean, const std::array<double, 4>& stderror, const bool& na_omit=true) const = 0;

        virtual std::unique_ptr< MomentEstimator > copy() const = 0;
    };

    class NaturalMomentEstimator : public MomentEstimator
    {
        public:
            NaturalMomentEstimator(const bool& biased=false);
            NaturalMomentEstimator(const NaturalMomentEstimator& estimator);
            virtual ~NaturalMomentEstimator();

            virtual double operator() (const UnivariateData* df, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 2 >& df, const std::array<double, 2>& mean, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 3 >& df, const std::array<double, 3>& mean, const std::array<double, 3>& stderror, const bool& na_omit=true) const;
            virtual double operator() (const std::array< const UnivariateData*, 4 >& df, const std::array<double, 4>& mean, const std::array<double, 4>& stderror, const bool& na_omit=true) const;

            const bool& get_biased() const;

            virtual std::unique_ptr< MomentEstimator > copy() const;

        protected:
            bool _biased;

            template<class E> double get_value(const UnivariateData* data, const Index& index, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateData* data, const Index& index, const double& mean, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateEvent* event, const double& completion, const bool& na_omit=true) const;
    };*/
}

#endif
