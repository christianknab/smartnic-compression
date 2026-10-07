#!/usr/bin/env bash
set -e

echo "=== 1. Building Verilated Corundum NIC ==="
cd /workspace/component-corundum
make corundum-build SIMBRICKS_INC_DIR="$CONDA_PREFIX/include" SIMBRICKS_LIB_DIR="$CONDA_PREFIX/lib"
make corundum-install PREFIX="$CONDA_PREFIX" SIMBRICKS_INC_DIR="$CONDA_PREFIX/include" SIMBRICKS_LIB_DIR="$CONDA_PREFIX/lib"
make corundum-python-develop PYTHON=python

echo "=== 2. Building mqnic Disk Image ==="
cd /workspace
if [ ! -d "image-builder" ]; then
    git clone https://github.com/simbricks/image-builder.git
fi
cd image-builder
sed -i 's/build-essential/build-essential git ca-certificates/' examples/corundum/install-mqnic.sh
make image NAME=base EXTRA_SCRIPTS="examples/corundum/install-mqnic.sh"

echo "=== 3. Organizing Image Artifacts ==="
mkdir -p /workspace/global_input/images/base
cp -r /workspace/image-builder/output/base/* /workspace/global_input/images/base/
ln -sf /workspace/global_input/images/base/base /workspace/global_input/images/base/base.qcow2

echo "=== Setup Complete! ==="
