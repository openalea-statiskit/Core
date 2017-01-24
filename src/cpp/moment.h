/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_MOMENT_H
#define STATISKIT_CORE_MOMENT_H

#include "data.h"

namespace statiskit
{
    struct MeanEstimation
    { 
        virtual const double& get_mean() const = 0;

        struct Estimator
        { virtual std::shared_ptr< MeanEstimation > operator() (const std::shared_ptr< UnivariateData > data) const = 0; };
    };

    class NaturalMeanEstimation : public MeanEstimation
    {
        public:
            NaturalMeanEstimation(const double& mean);
            NaturalMeanEstimation(const NaturalMeanEstimation& estimation);

            virtual const double& get_mean() const;
         
            struct Estimator : MeanEstimation::Estimator
            { 
                Estimator();
                Estimator(const Estimator& estimator);

                virtual std::shared_ptr< MeanEstimation > operator() (const std::shared_ptr< UnivariateData > data) const;
            };
            
        protected:
            double _mean;
    };

    class VarianceEstimation
    {
        public:
            VarianceEstimation(const double& mean);
            VarianceEstimation(const VarianceEstimation& estimation);

            const double& get_mean() const;

            virtual const double& get_variance() const = 0;
           
            struct Estimator
            {
                virtual std::shared_ptr< VarianceEstimation > operator() (const std::shared_ptr< UnivariateData > data) const;
                virtual std::shared_ptr< VarianceEstimation > operator() (const std::shared_ptr< UnivariateData > data, const double& mean) const = 0;
            };

        protected:
            double _mean;
    };

    class NaturalVarianceEstimation : public VarianceEstimation
    { 
        public:
            NaturalVarianceEstimation(const double& mean, const bool& bias, const double& variance);
            NaturalVarianceEstimation(const NaturalVarianceEstimation& estimation);

            const bool& get_bias() const;

            virtual const double& get_variance() const;

            class Estimator : public VarianceEstimation::Estimator
            {
                public:
                    Estimator(const bool& bias);
                    Estimator(const Estimator& estimator);
                      
                    virtual std::shared_ptr< VarianceEstimation > operator() (const std::shared_ptr< UnivariateData > data, const double& mean) const;

                    const bool& get_bias() const;
                    void set_bias(const bool& bias);

                protected:
                    bool _bias;
            };

        protected:
            bool _bias;
            double _variance;
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
                std::shared_ptr< CoVarianceEstimation > operator() (const std::shared_ptr< UnivariateData > data) const;
                std::shared_ptr< CoVarianceEstimation > operator() (const std::shared_ptr< UnivariateData > data, const double& mean) const;
                std::shared_ptr< CoVarianceEstimation > operator() (const size_t& i, const size_t& j, const std::shared_ptr< MultivariateDataFrame > data) const;
                virtual std::shared_ptr< CoVarianceEstimation > operator() (const size_t& i, const size_t& j, const std::shared_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& means) const = 0;            
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
                    virtual std::shared_ptr< CoVarianceEstimation > operator() (const size_t& i, const size_t& j, const std::shared_ptr< MultivariateDataFrame > data, const std::array< double, 2 >& means) const;

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
        virtual double operator() (const size_t& i, const size_t& j, const size_t& k, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
    };

    struct CoKurtosisEstimator
    {
        virtual double operator() (const UnivariateData& df, const bool& na_omit=true) const;
        virtual double operator() (const size_t& i, const size_t& j, const size_t& k, const size_t& l, const MultivariateDataFrame& df, const bool& na_omit=true) const = 0;
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

        virtual std::shared_ptr< MomentEstimator > copy() const = 0;
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

            virtual std::shared_ptr< MomentEstimator > copy() const;

        protected:
            bool _biased;

            template<class E> double get_value(const UnivariateData* data, const size_t& index, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateData* data, const size_t& index, const double& mean, const bool& na_omit=true) const;
            template<class E> double get_value(const UnivariateEvent* event, const double& completion, const bool& na_omit=true) const;
    };*/
}

#include "moment.hpp"
#endif
