import types

__all__ = []

class NotImportedModule(types.ModuleType):

    def __init__(self, module):
        self._module = module

    def __setattr__(self, arg, value):
        raise ImportError("No module named " + self._module)

    def __getattr__(self, arg):
        raise ImportError("No module named " + self._module)

try:
    from matplotlib import pyplot
except ImportError:
    pyplot = NotImportedModule('matplotlib.pyplot')