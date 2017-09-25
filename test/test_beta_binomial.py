from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBetaBinomial(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test beta binomial distribution construction"""
        cls._dist = core.BetaBinomialDistribution(5, 3., 3.)

    @classmethod
    def tearDownClass(cls):
        """Test beta binomial distribution deletion"""
        del cls._dist