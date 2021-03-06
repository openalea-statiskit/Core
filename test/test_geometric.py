from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestGeometric(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test geometric distribution construction"""
        cls._dist = core.GeometricDistribution()

    def test_mle(self):
        """Test geometric distribution ML estimation"""
        data = self._dist.simulation(20)
        mle = core.geometric_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test geometric distribution deletion"""
        del cls._dist