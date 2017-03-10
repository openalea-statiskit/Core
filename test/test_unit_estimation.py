import matplotlib
matplotlib.use('Agg')
from matplotlib import pyplot

from statiskit import core
from statiskit.data import core as data

import unittest

class TestEstimation(unittest.TestCase):

    # @classmethod
    # def setUpClass(cls):
    #     """Test multivariate data construction"""
    #     cls._data = data.load('capushe')

    def test_slope_heuristic(self):
        """Test slope heuristic"""
        capushe = data.load('capushe')
        sh = core.SlopeHeuristic([pen.value for pen in capushe.pen.events], [-contrast.value for contrast in capushe.contrast.events])
        fig = pyplot.figure()
        sh.plot()
        pyplot.close(fig)

    # @classmethod
    # def tearDownClass(cls):
    #     """Test multivariate data deletion"""
    #     del cls._data