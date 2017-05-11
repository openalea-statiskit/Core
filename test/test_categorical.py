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
        """Test categorical ML estimation"""
        data = self._dist.simulation(10)
        mle = core.frequency_estimation(data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test distribution deletion"""
        del cls._dist

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestOrdinal(TestNominal):

    @classmethod
    def setUpClass(cls):
        """Test ordinal distribution construction"""
        cls._dist = core.OrdinalDistribution('B', 'C', 'A',
                                              ordered_pi = linalg.Vector([2., 1., 3.]))

    def test_get_set(self):
        """Test Ordinal distribution get and set ordered pi and oredered values"""
        self.assertEqual(tuple(self._dist.ordered_values), ('B', 'C', 'A'))
        self.assertEqual(self._dist.ordered_pi, linalg.Vector([1/3., 1/6., 0.5]))
        self.assertEqual(self._dist.pi, linalg.Vector([0.5, 1/3., 1/6.]))

    @classmethod
    def tearDownClass(cls):
        """Test ordinal distribution deletion"""
        del cls._dist