from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestCriteria(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test binomial simulation construction"""
        cls._data = core.BinomialDistribution(10, .5).simulation(100)

    def test_aic(self):
        """Test AIC selection"""
        bic = core.selection(self._data, "criterion", "AIC", estimators=[core.binomial_estimation("ml"),
                                                                   core.poisson_estimation("ml"),
                                                                   core.negative_binomial_estimation("ml")])
        # self.assertGreaterEqual(bic.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    def test_aicc(self):
        """Test AICc selection"""
        bic = core.selection(self._data, "criterion", "AICc", estimators=[core.binomial_estimation("ml"),
                                                                   core.poisson_estimation("ml"),
                                                                   core.negative_binomial_estimation("ml")])
        # self.assertGreaterEqual(bic.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    def test_bic(self):
        """Test BIC selection"""
        bic = core.selection(self._data, "criterion", "BIC", estimators=[core.binomial_estimation("ml"),
                                                                   core.poisson_estimation("ml"),
                                                                   core.negative_binomial_estimation("ml")])
        # self.assertGreaterEqual(bic.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    def test_hqic(self):
        """Test HQIC selection"""
        bic = core.selection(self._data, "criterion", "HQIC", estimators=[core.binomial_estimation("ml"),
                                                                   core.poisson_estimation("ml"),
                                                                   core.negative_binomial_estimation("ml")])
        # self.assertGreaterEqual(bic.estimated.loglikelihood(data), self._dist.loglikelihood(data))

    @classmethod
    def tearDownClass(cls):
        """Test data deletion"""
        del cls._data
