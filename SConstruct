# -*-python-*-

import os
from openalea.sconsx import config, environ
#from autowig.scons import boost_python_builder

ALEASolution = config.ALEASolution

pj = os.path.join

SConsignFile()

options = Variables(['../options.py', 'options.py'], ARGUMENTS)
tools = ['boost_python']

env = ALEASolution(options, tools)
env['middle_end'] = 'debug'
#boost_python_builder(env)
env['library'] = 'core'
env.AppendUnique(CXXFLAGS=['-x', 'c++', "-std=c++0x"])
#env.AppendUnique(CPPPATH=["/usr/include/eigen3",
#                          "/usr/include/eigen3/unsupported"])
env.AppendUnique(LIBS=['blas', 'lapack'])
# Set build directory
prefix = env['build_prefix']

# Build stage
SConscript(pj(prefix,"src/cpp/SConscript"), exports="env")
SConscript(pj(prefix,"src/wrapper/SConscript"), exports="env")

Default("build")
