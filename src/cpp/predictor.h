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

            const double& get_alpha() const;
            void set_alpha(const double& alpha);

            size_t size() const;

            const double& get_delta(const size_t& index) const;
            void set_delta(const size_t& index, const double& delta);

        protected:
            std::shared_ptr< MultivariateSampleSpace > _sample_space;
            double _alpha;
            arma::colvec _delta;
    };
};

#endif
