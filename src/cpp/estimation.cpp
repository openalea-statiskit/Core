#include "estimation.h"

namespace statiskit
{
    bool UnivariateDistributionEstimation::has_succeeded() const
    { return get_estimated(); }
}
