set -ve

if [ "$(uname)" == "Darwin" ]; then
   scons cpp-dev --prefix=$PREFIX -j$CPU_COUNT
fi

if [ "$(uname)" == "Linux" ]; then
    scons autowig --prefix=$PREFIX -j$CPU_COUNT --autowig-no-wrappers
fi

set +ve