##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

import types
from functools import wraps

from __core.statiskit import get_imin, get_imax, get_nn, get_zz, get_uimax, get_inf, get_rr, get_nr, get_pr, get_nan, get_random_generator, get_maxits, get_minits, get_epsilon

__all__ = ['controls']

class Controls(types.ModuleType):

    head = 10
    tail = 10

def wrapper(f):
    @wraps(f)
    def get_imin(self):
        return f()
    return get_imin

Controls.IMIN = property(wrapper(get_imin))
del wrapper, get_imin

def wrapper(f):
    @wraps(f)
    def get_imax(self):
        return f()
    return get_imax

Controls.IMAX = property(wrapper(get_imax))
del wrapper, get_imax

def wrapper(f):
    @wraps(f)
    def get_NN(self):
        return f()
    return get_NN

Controls.NN = property(wrapper(get_nn))
del wrapper, get_nn

def wrapper(f):
    @wraps(f)
    def get_ZZ(self):
        return f()
    return get_ZZ

Controls.ZZ = property(wrapper(get_zz))
del wrapper, get_zz

def wrapper(f):
    @wraps(f)
    def get_uimax(self):
        return f()
    return get_uimax

Controls.UIMAX = property(wrapper(get_uimax))
del wrapper, get_uimax

def wrapper(f):
    @wraps(f)
    def get_inf(self):
        return f()
    return get_inf

Controls.INF = property(wrapper(get_inf))
del wrapper, get_inf

def wrapper(f):
    @wraps(f)
    def get_RR(self):
        return f()
    return get_RR

Controls.RR = property(wrapper(get_rr))
del wrapper, get_rr

def wrapper(f):
    @wraps(f)
    def get_NR(self):
        return f()
    return get_NR

Controls.NR = property(wrapper(get_nr))
del wrapper, get_nr

def wrapper(f):
    @wraps(f)
    def get_PR(self):
        return f()
    return get_PR

Controls.PR = property(wrapper(get_pr))
del wrapper, get_pr

def wrapper(f):
    @wraps(f)
    def get_nan(self):
        return f()
    return get_nan

Controls.NAN = property(wrapper(get_nan))
del wrapper, get_nan

def wrapper(f):
    @wraps(f)
    def get_random_generator(self):
        return f()
    return get_random_generator

Controls.RANDOM_GENERATOR = property(wrapper(get_random_generator))
del wrapper, get_random_generator

def wrapper(f):
    @wraps(f)
    def get_maxits(self):
        return f()
    return get_maxits

Controls.MAXITS = property(wrapper(get_maxits))
del wrapper, get_maxits

def wrapper(f):
    @wraps(f)
    def get_minits(self):
        return f()
    return get_minits

Controls.MINITS = property(wrapper(get_minits))
del wrapper, get_minits

def wrapper(f):
    @wraps(f)
    def get_epsilon(self):
        return f()
    return get_epsilon

Controls.EPSILON = property(wrapper(get_epsilon))
del wrapper, get_epsilon

def get_precision(self):
    return self._precision

def set_precision(self, precision):
    if not precision >= 0:
        raise ValueError('\'precision\' parameter')
    self._precision = precision

Controls._precision = 2
Controls.precision = property(get_precision, set_precision)
del get_precision, set_precision

def float_str(self, value):
    float_str = str(value)
    return float_str[:float_str.index('.') + self.precision + 1]

Controls.float_str = float_str
del float_str

def remove_latex(self, string):
    return string.replace('$', '')

Controls.remove_latex = remove_latex
del remove_latex

controls = Controls('controls')
del Controls
