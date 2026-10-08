"""Functional test of the NIC's fp32 -> bf16 UDP truncation (nic-app/rtl).

Same topology as corundum_qemu_vp.py. host1 (10.0.0.2) sends float datagrams
with scripts/guest/udp_floats.py, NIC1 truncates them, NIC0 widens them again,
and host0 (10.0.0.1) checks what arrives and prints PASS/FAIL per datagram.

    source env.sh
    simbricks-run --verbose experiments/trunc_udp.py
    scripts/show_output.py -s host0 -g recv:

The switch also dumps every frame it forwards, i.e. the compressed sizes:

    tcpdump -nn -r out/trunc-nosync/<run>/switch.pcap udp
"""

import os
from pathlib import Path

from simbricks.orchestration import system
from simbricks.orchestration.helpers import simulation as sim_helpers
from simbricks.orchestration.helpers import instantiation as inst_helpers
from simbricks.components.qemu import simulation as qemu_sim
from simbricks.components.net.simulation import base as net_sim
from simbricks.components.corundum import system as corundum_sys
from simbricks.components.corundum import simulation as corundum_sim

# Unsynchronized is enough here: this checks bytes, not timing
SYNC = os.environ.get("SIMB_SYNC", "0") == "1"

_repo = Path(__file__).resolve().parent.parent
img_dir = Path(os.environ.get("SIMB_ROOT", _repo / ".simbricks")) / "images" / "base"
test_script = _repo / "scripts" / "guest" / "udp_floats.py"

# 1. System Configuration (Hardware & Topology)
syst = system.System("corundum-trunc")

base_disk = system.ExternalDiskImage(
    syst,
    path=str(img_dir / "base"),
    boot_dir=str(img_dir / "boot"),
)

switch = system.EthSwitch(syst)
switch.name = "switch"


def add_host(
    name: str, ip: str
) -> tuple[corundum_sys.CorundumLinuxHost, corundum_sys.CorundumNIC]:
    host = corundum_sys.CorundumLinuxHost(syst)
    host.name = name
    host.add_disk(base_disk)
    host.add_disk(system.LinuxConfigDiskImage(syst, host))
    nic = corundum_sys.CorundumNIC(syst)
    nic.name = f"{name}-nic"
    nic.add_ipv4(ip)
    host.connect_pcie_dev(nic)
    switch.connect_eth_peer_if(nic._eth_if)
    return host, nic


def add_test_app(host: corundum_sys.CorundumLinuxHost, cmds: list[str]) -> system.Application:
    app = system.GenericRawCommandApplication(host, cmds)
    # shows up in the guest as /tmp/guest/udp_floats.py
    app.add_config_file(system.ConfigFileArtifact("udp_floats.py", test_script))
    host.add_app(app)
    return app


host0, nic0 = add_host("host0", "10.0.0.1")
host1, nic1 = add_host("host1", "10.0.0.2")

add_test_app(host0, ["python3 /tmp/guest/udp_floats.py recv"])
sender = add_test_app(
    host1,
    [
        "sleep 2",  # let the receiver bind
        f"ping -c 2 {nic0._ip}",  # resolve ARP before the first datagram
        f"python3 /tmp/guest/udp_floats.py send {nic0._ip}",
        "sleep 3",  # let host0 print its results before the simulation ends
    ],
)
sender.wait = True  # simulation ends when the sender finishes

# 2. Simulation Configuration (Map Components to Simulators)
sim = sim_helpers.simple_simulation(
    syst,
    compmap={
        system.FullSystemHost: qemu_sim.QemuSim,
        corundum_sys.CorundumNIC: corundum_sim.CorundumVerilatorNICSim,
        system.EthSwitch: net_sim.SwitchNet,
    },
)
# also the output directory: out/<name>/<run>/output/out.json
sim.name = "trunc-sync" if SYNC else "trunc-nosync"
for s in sim.all_simulators():
    if isinstance(s, qemu_sim.QemuSim):
        # The guest kernel needs its initramfs (ahci driver) to mount /dev/sda1.
        s.initrd = str(img_dir / "boot" / "initrd")
    if isinstance(s, net_sim.SwitchNet):
        # Capture what is actually on the wire (compressed frames), see the
        # docstring. SwitchNet has no public setter, and simbricks-run --pcap
        # is parsed but never applied. The path is relative to output/, which
        # simbricks only creates at the end of the run (the switch would
        # silently capture nothing), so write into the run dir above it.
        s._relative_pcap_file_path = "../switch.pcap"
if SYNC:
    sim.enable_synchronization()

# 3. Instantiation Configuration
instance = inst_helpers.simple_instantiation(sim)
instantiations = [instance]
