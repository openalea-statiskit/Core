import unittest
from statiskit import core

class TestData(unittest.TestCase):

    def test___read_multivariate_data(self):
        """Test multivariate data initialization using a CSV file"""
        capushe = core.read_data("capushe.csv", sep=',', header=True)

    def test__assignement(self):
        """Test matrix assignement"""
        M = linalg.Matrix(3,3)
        self.assertEqual(M[0,0], 0.)
        M[0, 0] = 1.
        self.assertEqual(M[0,0], 1.)

    def test_str(self):
        """Test matrix string representation"""
        M = linalg.Matrix(3,3)
        M[0,0] = 10.
        self.assertEqual(str(M), "[10.0, 0.0, 0.0]\n[ 0.0, 0.0, 0.0]\n[ 0.0, 0.0, 0.0]")

    def test_repr(self):
        """Test matrix string representation"""
        M = linalg.Matrix(3,3)
        M[-1,-1] = 10.
        self.assertEqual(repr(M), "[0.0, 0.0,  0.0]\n[0.0, 0.0,  0.0]\n[0.0, 0.0, 10.0]")

    def test_repr_latex(self):
        """Test matrix latex representation"""
        M = linalg.Matrix(3,3)
        M[0,0] = 10.
        self.assertEqual(M._repr_latex_(), "$\\begin{pmatrix}\n10.0 & 0.0 & 0.0\\\\\t\n 0.0 & 0.0 & 0.0\\\\\t\n 0.0 & 0.0 & 0.0\\\\\n\\end{pmatrix}$")