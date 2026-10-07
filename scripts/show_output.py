#!/usr/bin/env python3
"""Print simulator output (guest consoles, NIC/switch logs) from a simbricks run.

    scripts/show_output.py                         # newest out/*/*/output/out.json
    scripts/show_output.py out/iperf-sync/0        # a specific run
    scripts/show_output.py -s host1 -g Mbits       # only host1, only lines matching
"""

import argparse
import json
import re
from pathlib import Path

ap = argparse.ArgumentParser()
ap.add_argument("run", nargs="?", help="run dir or out.json (default: newest under out/)")
ap.add_argument("-s", "--sim", help="only simulators whose name contains this")
ap.add_argument("-g", "--grep", help="only lines matching this regex")
ap.add_argument("-n", "--tail", type=int, help="only the last N lines per simulator")
args = ap.parse_args()

if args.run is None:
    files = sorted(Path("out").glob("*/*/output/out.json"), key=lambda p: p.stat().st_mtime)
    if not files:
        raise SystemExit("no out/*/*/output/out.json found")
    path = files[-1]
else:
    path = Path(args.run)
    if path.is_dir():
        path = path / "output" / "out.json"

data = json.loads(path.read_text())
print(f"# {path}  success={data.get('_success')}  "
      f"duration={data['_end_time'] - data['_start_time']:.1f}s")

for name, sim in data.items():
    if name.startswith("_") or not isinstance(sim, dict) or "output" not in sim:
        continue
    if args.sim and args.sim not in name:
        continue
    lines = [l for o in sim["output"] for l in o.get("merged_output", [])]
    if args.grep:
        lines = [l for l in lines if re.search(args.grep, l)]
    if args.tail:
        lines = lines[-args.tail:]
    print(f"\n===== {name} ({len(lines)} lines) =====")
    print("\n".join(lines))
