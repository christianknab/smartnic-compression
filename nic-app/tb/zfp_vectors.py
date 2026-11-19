#!/usr/bin/env python3
"""Test vectors and reference model for tb_zfp.sv.

    zfp_vectors.py gen DIR --block-bits W [--seed N]
        writes DIR/frames.mem, DIR/desc.mem (read by the testbench) and
        DIR/expected.json
    zfp_vectors.py check DIR
        compares DIR/got.txt (written by the testbench) against
        DIR/expected.json; exit status 1 on any mismatch

The model is written from the format described in nic-app/rtl/zfp_tx_codec.v,
not from the RTL, and mirrors the testbench chain:

    zfp_tx_codec -> mqnic_egress (Corundum TX checksum) -> pad to 60 bytes
    (what a MAC would do) -> zfp_rx_codec

--check-payload doesnt work for right now!!!! FIX CHRISTIANNN
"""

import argparse
import json
import math
import random
import struct
import sys
from pathlib import Path

UDP_PORT = 5555
DSCP = 13
TOS_MARK = DSCP << 2
CODEC_HDR_BYTES = 6
MIN_PAYLOAD = 16
VERSION = 1
MIN_FRAME = 60  # Ethernet minimum without FCS

SRC_MAC = bytes.fromhex("020000000002")
DST_MAC = bytes.fromhex("020000000001")
SRC_IP = bytes([10, 0, 0, 2])
DST_IP = bytes([10, 0, 0, 1])


# ---------------------------------------------------------------- checksums

def ones_sum(data: bytes, init: int = 0) -> int:
    if len(data) % 2:
        data += b"\0"
    s = init
    for i in range(0, len(data), 2):
        s += (data[i] << 8) | data[i + 1]
    while s >> 16:
        s = (s & 0xFFFF) + (s >> 16)
    return s


def ip_csum(hdr: bytes) -> int:
    return ~ones_sum(hdr[:10] + b"\0\0" + hdr[12:20]) & 0xFFFF


def pseudo_sum(ip_hdr: bytes, proto: int, l4_len: int) -> int:
    """UDP/TCP pseudo-header sum, not inverted (what Linux leaves in the
    checksum field for offload)."""
    return ones_sum(ip_hdr[12:20] + bytes([0, proto]) + l4_len.to_bytes(2, "big"))


def tx_checksum(frame: bytes, enable: int, start: int, offset: int) -> bytes:
    """Corundum's tx_checksum (USE_INIT_VALUE=0): one's complement sum from
    start to the end of the frame, inverted, written big endian at offset."""
    if not enable:
        return frame
    f = bytearray(frame)
    c = ~ones_sum(bytes(f[start:])) & 0xFFFF
    f[offset:offset + 2] = c.to_bytes(2, "big")
    return bytes(f)


# ------------------------------------------------------- placeholder codec

def encode_block(vals: list[int], w: int) -> int:
    k = w // 4
    blk = 0
    for i, v in enumerate(vals):
        blk |= (v >> (32 - k)) << (i * k)
    return blk


def decode_block(blk: int, w: int) -> list[int]:
    k = w // 4
    return [((blk >> (i * k)) & ((1 << k) - 1)) << (32 - k) for i in range(4)]


# ------------------------------------------------------------ frame model

def n_blocks(pl_len: int) -> int:
    return (pl_len + 15) // 16


def c_bytes(pl_len: int, w: int) -> int:
    return (n_blocks(pl_len) * w + 7) // 8


def udp_fields(f: bytes) -> dict | None:
    """Header fields both codecs look at; None if not IPv4/UDP to our port
    with consistent lengths (the codecs' udp_pkt)."""
    if len(f) < 42:
        return None
    flags = int.from_bytes(f[20:22], "big")
    ip_len = int.from_bytes(f[16:18], "big")
    udp_len = int.from_bytes(f[38:40], "big")
    if (f[12:14] != b"\x08\x00" or f[14] != 0x45 or f[23] != 17 or
            flags & 0x3FFF or int.from_bytes(f[36:38], "big") != UDP_PORT or
            ip_len != (udp_len + 20) & 0xFFFF):
        return None
    return {"flags": flags, "udp_len": udp_len}


