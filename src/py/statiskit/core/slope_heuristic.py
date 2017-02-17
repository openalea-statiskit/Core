##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from functools import wraps
from optionals import pyplot

import statiskit.core._core
from statiskit.core.__core.statiskit import SlopeHeuristic

__all__ = ['SlopeHeuristic']

class Proxy(object):

    def __init__(self, obj):
        self.obj = obj

def wrapper(f):
    @wraps(f)
    def __len__(self):
        return f(self.obj)
    return __len__

Proxy.__len__ = wrapper(SlopeHeuristic.__len__)
del SlopeHeuristic.__len__

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in xrange(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            return f(self.obj, index)
    return __getitem__

class ScoresProxy(Proxy):
    pass

ScoresProxy.__getitem__ = wrapper(SlopeHeuristic.get_score)
del SlopeHeuristic.get_score
SlopeHeuristic.scores = property(ScoresProxy)

class PenshapesProxy(Proxy):
    pass

PenshapesProxy.__getitem__ = wrapper(SlopeHeuristic.get_penshape)
del SlopeHeuristic.get_penshape
SlopeHeuristic.penshapes = property(PenshapesProxy)

class InterceptsProxy(Proxy):
    pass

InterceptsProxy.__getitem__ = wrapper(SlopeHeuristic.get_intercept)
del SlopeHeuristic.get_intercept
SlopeHeuristic.intercepts = property(InterceptsProxy)

class SlopesProxy(Proxy):
    pass

SlopesProxy.__getitem__ = wrapper(SlopeHeuristic.get_slope)
del SlopeHeuristic.get_slope
SlopeHeuristic.slopes = property(SlopesProxy)

# SlopeHeuristic.solver = property(SlopeHeuristic.get_solver, SlopeHeuristic.set_solver)
# del SlopeHeuristic.get_solver, SlopeHeuristic.set_solver

# SlopeHeuristic.selector = property(SlopeHeuristic.get_selector, SlopeHeuristic.set_selector)
# del SlopeHeuristic.get_selector, SlopeHeuristic.set_selector

def wrapper(f):
    @wraps(f)
    def __getitem__(self, index):
        if isinstance(index, slice):
            return [self[index] for index in xrange(*index.indices(len(self)))]
        else:
            if index < 0:
                index += len(self)
            if not 0 <= index < len(self):
                raise IndexError
            item = f(self.obj, index)
            if item < len(self):
                return item
    return __getitem__

class SelectedProxy(Proxy):
    pass

SelectedProxy.__getitem__ = wrapper(SlopeHeuristic.get_selected)
del SlopeHeuristic.get_selected
SlopeHeuristic.selected = property(SelectedProxy)

def plot(self, axes=None, **kwargs):
    if axes is None:
        axes = pyplot.subplot(2, 1, 1), pyplot.subplot(2, 1, 2)
    else:
        divider = make_axes_locatable(axes)
        axes = axes, divider.append_axes('bottom', size='50%')
    self.score_plot(axes=axes[0], **kwargs.pop('scores', dict()))
    self.slope_plot(axes=axes[1], **kwargs.pop('slopes', dict(color = 'b')))
    self.selected_plot(axes=axes[1].twinx(), **kwargs.pop('selected', dict(color = 'r')))
    return axes

SlopeHeuristic.plot = plot
del plot

def score_plot(self, axes=None, fmt='o', predicted=True, *args, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    if predicted:
        index = self.selector(self)
        alpha, beta = self.intercepts[index], self.slopes[index]
        axes.plot(*zip(*[(extremum, alpha + beta * extremum) for extremum in (self.penshapes[index], self.penshapes[-1])]))
        pass
    axes.plot(self.penshapes[:], self.scores[:], fmt, *args, **kwargs)
    axes.set_xlabel('Penality shape')
    axes.set_ylabel('Contrast')
    return axes

SlopeHeuristic.score_plot = score_plot
del score_plot

def slope_plot(self, axes=None, fmt='-', *args, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    axes.plot(self.slopes[:], fmt, *args, **kwargs)
    axes.set_xlabel('Number of points considered')
    axes.set_ylabel('Slope value')
    return axes

SlopeHeuristic.slope_plot = slope_plot
del slope_plot

def selected_plot(self, axes=None, fmt='-', *args, **kwargs):
    if axes is None:
        axes = pyplot.subplot(1,1,1)
    axes.plot(self.selected[:], fmt, *args, **kwargs)
    axes.set_xlabel('Number of points considered')
    axes.set_ylabel('Index of selected model')
    return axes

SlopeHeuristic.selected_plot = selected_plot
del selected_plot
