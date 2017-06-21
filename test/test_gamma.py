from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestGamma(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test Gamma distribution construction"""
        cls._dist = core.GammaDistribution()

    @classmethod
    def tearDownClass(cls):
        """Test Gamma distribution deletion"""
        del cls._dist