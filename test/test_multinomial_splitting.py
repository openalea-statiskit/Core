from test_distribution import AbstractTestDiscreteMultivariateDistribution

from statiskit import linalg
from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestMultinomialSplitting(unittest.TestCase, AbstractTestDiscreteMultivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test multinomial splitting distribution construction"""
        cls._dist = core.MultinomialSplittingDistribution(core.BinomialDistribution(5, .5),
                                                          linalg.Vector([.25, .75]))

    def test_estimation(self):
        """Test multinomial splitting estimation"""
        data = self._dist.simulation(100)
        est = core.splitting_estimation('MN',
                                        data,
                                        sum=core.binomial_estimation('ml'))
        self.assertGreaterEqual(est.estimated.loglikelihood(data), self._dist.loglikelihood(data))