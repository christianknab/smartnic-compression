#!/usr/bin/env bash
#
# Simulates zfp_tx_codec -> Corundum's mqnic_egress -> zfp_rx_codec with
# Verilator and checks every frame against the Python model.
#
#   nic-app/tb/run.sh                 # all configurations
#   nic-app/tb/run.sh 29              # one block size, all placeholder latencies
#   nic-app/tb/run.sh 29 1            # one block size, one latency
#
# Configurations: BLOCK_BITS 21/29/45 x placeholder encoder/decoder latency
# 1/9. Output in nic-app/tb/build/w<W>_l<L>/ (got.txt, expected.json, sim.log).
set -euo pipefail

TB_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO="$(cd "$TB_DIR/../.." && pwd)"
# not $BUILD: activating the conda env overwrites that
TB_BUILD="${TB_BUILD:-$TB_DIR/build}"

if ! command -v verilator >/dev/null; then
    set +u
    # shellcheck disable=SC1091
    source "$REPO/env.sh"
    set -u
fi

FPGA="$REPO/component-corundum/corundum/fpga"
SRC_FLAGS=()
for s in "$REPO/nic-app/rtl" "$FPGA/common/rtl" "$FPGA/lib/axis/rtl"; do
    SRC_FLAGS+=(-y "$s" "+incdir+$s")
done

block_bits=("${1:-21 29 45}")
latencies=("${2:-1 9}")

fails=0
for w in ${block_bits[*]}; do
    for l in ${latencies[*]}; do
        d="$TB_BUILD/w${w}_l${l}"
        rm -rf "$d"
        mkdir -p "$d"
        echo "=== W=$w, placeholder latency $l ==="

        python3 "$TB_DIR/zfp_vectors.py" gen "$d" --block-bits "$w" --seed "$((w * 100 + l))"

        verilator --binary --timing -j 0 -Wno-fatal -Wno-lint -Wno-style \
            --top-module tb_zfp --Mdir "$d/obj" -o Vtb_zfp \
            +define+ZFP_BLOCK_BITS="$w" +define+ZFP_STUB_LATENCY="$l" \
            "${SRC_FLAGS[@]}" \
            "$TB_DIR/tb_zfp.sv" > "$d/build.log" 2>&1 ||
            { cat "$d/build.log"; exit 1; }

        if ! (cd "$d" && ./obj/Vtb_zfp +seed=$((w * 7 + l)) > sim.log 2>&1); then
            cat "$d/sim.log"
            fails=$((fails + 1))
            continue
        fi
        grep -E "ERROR|tb_zfp:" "$d/sim.log" || true
        python3 "$TB_DIR/zfp_vectors.py" check "$d" || fails=$((fails + 1))
    done
done

if [ "$fails" -ne 0 ]; then
    echo "$fails configuration(s) FAILED"
    exit 1
fi
echo "all configurations passed"
