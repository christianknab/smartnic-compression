"""Two QEMU hosts, each with a Verilated Corundum NIC, joined by a switch.

host0 (10.0.0.1) runs an iperf server, host1 (10.0.0.2) the client.

    source env.sh
    simbricks-run --verbose experiments/corundum_qemu_vp.py
    SIMB_SYNC=1 simbricks-run --verbose experiments/corundum_qemu_vp.py # synchronized timing
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

# Unsynchronized: QEMU uses KVM, qquick boot
# Synchronized: QEMU uses -icount (TCG) and all simulators run in lockstep
SYNC = os.environ.get("SIMB_SYNC", "0") == "1"

_repo = Path(__file__).resolve().parent.parent
img_dir = Path(os.environ.get("SIMB_ROOT", _repo / ".simbricks")) / "images" / "base"

# 1. System Configuration (Hardware & Topology)
syst = system.System("corundum-qemu")

# image built by `setup.sh image` (contains the mqnic driver)
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


host0, nic0 = add_host("host0", "10.0.0.1")
host1, nic1 = add_host("host1", "10.0.0.2")

host0.add_app(system.IperfTCPServer(h=host0))
client_app = system.IperfTCPClient(h=host1, server_ip=nic0._ip)
client_app.wait = True  # simulation ends when the client finishes
host1.add_app(client_app)

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
sim.name = "iperf-sync" if SYNC else "iperf-nosync"
for s in sim.all_simulators():
    if isinstance(s, qemu_sim.QemuSim):
        # The guest kernel needs its initramfs (ahci driver) to mount /dev/sda1.
        s.initrd = str(img_dir / "boot" / "initrd")
if SYNC:
    sim.enable_synchronization()

# 3. Instantiation Configuration
instance = inst_helpers.simple_instantiation(sim)
instantiations = [instance]