def rewrite_hdr(f: bytes, udp_len: int, flags: int) -> bytearray:
    """Frame bytes 0-39 with new IP/UDP lengths, flags and IP checksum."""
    h = bytearray(f[:40])
    h[16:18] = (udp_len + 20).to_bytes(2, "big")
    h[20:22] = flags.to_bytes(2, "big")
    h[24:26] = ip_csum(bytes(h[14:34])).to_bytes(2, "big")
    h[38:40] = udp_len.to_bytes(2, "big")
    return h


def tx_model(f: bytes, cmd: tuple[int, int, int], w: int) -> tuple[bytes, bool]:
    """zfp_tx_codec + mqnic_egress. Returns (wire frame, compressed)."""
    u = udp_fields(f) if len(f) > 40 else None
    hit = False
    if u is not None:
        pl_len = (u["udp_len"] - 8) & 0xFFFF
        hit = (f[15] >> 2 == DSCP and not u["flags"] & 0x8000 and pl_len % 4 == 0 and
               u["udp_len"] >= 8 + MIN_PAYLOAD)
    if not hit:
        return tx_checksum(f, *cmd), False

    payload = f[42:42 + pl_len]
    payload += b"\0" * (n_blocks(pl_len) * 16 - pl_len)
    bits = 0
    for b in range(n_blocks(pl_len)):
        vals = list(struct.unpack_from("<4I", payload, b * 16))
        bits |= encode_block(vals, w) << (b * w)
    packed = bits.to_bytes(c_bytes(pl_len, w), "little")

    new_udp_len = 8 + CODEC_HDR_BYTES + len(packed)
    out = rewrite_hdr(f, new_udp_len, u["flags"] | 0x8000)
    seed = pseudo_sum(bytes(out[14:34]), 17, new_udp_len)
    out += seed.to_bytes(2, "big")
    out += pl_len.to_bytes(2, "big") + bytes([w, VERSION, 0, 0])
    out += packed
    # the codec always asks for a UDP checksum over the compressed packet
    return tx_checksum(bytes(out), 1, 34, 40), True


def rx_model(f: bytes, w: int) -> tuple[bytes, bool]:
    """zfp_rx_codec. Returns (output frame, decompressed)."""
    u = udp_fields(f) if len(f) > 48 else None
    if u is None or not u["flags"] & 0x8000:
        return f, False
    orig_len = int.from_bytes(f[42:44], "big")
    if not (f[44] == w and f[45] == VERSION and orig_len % 4 == 0 and
            orig_len >= MIN_PAYLOAD and
            u["udp_len"] == 8 + CODEC_HDR_BYTES + c_bytes(orig_len, w)):
        return f, False

    nb = n_blocks(orig_len)
    data = f[48:].ljust(c_bytes(orig_len, w), b"\0")  # a short frame reads as zeros
    bits = int.from_bytes(data[:c_bytes(orig_len, w)], "little")
    payload = b"".join(
        struct.pack("<4I", *decode_block((bits >> (b * w)) & ((1 << w) - 1), w))
        for b in range(nb))

    out = rewrite_hdr(f, orig_len + 8, u["flags"] & 0x7FFF)
    out += b"\0\0"  # UDP checksum: none
    out += payload[:orig_len]
    return bytes(out), True


# ------------------------------------------------------------ frame builders

def eth(ethertype: int, body: bytes) -> bytes:
    return DST_MAC + SRC_MAC + ethertype.to_bytes(2, "big") + body


def ipv4(proto: int, l4: bytes, flags: int = 0x4000, ident: int = 0, tos: int = 0) -> bytes:
    h = bytearray(20)
    h[0] = 0x45
    h[1] = tos
    h[2:4] = (20 + len(l4)).to_bytes(2, "big")
    h[4:6] = ident.to_bytes(2, "big")
    h[6:8] = flags.to_bytes(2, "big")
    h[8] = 64
    h[9] = proto
    h[12:16] = SRC_IP
    h[16:20] = DST_IP
    h[10:12] = ip_csum(bytes(h)).to_bytes(2, "big")
    return bytes(h) + l4


