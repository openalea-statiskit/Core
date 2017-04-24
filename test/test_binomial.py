from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBinomial(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test binomial distribution construction"""
        cls._dist = core.BinomialDistribution(2, .5)

    def test_mle(self):
        """Test binomial ML estimation"""
        data = self._dist.simulation(10)
        mle = core.binomial_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    def test_mme(self):
        """Test binomial MM estimation"""
        data = self._dist.simulation(10)
        mme = core.binomial_estimation('mm', data)
        self.assertAlmostEqual(mme.estimated.mean, float(data.mean))
        # self.assertAlmostEqual(mme.estimated.variance, float(data.variance))

    @classmethod
    def tearDownClass(cls):
        """Test distribution deletion"""
        del cls._dist