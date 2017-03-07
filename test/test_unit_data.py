import unittest
from tempfile import NamedTemporaryFile
import matplotlib
matplotlib.use('Agg')
from matplotlib import pyplot

from statiskit import core
from statiskit.data import core as data

class TestData(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        """Test multivariate data construction"""
        cls._data = data.load('capushe')

    def test_iterator(self):
        """Test multivariate data iterator"""
        for iterator in self._data:
            self.assertEqual(len(iterator.event), self._data.nb_variables)
            self.assertEqual(iterator.weight, 1.)

    def test_copy(self):
        """Test multivariate data copy"""
        data = self._data.copy()
        del self.__class__._data
        self.__class__._data = data
        self.test_iterator()

    def test_access(self):
        """Test named data access"""
        #self.assertIn('pen', self._data)
        for iterators in zip(self._data.pen, self._data):
            self.assertEqual(iterators[0].event.value, iterators[1].event[1].value)

    def test_str(self):
        """Test univariate and multivariate data string representation"""
        for index in range(self._data.nb_variables):
            self._data.get_variable(index).__str__()
        self._data.__str__()

    def test_repr_html(self):
        """Test univariate and multivariate data HTML representation"""
        for index in range(self._data.nb_variables):
            self._data.get_variable(index)._repr_html_()
        self._data._repr_html_()

    def test_pdf_plot(self):
        """Test univariate and multivariate data pdf plot"""
        for index in range(self._data.nb_variables):
            fig = pyplot.figure()
            self._data.get_variable(index).pdf_plot()
            pyplot.close()

    def test_cdf_plot(self):
        """Test univariate data cdf plot"""
        for index in range(self._data.nb_variables):
            fig = pyplot.figure()
            self._data.get_variable(index).cdf_plot()
            pyplot.close()

    def test_write_csv(self):
        """Test write data to csv"""
        tmp = NamedTemporaryFile()
        self.write_csv(tmp.name)
        with open(tmp.name, 'r') as filehandler:
            written = "".join(tmp.readlines())
        with open(data.__file__, 'r') as filehandler:
            read = "".join(tmp.readlines())
        self.assertEqual(written, read)
        os.unlink(tmp.name)

    @classmethod
    def tearDownClass(cls):
        """Test multivariate data deletion"""
        del cls._data