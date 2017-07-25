from functools import wraps

import statiskit.core._core
from statiskit.core.__core.statiskit import (_Optimization,)

__all__ = []

def optimization_decorator(cls):

    cls.minits = property(cls.get_minits, cls.set_minits)
    del cls.get_minits, cls.set_minits

    cls.maxits = property(cls.get_maxits, cls.set_maxits)
    del cls.get_maxits, cls.set_maxits

    cls.mindiff = property(cls.get_mindiff, cls.set_mindiff)
    del cls.get_mindiff, cls.set_mindiff
    
for cls in _Optimization:
    optimization_decorator(cls)
