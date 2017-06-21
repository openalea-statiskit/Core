import matplotlib
matplotlib.use('Agg')

import unittest
from nose.plugins.attrib import attr

import numpy
import math

class AbstractTestDistribution(object):

    pass

class AbstractTestUnivariateDistribution(AbstractTestDistribution):

    _num = 10
    _pmin = 0.025
    _pmax = 0.975

class AbstractTestDiscreteUnivariateDistribution(AbstractTestUnivariateDistribution):

    _num = 10
    _pmin = 0.025
    _pmax = 0.975

    def test_pdf_ldf_cdf(self):
        """Test probability distribution function and related functions"""
        for v in numpy.linspace(self._dist.quantile(self._pmin),
                                self._dist.quantile(self._pmax) + 1,
                                num=self._num,
                                dtype=numpy.int):
            self.assertAlmostEqual(self._dist.cdf(v - 1) + self._dist.pdf(v), self._dist.cdf(v))
            if not self._dist.pdf(v) == 0:
                self.assertAlmostEqual(math.log(self._dist.pdf(v)), self._dist.ldf(v))

    def test_quantile(self):
        """Test quantile computation"""
        for p in numpy.linspace(self._pmin, self._pmax, num=self._num):
            q = self._dist.quantile(p)
            self.assertGreaterEqual(self._dist.cdf(q), p)
            self.assertLess(self._dist.cdf(q-1), p)


class AbstractTestContinuousUnivariateDistribution(AbstractTestUnivariateDistribution):

    _espilon = 1e-7
    _places = 7

    def test_pdf_ldf_cdf(self):
        """Test probability distribution function and related functions"""
        for v in numpy.linspace(self._dist.quantile(self._pmin),
                                self._dist.quantile(self._pmax),
                                num=self._num,
                                dtype=numpy.double):
            self.assertAlmostEqual(self._dist.cdf(v + self._espilon), self._dist.cdf(v) + self._espilon * self._dist.pdf(v), places=self._places)
            if not self._dist.pdf(v) == 0:
                self.assertAlmostEqual(math.log(self._dist.pdf(v)), self._dist.ldf(v))

    def test_quantile(self):
        """Test quantile computation"""
        for p in numpy.linspace(self._pmin, self._pmax, num=self._num):
            q = self._dist.quantile(p)
            self.assertGreaterEqual(self._dist.cdf(q + self._espilon), p)
            self.assertLessEqual(self._dist.cdf(q - self._espilon), p)

class AbstractTestMultivariateDistribution(AbstractTestDistribution):

    pass

class AbstractTestDiscreteMultivariateDistribution(AbstractTestMultivariateDistribution):

    pass