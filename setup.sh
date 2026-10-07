#!/usr/bin/env bash
#
# sets up SimBricks + QEMU + Verilated Corundum
#
#   ./setup.sh            # everything (deps env corundum image)
#   ./setup.sh corundum   # just rebuild simb_corundum after RTL/adapter edits
#   ./setup.sh image      # just rebuild the guest image after driver edits
#
# everything goes in $SIMB_ROOT (./.simbricks).
set -euo pipefail

REPO="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SIMB_ROOT="${SIMB_ROOT:-$REPO/.simbricks}"
CORUNDUM="$REPO/component-corundum"

PACKER_VERSION=1.11.2
# image-builder has no releases; pin the commit this setup was tested with.
IMAGE_BUILDER_REF=7ed1792

MAMBA="$SIMB_ROOT/bin/micromamba"
export MAMBA_ROOT_PREFIX="$SIMB_ROOT/mamba"
export PACKER_PLUGIN_PATH="$SIMB_ROOT/packer-plugins"
export PACKER_CACHE_DIR="$SIMB_ROOT/packer-cache"
export PATH="$SIMB_ROOT/bin:$PATH"

log() { echo -e "\n=== $* ===" >&2; }
in_env() { "$MAMBA" run -n simbricks "$@"; }

step_deps() {
    log "Host packages (apt), KVM access, packer"
    sudo apt-get update
    sudo DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
        build-essential git curl ca-certificates bzip2 unzip rsync \
        qemu-system-x86 qemu-utils telnet

    # packer drives a stock qemu with KVM to build the guest image; simbricks'
    # own qemu uses KVM too in unsynchronized mode.
    sudo usermod -aG kvm "$USER"
    sudo chmod 666 /dev/kvm   # usermod only applies to new logins

    mkdir -p "$SIMB_ROOT/bin"
    if ! "$SIMB_ROOT/bin/packer" version 2>/dev/null | grep -q "$PACKER_VERSION"; then
        curl -fsSL -o "$SIMB_ROOT/packer.zip" \
            "https://releases.hashicorp.com/packer/${PACKER_VERSION}/packer_${PACKER_VERSION}_linux_amd64.zip"
        unzip -o -d "$SIMB_ROOT/bin" "$SIMB_ROOT/packer.zip" packer
        rm "$SIMB_ROOT/packer.zip"
    fi
}

step_env() {
    log "micromamba + conda env 'simbricks'"
    mkdir -p "$SIMB_ROOT/bin"
    if [ ! -x "$MAMBA" ]; then
        curl -fsSL https://micro.mamba.pm/api/micromamba/linux-64/latest \
            | tar -xj -C "$SIMB_ROOT" bin/micromamba
    fi
    if [ -d "$MAMBA_ROOT_PREFIX/envs/simbricks" ]; then
        "$MAMBA" update -y -n simbricks -f "$REPO/environment.yml"
    else
        "$MAMBA" create -y -f "$REPO/environment.yml"
    fi
}

step_corundum() {
    log "Verilate Corundum + build simb_corundum"
    git -C "$REPO" submodule update --init --recursive
    # component-corundum's Makefile doesn't track RTL dependencies: once
    # obj_dir exists, edited Verilog is silently ignored. Force re-verilation.
    local vsrc="$CORUNDUM/corundum/obj_dir/Vmqnic_core_axi.cpp"
    if [ -f "$vsrc" ] && [ -n "$(find "$CORUNDUM/corundum/fpga" \
            \( -name '*.v' -o -name '*.sv' -o -name '*.svh' -o -name '*.vh' \) \
            -newer "$vsrc" -print -quit)" ]; then
        echo "RTL changed since last build -> re-verilating"
        rm -rf "$CORUNDUM/corundum/obj_dir" "$CORUNDUM/adapter/corundum_simbricks_adapter"
    fi
    # shellcheck disable=SC2016  # expanded inside the env
    in_env bash -c '
        set -eu
        make -C "$1" corundum-install -j"$(nproc)" PREFIX="$CONDA_PREFIX" \
            SIMBRICKS_INC_DIR="$CONDA_PREFIX/include" SIMBRICKS_LIB_DIR="$CONDA_PREFIX/lib"
        # --no-deps: simbricks-orchestration etc. already come from conda
        python -m pip install -q --no-deps -e "$1/corundum_sys_py" -e "$1/corundum_sim_rtl_py"
    ' _ "$CORUNDUM"
}

step_image() {
    log "Guest disk image with our mqnic driver"
    local ib="$SIMB_ROOT/image-builder"
    if [ ! -d "$ib" ]; then
        git clone https://github.com/simbricks/image-builder.git "$ib"
    fi
    git -C "$ib" fetch -q origin
    git -C "$ib" checkout -q "$IMAGE_BUILDER_REF"

    # Driver sources handed to the guest (see image/install-mqnic.sh)
    local input="$SIMB_ROOT/image-input"
    rm -rf "$input" && mkdir -p "$input/component-corundum/corundum"
    cp "$CORUNDUM/Makefile" "$input/component-corundum/"
    for d in modules utils lib include; do
        rsync -a --exclude '*.o' --exclude '*.ko' --exclude '.*.cmd' \
            "$CORUNDUM/corundum/$d" "$input/component-corundum/corundum/"
    done

    # packer refuses to overwrite its output dir
    rm -rf "$ib/output/base"
    # NAME=base explicitly: some environments (e.g. WSL) export NAME=<hostname>.
    make -C "$ib" image NAME=base \
        INPUT="$input" \
        EXTRA_SCRIPTS="$REPO/image/install-mqnic.sh" \
        INSTALL_VMLINUX=false

    rm -rf "$SIMB_ROOT/images/base"
    mkdir -p "$SIMB_ROOT/images"
    mv "$ib/output/base" "$SIMB_ROOT/images/base"
    ls -la "$SIMB_ROOT/images/base" "$SIMB_ROOT/images/base/boot"
}

steps=("$@")
[ ${#steps[@]} -eq 0 ] && steps=(deps env corundum image)
for s in "${steps[@]}"; do
    case "$s" in
        deps|env|corundum|image) "step_$s" ;;
        *) echo "unknown step '$s' (deps|env|corundum|image)" >&2; exit 1 ;;
    esac
done
log "Done. Run: source env.sh"
