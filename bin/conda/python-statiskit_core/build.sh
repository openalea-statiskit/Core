set -ve

if [[ "$PY3K" = "1" ]]; then
  2to3 -n -w $SRC_DIR/src/py/statiskit
  2to3 -n -w $SRC_DIR/test
fi

scons py --prefix=$PREFIX -j$CPU_COUNT

set +ve