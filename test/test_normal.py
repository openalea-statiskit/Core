from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestNormal(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test normal_estimation distribution construction"""
        cls._dist = core.NormalDistribution(1., 2.)

    def test_mle(self):
        """Test normal ML estimation"""
        data = self._dist.simulation(20)
        mle = core.normal_estimation('ml', data)
        self.assertGreaterEqual(mle.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test distribution deletion"""
        del cls._dist