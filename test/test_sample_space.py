import matplotlib
matplotlib.use('Agg')

from statiskit import core
from statiskit.data import core as data

import unittest
from nose.plugins.attrib import attr

import os
from tempfile import NamedTemporaryFile
import math

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestSampleSpace(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('capushe')

    def test_encode(self):
        """Test sample space encoding of events"""
        for event in self._data.events:
            self._data.sample_space.encode(event)
            
    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data
