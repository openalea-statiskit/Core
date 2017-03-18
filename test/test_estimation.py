import matplotlib
matplotlib.use('Agg')

from statiskit import core
from statiskit.data import core as data

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestEstimation(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('capushe')

    @attr(win=False)
    def test_slope_heuristic(self):
        """Test slope heuristic"""
        sh = core.SlopeHeuristic([pen.value for pen in self._data.pen.events], [-contrast.value for contrast in self._data.contrast.events])
        fig = pyplot.figure()
        sh.plot()
        pyplot.close(fig)

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data