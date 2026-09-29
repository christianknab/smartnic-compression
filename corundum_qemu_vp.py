from pathlib import Path
from simbricks.orchestration import system
from simbricks.orchestration.helpers import simulation as sim_helpers
from simbricks.orchestration.helpers import instantiation as inst_helpers
from simbricks.components.qemu import simulation as qemu_sim
from simbricks.components.net.simulation import base as net_sim
from simbricks.components.corundum import system as corundum_sys
from simbricks.components.corundum import simulation as corundum_sim

# 1. System Configuration (Hardware & Topology)
syst = system.System("Corundum-QEMU-Prototype")

img_dir = Path("/home/seang/simbricks-ws/global_input/images/base")
base_disk = system.ExternalDiskImage(
    syst,
    path=str(img_dir / "base"),
    boot_dir=str(img_dir / "boot"),
)

# Patch QemuSim.run_cmd in-place so simple_simulation keeps the exact QemuSim class
_orig_run_cmd = qemu_sim.QemuSim.run_cmd
def _patched_run_cmd(self, inst):
    cmd = _orig_run_cmd(self, inst)
    initrd = next(p for p in sorted((img_dir / "boot").glob("initrd*")) if p.exists())
    return f"{cmd} -initrd {initrd}" if isinstance(cmd, str) else [*cmd, "-initrd", str(initrd)]

qemu_sim.QemuSim.run_cmd = _patched_run_cmd

# Switch connecting the two NICs
switch = system.EthSwitch(syst)

# Host 0 (Server) + Corundum NIC 0
host0 = corundum_sys.CorundumLinuxHost(syst)
host0.add_disk(base_disk)
host0.add_disk(system.LinuxConfigDiskImage(syst, host0))
nic0 = corundum_sys.CorundumNIC(syst)
nic0.add_ipv4("10.0.0.1")
host0.connect_pcie_dev(nic0)
switch.connect_eth_peer_if(nic0._eth_if)

# Host 1 (Client) + Corundum NIC 1
host1 = corundum_sys.CorundumLinuxHost(syst)
host1.add_disk(base_disk)
host1.add_disk(system.LinuxConfigDiskImage(syst, host1))
nic1 = corundum_sys.CorundumNIC(syst)
nic1.add_ipv4("10.0.0.2")
host1.connect_pcie_dev(nic1)
switch.connect_eth_peer_if(nic1._eth_if)

# Workload: Run iperf TCP server on host0 and client on host1
server_app = system.IperfTCPServer(h=host0)
host0.add_app(server_app)

client_app = system.IperfTCPClient(h=host1, server_ip=nic0._ip)
client_app.wait = True  # Stop simulation once client finishes
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

# 3. Instantiation Configuration
instance = inst_helpers.simple_instantiation(sim)
instantiations = [instance]
