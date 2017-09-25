from test_distribution import AbstractTestDiscreteUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBetaNegativeBinomial(unittest.TestCase, AbstractTestDiscreteUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test beta negative binomial distribution construction"""
        cls._dist = core.BetaNegativeBinomialDistribution(5., 6., 6.)

    @classmethod
    def tearDownClass(cls):
        """Test beta negative binomial distribution deletion"""
        del cls._dist