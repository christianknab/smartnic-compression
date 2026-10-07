#!/bin/bash
#
# image-builder guest stage: build + install the mqnic driver (and corundum
# utils like mqnic-config) from OUR component-corundum tree, not upstream.
#
# setup.sh stages component-corundum/{Makefile,corundum/{modules,utils,lib,include}}
# and passes it as `make image INPUT=...`; packer unpacks it to /var/tmp/input.
# So driver changes in component-corundum/corundum/modules/mqnic only need an
# image rebuild (./setup.sh image), no commits/pushes.
set -eux
export DEBIAN_FRONTEND=noninteractive

apt-get update
apt-get install -y --no-install-recommends build-essential

# Build against the kernel the image will boot (installed by the base stages),
# not `uname -r` -- the build VM is still running the cloud image's kernel.
KDIR=$(ls -d /lib/modules/*/build | sort -V | tail -1)
KVER=$(basename "$(dirname "$KDIR")")

SRC=/var/tmp/input/component-corundum
make -C "$SRC" driver-install KDIR="$KDIR" KVER="$KVER"
install -m755 "$SRC"/corundum/utils/mqnic-config "$SRC"/corundum/utils/mqnic-dump /usr/local/bin/

echo mqnic > /etc/modules-load.d/simbricks-mqnic.conf   # autoload on boot
