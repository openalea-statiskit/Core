import matplotlib
matplotlib.use('Agg')

from statiskit import linalg
from statiskit import core

import unittest
from nose.plugins.attrib import attr

import math

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestMixture(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test binomial distribution construction"""
        cls._dist = core.MixtureDistribution(core.BinomialDistribution(5, .5),
                                             core.PoissonDistribution(10.),
                                             pi = linalg.Vector([.5, .5]))

    def test_pdf(self):
        """Test mixture probability distribution function"""
        self.assertAlmostEqual(self._dist.pdf(0), 0.25)
        self.assertAlmostEqual(self._dist.pdf(1), 0.5)
        self.assertAlmostEqual(self._dist.pdf(2), 0.25)

    def test_ldf(self):
        """Test mixture log-probability distribution function"""
        self.assertAlmostEqual(self._dist.ldf(0), math.log(0.25))
        self.assertAlmostEqual(self._dist.ldf(1), math.log(0.5))
        self.assertAlmostEqual(self._dist.ldf(2), math.log(0.25))

    def test_estimation(self):
        """Test mixture estimation"""
        data = self._dist.simulation(100)
        em = core.mixture_estimation('em', data)
        self.assertTrue(mle.estimated)

    @classmethod
    def tearDownClass(cls):
        """Test binomial distribution deletion"""
        del cls._dist