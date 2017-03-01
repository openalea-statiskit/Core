##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

__all__ = ['read_csv', 'write_csv', 'from_pandas', 'to_pandas', 'from_list', 'to_list']

import warnings
from tempfile import NamedTemporaryFile
import os

import controls
from data import UnivariateDataFrame, MultivariateDataFrame
from sample_space import UnivariateSampleSpace

def read_csv(filepath, sep, header=False, **kwargs):
    """
    """
    if not isinstance(sep, basestring):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'r') as filehandler:
        lines = filehandler.readlines()
    if header:
        names = [name.replace('\n', '').strip('"').strip("'").strip() for name in lines.pop(0).split(sep)]
        data = [[] for name in names]
    else:
        data = [[] for event in lines[0].split(sep)]
    for line in lines:
        for index, event in enumerate(line.split(sep)):
            data[index].append(event)
    return from_list(data, **kwargs)

def from_list(data, **kwargs):

    if 'sample_spaces' in kwargs:
        sample_spaces = kwargs.pop('sample_spaces')
    else:
        sample_spaces = []
        for data in datas:
            nbstr = 0
            nbint = 0
            nbflt = 0
            for event in data:
                try:
                    controls.ZZ(event)
                    nbint += 1
                except:
                    try:
                        controls.RR(event)
                        nbflt += 1
                    except:
                        nbstr += 1
            if nbstr > nbint + nbflt:
                sample_spaces.append(NominalSampleSpace(*data))
            elif nbint > nbstr + nbflt:
                sample_spaces.append(controls.ZZ)
            elif nbflt > nbstr + nbint:
                sample_spaces.append(controls.RR)
            else:
                raise ValueError
    datas = [UnivariateDataFrame(sample_space) for sample_space in sample_spaces]
    for index, data in enumerate(datas):
        for event in data:
            datas[index].append(event)
    data = MultivariateDataFrame(*datas)
    if header:
        for i, j in enumerate(names):
            data.variables[i].name.identifier = j
            if not data.variables[i].name.identifier == j:
                data.variables[i].name.ascii = j
    return data

def write_csv(data, filepath, sep=';', header=False, censored=True):
    """
    """
    if not isinstance(data, MultivariateDataFrame):
        raise TypeError('\'data\' parameter')
    if not isinstance(sep, basestring):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'w') as filehandler:
        if header:
            filehandler.write(sep.join(variable.name.ascii for variable in data.variables)+'\n')
        if censored:
            for mevent in data:
                line = []
                for uevent in mevent:
                    if uevent is None:
                        line.append('?')
                    else:
                        if isinstance(uevent, __statiskit_core._ElementaryEvent):
                            line.append(str(uevent.value))
                        elif isinstance(uevent, __statiskit_core._SetCensoredEvent):
                            line.append('{' + ', '.join(str(value) for value in uevent.values) + '}')
                        elif isinstance(uevent, __statiskit_core._LeftCensoredEvent):
                            line.append(str(uevent.upper_bound)+'-')
                        elif isinstance(uevent, __statiskit_core._RightCensoredEvent):
                            line.append(str(uevent.lower_bound)+'+')
                        elif isinstance(uevent, __statiskit_core._IntervalCensoredEvent):
                            if isinstance(uevent, __statiskit_core.DiscreteEvent):
                                line.append('[' + str(uevent.lower_bound) + ', ' + str(uevent.upper_bound)+']')
                            elif isinstance(uevent, __statiskit_core.ContinuousEvent):
                                line.append(']' + str(uevent.lower_bound) + ', ' + str(uevent.upper_bound)+'[')
                            else:
                                raise NotImplementedError
                        else:
                            raise NotImplementedError
                filehandler.write(sep.join(line)+'\n')
        else:
            for mevent in data:
                line = []
                for uevent in mevent:
                    if uevent is None or not isinstance(uevent, __statiskit_core._ElementaryEvent):
                        warnings.warn('\'data\' parameter contains non-atomic event')
                        line.append('?')
                    else:
                        line.append(str(uevent.value))
                filehandler.write(sep.join(line) + '\n')

def from_pandas(data):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    data.to_csv(filehandler.name, sep=';', na_rep='?', index=False)
    data = read_csv(filehandler.name, header=True, sep=';')
    os.unlink(filehandler.name)
    return data

def to_pandas(data):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    write_csv(data, filehandler.name, sep=';', header=True, censored=False)
    return read_csv(filehandler.name, sep=';', header=0, na_values=['?', ''])
