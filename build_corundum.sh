# run in the container
cd /workspace/component-corundum
make corundum-build SIMBRICKS_INC_DIR="$CONDA_PREFIX/include" SIMBRICKS_LIB_DIR="$CONDA_PREFIX/lib"
make corundum-install PREFIX="$CONDA_PREFIX" SIMBRICKS_INC_DIR="$CONDA_PREFIX/include" SIMBRICKS_LIB_DIR="$CONDA_PREFIX/lib"
make corundum-python-develop PYTHON=python
