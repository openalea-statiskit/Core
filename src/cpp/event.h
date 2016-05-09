/**********************************************************************************/
/*                                                                                */
/* StatisKit-CoreThis software is distributed under the CeCILL-C license. You     */
/* should have received a copy of the legalcode along with this work. If not, see */
/* <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 */
/*                                                                                */
/**********************************************************************************/

#ifndef STATISKIT_CORE_EVENT_H
#define STATISKIT_CORE_EVENT_H

#include <vector>
#include <set>
#include <boost/math/special_functions/fpclassify.hpp>

#include "base.h"

namespace statiskit
{
    enum outcome_type 
    {
        CATEGORICAL,
        DISCRETE,
        CONTINUOUS,
        MIXED,
    };

    enum event_type
    {
        ELEMENTARY,
        SET,
        LEFT,
        RIGHT,
        INTERVAL,
        COMPOUND
    };

    struct UnivariateEvent
    {
        virtual ~UnivariateEvent();

        virtual outcome_type get_outcome() const = 0;

        virtual event_type get_event() const = 0;

        virtual std::unique_ptr< UnivariateEvent > copy() const = 0;
    };
 
    template<class E> class ElementaryEvent : public E
    {
        public:
            ElementaryEvent(const typename E::value_type& value);
            ElementaryEvent(const ElementaryEvent< E >& event);
            virtual ~ElementaryEvent();
        
            virtual event_type get_event() const;

            const typename E::value_type& get_value() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
            
        protected:
            typename E::value_type _value;
    };

    template<class E> class SetCensoredEvent : public E
    {
        public:
            SetCensoredEvent(const std::set< typename E::value_type >& values);
            SetCensoredEvent(const SetCensoredEvent< E >& event);

            virtual event_type get_event() const;

            const std::set< typename E::value_type >& get_values() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;

        protected:
            std::set< typename E::value_type > _values;
    };

    template<class E> class LeftCensoredEvent : public E
    {
        public:
            LeftCensoredEvent(const typename E::value_type& upper_bound);
            LeftCensoredEvent(const LeftCensoredEvent< E >& event);

            virtual event_type get_event() const;

            const typename E::value_type& get_upper_bound() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;

        protected:
            typename E::value_type _upper_bound;
    };

    template<class E> class RightCensoredEvent : public E
    {
        public:
            RightCensoredEvent(const typename E::value_type& lower_bound);
            RightCensoredEvent(const RightCensoredEvent< E >& event);

            virtual event_type get_event() const;

            const typename E::value_type& get_lower_bound() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
        
        protected:
            typename E::value_type _lower_bound;
    };

    template<class E> class IntervalCensoredEvent : public E
    {
        public:
            IntervalCensoredEvent(const typename E::value_type& lhs, const typename E::value_type& rhs);
            IntervalCensoredEvent(const IntervalCensoredEvent< E >& event);

            virtual event_type get_event() const;

            const std::pair< typename E::value_type, typename E::value_type >& get_bounds() const;

            const typename E::value_type& get_lower_bound() const;
            const typename E::value_type& get_upper_bound() const;
            
            typename E::value_type get_range() const;
            typename E::value_type get_center() const;

            virtual std::unique_ptr< UnivariateEvent > copy() const;
            
        protected:
            std::pair<typename E::value_type, typename E::value_type > _bounds;
    };

    class CategoricalUnivariateDistribution;

    struct CategoricalEvent : public UnivariateEvent
    {
        typedef std::string value_type;
        typedef CategoricalUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< CategoricalEvent > CategoricalElementaryEvent;
    typedef SetCensoredEvent< CategoricalEvent > CategoricalSetCensoredEvent;

    class DiscreteUnivariateDistribution;

    struct DiscreteEvent : public UnivariateEvent
    {
        typedef int value_type;
        typedef DiscreteUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< DiscreteEvent > DiscreteElementaryEvent;
    typedef SetCensoredEvent< DiscreteEvent > DiscreteSetCensoredEvent;
    typedef LeftCensoredEvent< DiscreteEvent > DiscreteLeftCensoredEvent;
    typedef RightCensoredEvent< DiscreteEvent > DiscreteRightCensoredEvent;
    typedef IntervalCensoredEvent< DiscreteEvent > DiscreteIntervalCensoredEvent;

    class ContinuousUnivariateDistribution;

    struct ContinuousEvent : public UnivariateEvent
    {
        typedef double value_type;
        typedef ContinuousUnivariateDistribution distribution_type;
        
        virtual outcome_type get_outcome() const;
    };

    typedef ElementaryEvent< ContinuousEvent > ContinuousElementaryEvent;
    typedef SetCensoredEvent< ContinuousEvent > ContinuousSetCensoredEvent;
    typedef LeftCensoredEvent< ContinuousEvent > ContinuousLeftCensoredEvent;
    typedef RightCensoredEvent< ContinuousEvent > ContinuousRightCensoredEvent;
    typedef IntervalCensoredEvent< ContinuousEvent > ContinuousIntervalCensoredEvent;

    struct MultivariateEvent
    {        
        virtual size_t size() const = 0;
                
        virtual const UnivariateEvent* get(const size_t& index) const = 0;
        virtual void set(const size_t& index, const UnivariateEvent* event) = 0;

        virtual std::unique_ptr< MultivariateEvent > copy() const = 0;
    };
}

#include "event.hpp"
#endif
