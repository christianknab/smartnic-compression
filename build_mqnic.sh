cd /workspace
if [ ! -d "image-builder" ]; then
    git clone https://github.com/simbricks/image-builder.git
fi
cd image-builder
sed -i 's/build-essential/build-essential git ca-certificates/' examples/corundum/install-mqnic.sh
make image NAME=base EXTRA_SCRIPTS="examples/corundum/install-mqnic.sh"
