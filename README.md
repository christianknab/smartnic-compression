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

UDP datagrams to port 5555 that are marked with DSCP=13 and whose payload is a whole number of fp32 values (at least 16 bytes) are compressed. The sending app opts in per socket with `setsockopt(IPPROTO_IP, IP_TOS, 13 << 2)` (the ECN bits are ignored); the same traffic without the mark goes out uncompressed. Packets are compressed with fixed-rate ZFP: every block of 4 floats becomes `W` bits (21, 29 or 45). Everything else (TCP, ARP, other ports, fragments) passes through untouched.

- **TX**: `zfp_tx_codec.v`, spliced into our copy of `mqnic_interface_tx.v` between the DMA read stream and Corundum's TX checksum offload. The compressed size follows from the header alone, so it rewrites the IP/UDP lengths and IP checksum up front and streams the packet through; it then hands Corundum a checksum command so the UDP checksum covers the compressed packet. Compressed packets are marked with the IP reserved flag bit.
- **RX**: `zfp_rx_codec.v`, in `mqnic_app_block.v` ahead of Corundum's RX checksum. It decodes the blocks, restores the original header and sets the UDP checksum to 0 (lossy data can never match the sender's checksum).
- **Wire format**: the compressed UDP payload starts with a 6-byte header (original length, `W`, version) followed by the packed blocks, LSB first. See the top of `zfp_tx_codec.v`.
- **Which packets get decompressed**: RX doesn't look at the DSCP. TX sets the IP reserved flag bit on every packet it compresses, and RX decompresses only packets with that bit and a valid codec header, then clears the bit.
- **Settings**: port, DSCP and `W` are in `zfp_config.vh`; both NICs must use the same port and `W`.
- **Encoder/decoder**: `zfp_encode.v` / `zfp_decode.v` are placeholders (they keep the top `W/4` bits of each float) to be replaced by the real ZFP modules with the same ports: 4 floats in (value 0 in bits [31:0]), `W` bits out, `out_valid` a fixed number of cycles after `in_valid`, no stall input. The wrappers handle any latency.

Packets are handled one at a time, with about 7 idle cycles per packet while the header is buffered.

Testbench (TX codec -> Corundum's unmodified checksum block -> RX codec, random gaps and stalls, every frame compared byte for byte against a Python model):

```sh
nic-app/tb/run.sh          # all W x placeholder latencies; output in nic-app/tb/build/
nic-app/tb/run.sh 29 1     # one configuration
```

When the real encoder/decoder go in, `encode_block()`/`decode_block()` in `nic-app/tb/zfp_vectors.py` need a bit-exact model of them.

`trunc_codec.v` (the earlier fp32 -> bf16 truncation test) is no longer built, so `experiments/trunc_udp.py` won't pass until it is reworked for ZFP.

FYI, interrupted runs can leave sims running (sync-mode QEMU ignores SIGTERM). Check with `pgrep -af 'simb_|qemu-system'` and `kill -9` anything left running.
