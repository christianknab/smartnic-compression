# smartnic compression

# setup

When cloning the repository, make sure you have the simbricks corundum submodule pulled:
```
git submodule update --init --recursive
```

### installing docker
Download docker.

On Cloudlab, you can use the `install_docker.sh` script.

If you are in WSL, make sure `nestedVirtualization=true` is in your `~/.wslconfig`.

### installing mqnic
In ./image-builder/scripts/install-base.sh, add git and ca-certificates, so it should be:
```
apt-get install -y --no-install-recommends \
    iperf iputils-ping lbzip2 netperf netcat-openbsd ethtool tcpdump \
    pciutils time curl git ca-certificates
```

then build:
```
docker run --rm -it --platform linux/amd64 \
  -v "$PWD:/work" -w /work simbricks-image-harness \
  make image ACCELERATOR=tcg \
    EXTRA_SCRIPTS="examples/corundum/install-mqnic.sh"
```


### running the container
build the custom docker image which installs the necessary requirements. You only need to do this once, or if you edit the Dockerfile.
```
docker compose build
```

You can start a shell in the container, but --rm will remove it when you exit
```
docker compose run --rm simbricks-dev bash
```

Or, you can do:
```
docker compose up -d
docker compose exec simbricks-dev bash
```
and remove when done
```
docker compose down
```

