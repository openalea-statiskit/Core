from test_distribution import AbstractTestDiscreteMultivariateDistribution

from statiskit import linalg
from statiskit import core

import unittest
from nose.plugins.attrib import attr

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestDirichletMultinomialSplitting(unittest.TestCase, AbstractTestDiscreteMultivariateDistribution):

    @classmethod
    def setUpClass(cls):
        """Test Dirichlet multinomial splitting distribution construction"""
        cls._dist = core.DirichletMultinomialSplittingDistribution(core.PoissonDistribution(5.),
                                                                   linalg.Vector([2., 1.]))
    def test_estimation(self):
        """Test Dirichlet multinomial splitting estimation"""
        data = self._dist.simulation(100)
        fpe = core.splitting_estimation('DM',
                                        data,
                                        sum=core.poisson_estimation('ml'))
        self.assertGreaterEqual(fpe.estimated.loglikelihood(data), self._dist.loglikelihood(data))