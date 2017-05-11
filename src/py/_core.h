#ifndef AUTOWIG__CORE
#define AUTOWIG__CORE

#include <boost/python.hpp>
#include <type_traits>
#include <statiskit/core/data.h>
#include <statiskit/core/estimation.h>
#include <statiskit/core/estimator.h>
#include <statiskit/core/moment.h>
#include <statiskit/core/distribution.h>
#include <statiskit/core/mixture.h>
#include <statiskit/core/sample_space.h>
#include <statiskit/core/base.h>
#include <statiskit/core/event.h>
#include <statiskit/core/slope_heuristic.h>
#include <memory>

namespace autowig
{
     template<class T> struct Held {
        typedef std::shared_ptr< T > Type;
        static bool const is_class = true;
    };
}

#endif