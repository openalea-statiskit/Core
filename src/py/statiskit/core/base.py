from functools import wraps

import statiskit.core._core
from statiskit.core.__core.statiskit import (Optimization,)

__all__ = []

Optimization.mindiff = property(Optimization.get_mindiff, Optimization.set_mindiff)
del Optimization.get_mindiff, Optimization.set_mindiff

Optimization.minits = property(Optimization.get_minits, Optimization.set_minits)
del Optimization.get_minits, Optimization.set_minits

Optimization.maxits = property(Optimization.get_maxits, Optimization.set_maxits)
del Optimization.get_maxits, Optimization.set_maxits