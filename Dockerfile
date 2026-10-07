FROM anaconda/miniconda

RUN apt-get update && apt-get install -y --no-install-recommends \
        build-essential git make \
    && rm -rf /var/lib/apt/lists/*

RUN conda create -y -n simbricks \
    --override-channels \
    -c conda-forge -c https://conda.simbricks.io/latest \
    python=3.12 \
    simbricks-orchestration=0.5.0 simbricks-runner=0.5.0 simbricks-cli=0.5.0 \
    simbricks-runtime=0.5.0 simbricks-local=0.5.0 simbricks-utils=0.5.0 \
    simbricks-lib=0.5.0 \
    simbricks-qemu-sim-py=0.5.0 simbricks-qemu-sim-bin=0.5.0 \
    simbricks-net-base-sim-py=0.5.0 simbricks-net-base-sim-bin=0.5.0 \
    simbricks-corundum-sys-py=0.5.0 simbricks-corundum-sim-rtl-py=0.5.0 \
    simbricks-corundum-sim-rtl-bin=0.5.0 \
    verilator make gxx_linux-64 \
 && conda clean -afy

# Auto-activate in interactive shells
RUN echo "conda activate simbricks" >> /root/.bashrc

WORKDIR /workspace
