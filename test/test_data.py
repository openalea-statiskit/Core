try:
    import matplotlib
    matplotlib.use('Agg')
    from matplotlib import pyplot
except:
    import warnings
    warnings.warn("No module named matplotlib")

from statiskit import core
from statiskit.data import core as data

import unittest
from nose.plugins.attrib import attr

import os
from tempfile import NamedTemporaryFile

@attr(linux=True,
      osx=True,
      win=True,
      level=1)
class TestData(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('capushe')

    def test_copy(self):
        """Test multivariate data copy"""
        data = self._data.copy()
        del self.__class__._data
        self.__class__._data = data

    def test_access(self):
        """Test named data access"""
        for uevent, mevent in zip(self._data.pen.events, self._data.events):
            self.assertEqual(uevent.value, mevent[1].value)

    def test_repr(self):
        """Test univariate and multivariate data string representation"""
        for component in self._data.components:
            repr(component)
        repr(self._data)

    def test_repr_html(self):
        """Test univariate and multivariate data HTML representation"""
        for component in self._data.components:
            component._repr_html_()
        self._data._repr_html_()

    @attr(win=False)
    def test_pdf_plot(self):
        """Test univariate and multivariate data pdf plot"""
        for component in self._data.components:
            fig = pyplot.figure()
            component.pdf_plot()
            pyplot.close(fig)

    @attr(win=False)
    def test_cdf_plot(self):
        """Test univariate data cdf plot"""
        for component in self._data.components:
            fig = pyplot.figure()
            component.cdf_plot()
            pyplot.close(fig)

    def test_write_csv(self):
        """Test write data to csv"""
        tmp = NamedTemporaryFile()
        self._data.write_csv(tmp.name, header=True)
        data = core.read_csv(tmp.name, header=True)
        self.assertEqual(repr(data), repr(self._data))

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data
