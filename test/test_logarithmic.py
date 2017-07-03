from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestLogarithmic(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test logarithmic distribution construction"""
        cls._dist = core.LogarithmicDistribution()

    def test_mle(self):
        """Test logarithmic distribution ML estimation"""
        data = self._dist.simulation(20)
        mle = core.logarithmic_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test logarithmic distribution deletion"""
        del cls._dist