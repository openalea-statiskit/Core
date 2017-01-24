# -*-python-*-

import os
from SCons import Errors

env = Environment(tools = ['toolchain'])

VariantDir('build', 'src')
try:
  SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
except Errors.EnvironmentError:
  pass
except Exception:
  raise
# try:
#   SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")
# except Errors.EnvironmentError:
#   pass
# except Exception:
#   raise

Default("install")
