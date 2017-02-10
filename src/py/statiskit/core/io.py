##################################################################################
#                                                                                #
# StatisKit-CoreThis software is distributed under the CeCILL-C license. You     #
# should have received a copy of the legalcode along with this work. If not, see #
# <http://www.cecill.info/licences/Licence_CeCILL-C_V1-en.html>.                 #
#                                                                                #
##################################################################################

import string
import warnings
from tempfile import NamedTemporaryFile
import os
from statiskit.core import statiskit_core, __statiskit_core

from controls import *
from data_frame import *
from sample_space import *

def read_csv(filepath, sep, header=False, **kwargs):
    """
    """
    if not isinstance(sep, basestring):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'r') as filehandler:
        lines = filehandler.readlines()
        if header:
            names = [name.replace('\n', '').strip('"').strip("'").strip() for name in lines.pop(0).split(sep)]
            datas = [[] for name in names]
        else:
            datas = [[] for event in lines[0].split(sep)]
        for line in lines:
            for index, event in enumerate(line.split(sep)):
                datas[index].append(event)
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
        data_frames = [UnivariateDataFrame(sample_space) for sample_space in sample_spaces]
        for index, data in enumerate(datas):
            for event in data:
                data_frames[index].append(event)
        data_frame = MultivariateDataFrame(*data_frames)
        if header:
            for i, j in enumerate(names):
                data_frame.variables[i].name.identifier = j
                if not data_frame.variables[i].name.identifier == j:
                    data_frame.variables[i].name.ascii = j
        return data_frame

def write_csv(data_frame, filepath, sep=';', header=False, censored=True):
    """
    """
    if not isinstance(data_frame, MultivariateDataFrame):
        raise TypeError('\'data_frame\' parameter')
    if not isinstance(sep, basestring):
        raise TypeError('\'sep\' parameter')
    with open(filepath, 'w') as filehandler:
        if header:
            filehandler.write(sep.join(variable.name.ascii for variable in data_frame.variables)+'\n')
        if censored:
            for mevent in data_frame:
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
            for mevent in data_frame:
                line = []
                for uevent in mevent:
                    if uevent is None or not isinstance(uevent, __statiskit_core._ElementaryEvent):
                        warnings.warn('\'data_frame\' parameter contains non-atomic event')
                        line.append('?')
                    else:
                        line.append(str(uevent.value))
                filehandler.write(sep.join(line) + '\n')

def from_pandas(data_frame):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    data_frame.to_csv(filehandler.name, sep=';', na_rep='?', index=False)
    data_frame = read_csv(filehandler.name, header=True, sep=';')
    os.unlink(filehandler.name)
    return data_frame

def to_pandas(data_frame):
    """
    """
    filehandler = NamedTemporaryFile(delete=False)
    filehandler.close()
    write_csv(data_frame, filehandler.name, sep=';', header=True, censored=False)
    from pandas import read_csv
    return read_csv(filehandler.name, sep=';', header=0, na_values=['?', ''])
