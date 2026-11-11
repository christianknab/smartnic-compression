/*
 * ZFP codec settings, shared by the TX (mqnic_interface_tx.v) and RX
 * (mqnic_app_block.v) sides. Both NICs must be built with the same values.
 *
 * Either can be overridden from the command line, e.g. +define+ZFP_BLOCK_BITS=45
 * (the testbench does this).
 */
`ifndef ZFP_CONFIG_VH
`define ZFP_CONFIG_VH

// UDP destination port whose payload (fp32 array) gets compressed
`ifndef ZFP_UDP_PORT
`define ZFP_UDP_PORT 16'd5555
`endif

// DSCP a packet must carry to be compressed (top 6 bits of the IPv4 TOS
// byte). The sending app opts in per socket with
// setsockopt(IPPROTO_IP, IP_TOS, ZFP_DSCP << 2). 13 is unassigned.
`ifndef ZFP_DSCP
`define ZFP_DSCP 6'd13
`endif

// compressed bits per block of 4 fp32 values (21, 29 or 45)
`ifndef ZFP_BLOCK_BITS
`define ZFP_BLOCK_BITS 29
`endif

`endif
