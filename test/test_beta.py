from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestBeta(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test Beta distribution construction"""
        cls._dist = core.BetaDistribution()

    @classmethod
    def tearDownClass(cls):
        """Test Beta distribution deletion"""
        del cls._dist