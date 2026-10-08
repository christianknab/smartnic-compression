# smartnic compression

This project is working on characterizig when offloading compression to a SmartNIC reduces latency and increases throughput. The ideal setup is using two FPGAs as SmartNICS on two servers. Step 1 is using Verilator and QEMU to simulate the setup with [SimBricks](https://simbricks.io):

```
 [QEMU host0] <-- PCIe --> Corundum NIC0 (Verilated RTL) <-- eth -|
                                                                  switch
 [QEMU host1] <-- PCIe --> Corundum NIC1 (Verilated RTL) <-- eth -|
```

- QEMU simulates the hosts (which is an Ubuntu guest with the `mqnic` driver)
- Corundum  is the NIC: the RTL is compiled with Verilator into `simb_corundum`, which talks PCIe to QEMU and Ethernet to the switch through SimBricks adapters.
  - The compressor will somehow go into this RTL
- SimBricks orchestrates these components together, defined in `experiments/`

## Setup

I tested this on a CloudLab Ubuntu 24.04 x86_64 node (Clemson c8220).

Make sure you clone the repo with the submodules
```
git clone --recursive <this repo> && cd smartnic-compression
```
If you dont then make sure to update them
```
git submodule update --init --recursive
```

To get all the dependecies for a fresh install of apt dependencies, conda env, corundum build, and mqnic build (takes like 20 min)
```
./setup.sh
```

Each shell, you need to activate the env... because *yay*, conda...
```
source env.sh
```

`setup.sh` puts everything it installs into `./.simbricks/` (which is gitignored)

If you edit the RTL or the adaptor, you need to rerun `./setup.sh corundum`

The root partition on CloudLab is pretty small, about 60 GB. If you need more, you can put the repo on the extra disk first:
`sudo /usr/local/etc/emulab/mkextrafs.pl /mydata && sudo chown $USER /mydata`, then clone or copy files to `/mydata`.

## Running

```sh
source env.sh
simbricks-run --verbose experiments/corundum_qemu_vp.py
```

Boots both hosts, loads `mqnic`, runs iperf host1 -> host0 and exits when the client finishes. All simulator output, including the guest consoles, is collected in `out/<sim name>/<run #>/output/out.json`. To read it:

```sh
scripts/show_output.py                       # newest run, everything
scripts/show_output.py -s host1 -g Mbits     # just the iperf client results
```

There are two kinds of modes
- `unsynchronized`: use this to functionally test the RTL and our driver changes
  - the latency/throughput numbers from this are useless because each sim runs at its own speed
- `synchronized`: we will have to use this to do any throughput or latency measurements so that slow sims don't distort the measurements
  - the simulated nic is very slow. the nic needs 250 million clk cycles per simulated second (runs at 250 MHz). The simulator only does 66,000 cycles per real second, so its like 3,800x slower than it should be.
  - can look at checkpointing the host state after booting? will need to use gem5 bc it can actually checkpoint, but might be much slower than QEMU. will need to try this next

## Compression in the NIC

`nic-app/rtl/` is our Corundum application block (`mqnic_app_block`), built into `simb_corundum` by `./setup.sh corundum` in place of Corundum's empty template. It sits on the interface datapath of both NICs as a bump in the wire: the sending NIC compresses, the receiving NIC decompresses, so the hosts and the `mqnic` driver never see compressed packets.

`trunc_codec.v` is a simple test that does fp32 -> bf16 precision truncation of UDP datagrams to port 5555: the low 16 bits of every float are dropped on the wire and come back as zeros. Everything else (TCP, ARP, other ports) passes through untouched. To check it end to end:

```sh
simbricks-run --verbose experiments/trunc_udp.py
scripts/show_output.py -s host0 -g recv:     # PASS/FAIL per datagram + RESULT line
tcpdump -nn -r out/trunc-nosync/2/switch.pcap udp # show the data length captured
```

FYI, interrupted runs can leave sims running (sync-mode QEMU ignores SIGTERM). Check with `pgrep -af 'simb_|qemu-system'` and `kill -9` anything left running.
