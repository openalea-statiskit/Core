##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

from controls import controls

def unused_warning(**kwargs):
    pass

def float_str(value):
    float_str = str(value)
    return float_str[:float_str.index('.') + controls.precision + 1]

def remove_latex(string):
    return string.replace('$', '')