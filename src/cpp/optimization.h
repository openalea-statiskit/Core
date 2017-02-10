/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_OPTIMIZATION_H
#define STATISKIT_CORE_OPTIMIZATION_H

#include "base.h"

namespace statiskit
{
    class STATISKIT_CORE_API Optimization
    {
        public:
            Optimization();
            Optimization(const Optimization& Optimization);
           
            virtual bool run(const unsigned int& iteration, const double& prev, const double& curr) const;

            const double& get_mindiff() const;
            void set_mindiff(const double& mindiff);
            
            unsigned int get_minits() const;
            void set_minits(const unsigned int& maxits);

            unsigned int get_maxits() const;
            void set_maxits(const unsigned int& maxits);

        protected:
            double _mindiff;
            unsigned int _minits;
            unsigned int _maxits;
    };
}

#endif