def udp_frame(payload: bytes, dport: int = UDP_PORT, flags: int = 0x4000,
              ident: int = 0, offload: bool = True,
              tos: int = TOS_MARK) -> tuple[bytes, tuple]:
    """A UDP frame as the host hands it to the NIC, by default marked for
    compression. With offload the checksum field holds the pseudo-header sum
    and the command asks for the rest."""
    udp_len = 8 + len(payload)
    l4 = (40000).to_bytes(2, "big") + dport.to_bytes(2, "big") + \
        udp_len.to_bytes(2, "big") + b"\0\0" + payload
    f = bytearray(eth(0x0800, ipv4(17, l4, flags, ident, tos)))
    if offload:
        f[40:42] = pseudo_sum(bytes(f[14:34]), 17, udp_len).to_bytes(2, "big")
        return bytes(f), (1, 34, 40)
    return bytes(f), (0, 0, 0)


def float_payload(rng: random.Random, n_floats: int) -> bytes:
    kind = rng.randrange(3)
    if kind == 0:   # smooth signal
        a, ph = rng.uniform(0.5, 100), rng.uniform(0, 6.28)
        vals = [a * math.sin(ph + 0.05 * i) for i in range(n_floats)]
    elif kind == 1:  # noise
        vals = [rng.gauss(0, rng.uniform(1e-3, 1e3)) for _ in range(n_floats)]
    else:           # raw bit patterns (NaNs, denormals, ...)
        return bytes(rng.randrange(256) for _ in range(4 * n_floats))
    return struct.pack(f"<{n_floats}f", *vals)


def make_frames(rng: random.Random) -> list[tuple[str, bytes, tuple]]:
    frames = []
    # compressed: payload sizes in floats, covering partial blocks (n % 4) and
    # partial 8-byte words (n odd), up to a full 1500-byte MTU (1472 bytes)
    sizes = [4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 16, 17, 25, 31, 64, 100,
             127, 128, 200, 255, 256, 300, 367, 368]
    for i, n in enumerate(sizes):
        offload = i % 5 != 3  # some without checksum offload requested
        ecn = i % 4           # the ECN bits must not matter
        f, cmd = udp_frame(float_payload(rng, n), ident=i, offload=offload,
                           tos=TOS_MARK | ecn)
        frames.append((f"udp {4 * n}B" + ("" if offload else " no-offload") +
                       (f" ecn{ecn}" if ecn else ""), f, cmd))

    # must pass through untouched
    f, cmd = udp_frame(float_payload(rng, 32), tos=0)
    frames.append(("no DSCP mark", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 32), tos=(DSCP + 1) << 2)
    frames.append(("other DSCP", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 32), dport=5556)
    frames.append(("other port", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 32)[:-2])
    frames.append(("odd length", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 3))
    frames.append(("too short", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 32), flags=0xC000)
    frames.append(("already marked", f, cmd))
    f, cmd = udp_frame(float_payload(rng, 32), flags=0x2000)
    frames.append(("fragmented", f, cmd))

    tcp = bytearray(20 + 64)
    tcp[0:2], tcp[2:4] = (40000).to_bytes(2, "big"), UDP_PORT.to_bytes(2, "big")
    tcp[12] = 0x50
    tcp[20:] = bytes(rng.randrange(256) for _ in range(64))
    f = bytearray(eth(0x0800, ipv4(6, bytes(tcp))))
    f[50:52] = pseudo_sum(bytes(f[14:34]), 6, len(tcp)).to_bytes(2, "big")
    frames.append(("tcp", bytes(f), (1, 34, 50)))

    arp = bytes.fromhex("0001080006040001") + SRC_MAC + SRC_IP + bytes(6) + DST_IP
    frames.append(("arp", eth(0x0806, arp), (0, 0, 0)))
    frames.append(("34-byte frame", eth(0x0800, bytes(rng.randrange(256) for _ in range(20))),
                   (0, 0, 0)))

    rng.shuffle(frames)
    return frames


# ------------------------------------------------------------------ main

