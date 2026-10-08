#!/usr/bin/env python3
"""Checks the NIC's fp32 -> bf16 UDP truncation end to end (runs in the guests).

    udp_floats.py recv            # on the receiver, prints one line per datagram
    udp_floats.py send <ip>       # on the sender

The sender sends every entry of CASES once. The first float of each datagram is
its case index (exact in bf16), so the receiver knows what it should get: for
"trunc" cases the payload with the low 16 bits of every float zeroed, for
"exact" cases the payload unchanged (other port, too short, or not a whole
number of floats -- the NIC must leave those alone).
"""

import random
import socket
import struct
import sys
import time

PORT = 5555         # must match CODEC_UDP_PORT in nic-app/rtl/mqnic_app_block.v
OTHER_PORT = 5556

# (port, payload bytes, expected result)
CASES = [
    (PORT, 362 * 4, "trunc"),       # 1448 B, what a full TCP-sized segment would carry
    (PORT, 368 * 4, "trunc"),       # 1472 B, largest that fits a 1500 B MTU
    (PORT, 9 * 4, "trunc"),         # smallest the NIC compresses (odd float count)
    (PORT, 10 * 4, "trunc"),        # even float count: other final-beat alignment
    (PORT, 100 * 4, "trunc"),
    (PORT, 8 * 4, "exact"),         # below the minimum
    (PORT, 100 * 4 + 2, "exact"),   # not a whole number of floats
    (OTHER_PORT, 362 * 4, "exact"),  # not our port
]


def payload(idx: int) -> bytes:
    _, nbytes, _ = CASES[idx]
    rng = random.Random(idx)
    nfloats = nbytes // 4
    vals = [float(idx)] + [rng.uniform(-1000.0, 1000.0) for _ in range(nfloats - 1)]
    data = struct.pack(f"<{nfloats}f", *vals)
    return data + bytes(rng.randrange(256) for _ in range(nbytes - len(data)))


def truncate(data: bytes) -> bytes:
    out = bytearray(data)
    for i in range(0, len(out) - len(out) % 4, 4):
        out[i] = out[i + 1] = 0     # little endian: bytes 0-1 are the low mantissa bits
    return bytes(out)


def max_rel_err(sent: bytes, got: bytes) -> float:
    n = min(len(sent), len(got)) // 4
    a = struct.unpack(f"<{n}f", sent[:n * 4])
    b = struct.unpack(f"<{n}f", got[:n * 4])
    return max((abs(x - y) / abs(x) for x, y in zip(a, b) if x != 0.0), default=0.0)


def recv() -> None:
    socks = []
    for port in (PORT, OTHER_PORT):
        s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        s.bind(("0.0.0.0", port))
        s.settimeout(0.1)
        socks.append(s)
    print("recv: listening", flush=True)

    passed = 0
    seen = set()
    deadline = time.time() + 120
    while len(seen) < len(CASES) and time.time() < deadline:
        for s in socks:
            try:
                data, _ = s.recvfrom(65536)
            except socket.timeout:
                continue
            port = s.getsockname()[1]
            idx = int(struct.unpack("<f", data[:4])[0]) if len(data) >= 4 else -1
            if not 0 <= idx < len(CASES):
                print(f"recv: port {port}: {len(data)} B, unknown case -> FAIL", flush=True)
                continue
            seen.add(idx)
            case_port, _, kind = CASES[idx]
            sent = payload(idx)
            want = truncate(sent) if kind == "trunc" else sent
            ok = data == want and port == case_port
            passed += ok
            print(f"recv: case {idx} port {port}: {len(data)} B, expect {kind}, "
                  f"max rel err {max_rel_err(sent, data):.2e} -> {'PASS' if ok else 'FAIL'}",
                  flush=True)
            if not ok and len(data) == len(want):
                bad = next(i for i in range(len(data)) if data[i] != want[i])
                print(f"recv:   first mismatch at byte {bad}: got {data[bad:bad+8].hex()} "
                      f"want {want[bad:bad+8].hex()}", flush=True)
    print(f"recv: RESULT {passed}/{len(CASES)} passed, "
          f"missing cases {sorted(set(range(len(CASES))) - seen)}", flush=True)


def send(ip: str) -> None:
    s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    for idx, (port, nbytes, kind) in enumerate(CASES):
        s.sendto(payload(idx), (ip, port))
        print(f"send: case {idx} -> port {port}, {nbytes} B, expect {kind}", flush=True)
        time.sleep(0.2)


if __name__ == "__main__":
    if len(sys.argv) >= 2 and sys.argv[1] == "recv":
        recv()
    elif len(sys.argv) >= 3 and sys.argv[1] == "send":
        send(sys.argv[2])
    else:
        sys.exit(__doc__)
