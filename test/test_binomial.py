try:
    import matplotlib
    matplotlib.use('Agg')
    from matplotlib import pyplot
except:
    import warnings
    warnings.warn("No module named matplotlib")

from statiskit import core

import unittest
from nose.plugins.attrib import attr

import math

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBinomial(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test binomial distribution construction"""
        cls._dist = core.BinomialDistribution(2, .5)

    def test_pdf(self):
        """Test binomial probability distribution function"""
        self.assertEqual(self._dist.pdf(0), 0.25)
        self.assertEqual(self._dist.pdf(1), 0.5)
        self.assertEqual(self._dist.pdf(2), 0.25)

    def test_ldf(self):
        """Test binomial log-probability distribution function"""
        self.assertEqual(self._dist.ldf(0), math.log(0.25))
        self.assertEqual(self._dist.ldf(1), math.log(0.5))
        self.assertEqual(self._dist.ldf(2), math.log(0.25))

    def test_estimation(self):
        """Test binomial estimation"""
        data = self._dist.simulation(10)
        mle = core.binomial_estimation('mle', data)
        mme = core.binomial_estimation('mme', data)
        self.assertEqual(mle[0], mme.estimated.kappa)
        self.assertTrue(mle.estimated.loglikelihood(data) >= mme.estimated.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test binomial distribution deletion"""
        del cls._dist