def gen(d: Path, w: int, seed: int) -> None:
    d.mkdir(parents=True, exist_ok=True)
    rng = random.Random(seed)
    frames = make_frames(rng)

    mem, desc, exp = [], [len(frames)], []
    for name, f, cmd in frames:
        wire, comp = tx_model(f, cmd, w)
        out, decomp = rx_model(wire.ljust(MIN_FRAME, b"\0"), w)
        assert comp == decomp, name
        desc += [len(mem), len(f), cmd[0], (cmd[1] << 8) | cmd[2]]
        mem += f
        exp.append({"name": name, "compressed": comp, "in_len": len(f),
                    "wire": wire.hex(), "out": out.hex()})

    (d / "frames.mem").write_text("\n".join(f"{b:02x}" for b in mem) + "\n")
    (d / "desc.mem").write_text("\n".join(f"{x:08x}" for x in desc) + "\n")
    (d / "expected.json").write_text(json.dumps({"block_bits": w, "frames": exp}, indent=1))


def first_diff(a: str, b: str) -> int:
    a, b = bytes.fromhex(a), bytes.fromhex(b)
    for i in range(min(len(a), len(b))):
        if a[i] != b[i]:
            return i
    return min(len(a), len(b))


# Bytes of a compressed frame that depend on the ZFP output, as (start, end)
# with end None meaning "to the end of the frame". Skipped unless --check-payload.
#   wire: UDP checksum (covers the packed blocks) and the packed blocks after
#         the 6-byte codec header
#   out:  the decoded floats
PAYLOAD_RANGES = {
    "wire": [(40, 42), (48, None)],
    "out":  [(42, None)],
}


def mask(hexstr: str, ranges) -> str:
    """Zero the given byte ranges; the length stays the same."""
    b = bytearray.fromhex(hexstr)
    for start, end in ranges:
        end = len(b) if end is None else end
        b[start:end] = bytes(len(b[start:end]))
    return b.hex()


def check(d: Path, check_payload: bool = False) -> int:
    exp = json.loads((d / "expected.json").read_text())
    got = {"W": {}, "O": {}}
    for line in (d / "got.txt").read_text().splitlines():
        kind, idx, *data = line.split()
        got[kind][int(idx)] = data[0] if data else ""

    fails = 0
    in_bytes = wire_bytes = 0
    for i, e in enumerate(exp["frames"]):
        for kind, key in (("W", "wire"), ("O", "out")):
            g = got[kind].get(i)
            want = e[key]
            if g is not None and e["compressed"] and not check_payload:
                g, want = mask(g, PAYLOAD_RANGES[key]), mask(want, PAYLOAD_RANGES[key])
            if g != want:
                fails += 1
                where = "missing" if g is None else \
                    f"len {len(g) // 2} vs {len(want) // 2}, first diff at byte {first_diff(g, want)}"
                print(f"FAIL frame {i} ({e['name']}) {key}: {where}")
        if e["compressed"]:
            in_bytes += e["in_len"]
            wire_bytes += len(e["wire"]) // 2

    n = len(exp["frames"])
    n_comp = sum(e["compressed"] for e in exp["frames"])
    status = "PASS" if fails == 0 else f"FAIL ({fails} mismatches)"
    if not check_payload:
        status += " [payload not checked]"
    print(f"{status}: W={exp['block_bits']}, {n} frames, {n_comp} compressed, "
          f"compressed frames {in_bytes} -> {wire_bytes} bytes on the wire")
    return 1 if fails else 0


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__,
                                formatter_class=argparse.RawDescriptionHelpFormatter)
    sub = p.add_subparsers(dest="cmd", required=True)
    g = sub.add_parser("gen")
    g.add_argument("dir", type=Path)
    g.add_argument("--block-bits", type=int, required=True)
    g.add_argument("--seed", type=int, default=1)
    c = sub.add_parser("check")
    c.add_argument("dir", type=Path)
    c.add_argument("--check-payload", action="store_true",
                   help="also compare compressed payload bytes (needs a "
                        "bit-exact encode_block/decode_block)")
    a = p.parse_args()
    if a.cmd == "gen":
        gen(a.dir, a.block_bits, a.seed)
        return 0
    return check(a.dir, a.check_payload)


if __name__ == "__main__":
    sys.exit(main())
