from test_distribution import AbstractTestUnivariateDistribution

from statiskit import core
from statiskit import linalg

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestNominal(unittest.TestCase, AbstractTestUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test nominal distribution construction"""
        cls._dist = core.NominalDistribution('A', 'B', 'C',
                                              pi = linalg.Vector([2., 1., 3.]))

    def test_mle(self):
        """Test nominal ML estimation"""
        data = self._dist.simulation(10)
        mle = core.frequency_estimation(data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test distribution deletion"""
        del cls._dist