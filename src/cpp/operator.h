#ifndef STATISKIT_CORE_OPERATOR_H
#define STATISKIT_CORE_OPERATOR_H

#include "base.h"
#include "data.h"
#include <statiskit/linalg/Eigen.h>

namespace statiskit
{
    struct STATISKIT_CORE_API SplittingOperator
    {
        typedef MultivariateData data_type;

        virtual Index get_nb_components() const = 0;

        virtual unsigned int get_nb_parameters() const = 0;

        virtual double probability(const MultivariateEvent* event, const bool& logarithm) const = 0;

        double loglikelihood(const MultivariateData& data) const;

        virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const = 0;

        virtual std::unique_ptr< SplittingOperator > copy() const = 0;
    };

    class STATISKIT_CORE_API MultinomialSplittingOperator : public PolymorphicCopy< SplittingOperator, MultinomialSplittingOperator >
    {
        public:
            MultinomialSplittingOperator(const Eigen::VectorXd& pi);
            MultinomialSplittingOperator(const MultinomialSplittingOperator& splitting);
            virtual ~MultinomialSplittingOperator();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const;

            const Eigen::VectorXd& get_pi() const;
            void set_pi(const Eigen::VectorXd& pi);

        protected:
            Eigen::VectorXd _pi;
    };

    class STATISKIT_CORE_API DirichletMultinomialSplittingOperator : public PolymorphicCopy< SplittingOperator, DirichletMultinomialSplittingOperator >
    {
        public:
            DirichletMultinomialSplittingOperator(const Eigen::VectorXd& alpha);
            DirichletMultinomialSplittingOperator(const DirichletMultinomialSplittingOperator& splitting);
            virtual ~DirichletMultinomialSplittingOperator();

            virtual Index get_nb_components() const;

            virtual unsigned int get_nb_parameters() const;

            virtual double probability(const MultivariateEvent* event, const bool& logarithm) const;

            virtual std::unique_ptr< MultivariateEvent > simulate(unsigned int sum) const;

            const Eigen::VectorXd& get_alpha() const;
            void set_alpha(const Eigen::VectorXd& alpha);
            
        protected:
            Eigen::VectorXd _alpha;
    };
}

#endif