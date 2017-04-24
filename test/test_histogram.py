from test_distribution import AbstractTestContinuousUnivariateDistribution

from statiskit import core

import unittest
from nose.plugins.attrib import attr

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestRegularHistogram(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

#     @classmethod
#     def test__init(cls):
#         """Test regular histogram distribution construction"""
#         data = core.NormalDistribution().simulation(100)
#         shs = core.histogram_estimation(data, algo='reg')
#         cls._dist = shs.estimated.copy()

#     @classmethod
#     def tearDownClass(cls):
#         """Test distribution deletion"""
#         del cls._dist

# @attr(linux=True,
#       osx=True,
#       win=True,
#       level=1)
# class TestIrregularHistogram(unittest.TestCase, AbstractTestContinuousUnivariateDistribution):

#     def test__init(self):
#         """Test irregular histogram distribution construction"""
#         data = core.NormalDistribution().simulation(100)
#         self._dist = core.histogram_estimation(data, algo='irr').estimated.copy()

#     @classmethod
#     def tearDownClass(cls):
#         """Test distribution deletion"""
#         del cls._dist